#include "Lot_admin.h"

System::Void Guliver::Lot_admin::show_() {
	textBoxMenuLot->Text = "";

	if (All_Auction::auc1 != nullptr) {
		textBoxMenuLot->Text += "Àóêö³îí " + All_Auction::auc1->getNameA() + "\r\n";
		All_Auction::auc1->ShowAllLot(textBoxMenuLot);
		All_Auction::auc1->ShowAllBuyer(textBoxMenuLot);
	}
	if (All_Auction::auc2 != nullptr) {
		textBoxMenuLot->Text += "Àóêö³îí " + All_Auction::auc2->getNameA() + "\r\n";
		All_Auction::auc2->ShowAllLot(textBoxMenuLot);
		All_Auction::auc2->ShowAllBuyer(textBoxMenuLot);

	}
	if (All_Auction::auc3 != nullptr) {
		textBoxMenuLot->Text += "Àóêö³îí " + All_Auction::auc3->getNameA() + "\r\n";
		All_Auction::auc3->ShowAllLot(textBoxMenuLot);
		All_Auction::auc3->ShowAllBuyer(textBoxMenuLot);

	}
}

System::Void Guliver::Lot_admin::Lot_admin_Load(System::Object^ sender, System::EventArgs^ e)
{
	show_();
}

System::Void Guliver::Lot_admin::buttonDeleteLot_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ num = textBoxDelete->Text; textBoxDelete->Text = "";

	if (All_Auction::auc1 != nullptr) {
		All_Auction::auc1->DeleteLot(num);
	}
	if (All_Auction::auc2 != nullptr) {
		All_Auction::auc2->DeleteLot(num);
	}
	if (All_Auction::auc3 != nullptr) {
		All_Auction::auc3->DeleteLot(num);
	}
	show_();
}

System::Void Guliver::Lot_admin::buttonWriteBuy_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ lot = textBoxLot->Text;
	String^ buy = textBoxBuyer->Text; bool access = false;
	Int32 finish;
	try {
		finish = System::Int32::Parse(textBoxEndPrice->Text);
		if (finish < 1)
			throw - 1;
		access = true;
	}
	catch (int) {
		textBoxEndPrice->Text = "";
	}
	catch (System::FormatException^ u) {
		MessageBox::Show(u->Message);
	}
	if (access) {
		if (All_Auction::auc1 != nullptr)
			All_Auction::auc1->WriteBuy(lot, buy, finish);
		if (All_Auction::auc2 != nullptr)
			All_Auction::auc2->WriteBuy(lot, buy, finish);
		if (All_Auction::auc3 != nullptr)
			All_Auction::auc3->WriteBuy(lot, buy, finish);
	}
	show_();
	textBoxEndPrice->Text = "";
	textBoxLot->Text = "";
	textBoxBuyer->Text = "";
}
