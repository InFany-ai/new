#include "LotMenu.h"
#include "Header.h"


//1
System::Void Guliver::LotMenu::buttonAuctionOne_Click(System::Object^ sender, System::EventArgs^ e)
{
	bool access = false;
	String^ nameS = textBoxNameSeller->Text;
	String^ nameL = textBoxNameLot->Text;
	Int32 price;
	try {
		price = System::Int32::Parse(textBoxStartPrice->Text);
		if (price < 1)
			throw - 1;
		if(nameS->Length < 3)
			throw - 1;
		if (nameL->Length < 3)
			throw - 1;

		access = true;
	}
	catch (System::FormatException^ u) {
		MessageBox::Show(u->Message);
		textBoxStartPrice->Text = "";
	}
	catch (int) {
		MessageBox::Show("Неіснуюча інформація");
		textBoxStartPrice->Text = "";
		textBoxNameSeller->Text = "";
		textBoxNameLot->Text = "";
	}
	if (access) {
		Lot^ new_lot = gcnew Lot(nameL, nameS, price);
		All_Auction::auc1->addLot(new_lot);
		textBoxNameSeller->Text = "";
		textBoxNameLot->Text = "";
		textBoxStartPrice->Text = "";
		MessageBox::Show("GOOD");
	}

}
//2
System::Void Guliver::LotMenu::buttonAuctionTwo_Click(System::Object^ sender, System::EventArgs^ e)
{
	bool access = false;
	String^ nameS = textBoxNameSeller->Text;
	String^ nameL = textBoxNameLot->Text;
	Int32 price;
	try {
		price = System::Int32::Parse(textBoxStartPrice->Text);
		if (price < 1)
			throw - 1;
		if (nameS->Length < 3)
			throw - 1;
		if (nameL->Length < 3)
			throw - 1;

		access = true;
	}
	catch (System::FormatException^ u) {
		MessageBox::Show(u->Message);
		textBoxStartPrice->Text = "";
	}
	catch (int) {
		MessageBox::Show("Неіснуюча інформація");
		textBoxStartPrice->Text = "";
		textBoxNameSeller->Text = "";
		textBoxNameLot->Text = "";

	}
	if (access) {
		Lot^ new_lot = gcnew Lot(nameL, nameS, price);
		All_Auction::auc2->addLot(new_lot);
		textBoxNameSeller->Text = "";
		textBoxNameLot->Text = "";
		textBoxStartPrice->Text = "";
		MessageBox::Show("GOOD");
	}
}
//3
System::Void Guliver::LotMenu::buttonAuctionThree_Click(System::Object^ sender, System::EventArgs^ e)
{
	bool access = false;
	String^ nameS = textBoxNameSeller->Text;
	String^ nameL = textBoxNameLot->Text;
	Int32 price;
	try {
		price = System::Int32::Parse(textBoxStartPrice->Text);
		if (price < 1)
			throw - 1;
		if (nameS->Length < 3)
			throw - 1;
		if (nameL->Length < 3)
			throw - 1;

		access = true;
	}
	catch (System::FormatException^ u) {
		MessageBox::Show(u->Message);
		textBoxStartPrice->Text = "";
	}
	catch (int) {
		MessageBox::Show("Неіснуюча інформація");
		textBoxStartPrice->Text = "";
		textBoxNameSeller->Text = "";
		textBoxNameLot->Text = "";

	}
	if (access) {
		Lot^ new_lot = gcnew Lot(nameL, nameS, price);
		All_Auction::auc3->addLot(new_lot);
		textBoxNameSeller->Text = "";
		textBoxNameLot->Text = "";
		textBoxStartPrice->Text = "";
		MessageBox::Show("GOOD");
	}
}
//start
System::Void Guliver::LotMenu::LotMenu_Load(System::Object^ sender, System::EventArgs^ e)
{
	if (All_Auction::auc1 == nullptr) {
		buttonAuctionOne->Enabled = false;
		buttonAuctionOne->Text = "";
	}
	else {
		buttonAuctionOne->Text = All_Auction::auc1->getNameA();
	}
	if (All_Auction::auc2 == nullptr) {
		buttonAuctionTwo->Enabled = false;
		buttonAuctionTwo->Text = "";

	}
	else {
		buttonAuctionTwo->Text = All_Auction::auc2->getNameA();
	}
	if (All_Auction::auc3 == nullptr) {
		buttonAuctionThree->Enabled = false;
		buttonAuctionThree->Text = "";
	}
	else {
		buttonAuctionThree->Text = All_Auction::auc3->getNameA();
	}

}
