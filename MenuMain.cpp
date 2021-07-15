#include "MenuMain.h"
#include "Header.h"



System::Void Guliver::MenuMain::аукционToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	AddAuc^ formAddAuc = gcnew AddAuc();
	formAddAuc->Show();
	this->Hide();
}

System::Void Guliver::MenuMain::лотToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	LotMenu^ formLotMenu = gcnew LotMenu();
	formLotMenu->Show();
	//this->Hide();
}

System::Void Guliver::MenuMain::покупцяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	SellerMenu^ formSellerMenu = gcnew SellerMenu();
	formSellerMenu->Show();

}

//System::Void Guliver::MenuMain::showForInfo()
//{
//	return System::Void();
//}

System::Void Guliver::MenuMain::проПродавцівToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBoxAllInfo->Text = "===Активні продавці===\r\n";
	textBoxAllInfo->Text += "\r\n";

	if (All_Auction::auc1 != nullptr) {
		textBoxAllInfo->Text += "Аукціон " + All_Auction::auc1->getNameA() + "\r\n";
		All_Auction::auc1->ShowSeller(textBoxAllInfo);
	}
	if (All_Auction::auc2 != nullptr) {
		textBoxAllInfo->Text += "Аукціон " + All_Auction::auc2->getNameA() + "\r\n";
		All_Auction::auc2->ShowSeller(textBoxAllInfo);
	}
	if (All_Auction::auc3 != nullptr) {
		textBoxAllInfo->Text += "Аукціон " + All_Auction::auc3->getNameA() + "\r\n";
		All_Auction::auc3->ShowSeller(textBoxAllInfo);
	}

	textBoxAllInfo->Text += "===Неактивні продавці===\r\n";

	for (int i = 0; i < All_Auction::l_auction->Count; i++) {
		textBoxAllInfo->Text += "Аукціон " + All_Auction::l_auction[i]->getNameA() + "\r\n";
		All_Auction::l_auction[i]->ShowSeller(textBoxAllInfo);
	}

	textBoxAllInfo->Text += "\r\n";


}

System::Void Guliver::MenuMain::проАукціониToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBoxAllInfo->Text = "===Активні Аукціони===\r\n";
	textBoxAllInfo->Text += "\r\n";

	if (All_Auction::auc1 != nullptr)
		All_Auction::auc1->ShowAuction(textBoxAllInfo);

	if (All_Auction::auc2 != nullptr)
		All_Auction::auc2->ShowAuction(textBoxAllInfo);

	if (All_Auction::auc3 != nullptr)
		All_Auction::auc3->ShowAuction(textBoxAllInfo);

	textBoxAllInfo->Text += "===Завершені аукціони===\r\n";

	for (int i = 0; i < All_Auction::l_auction->Count; i++)
		All_Auction::l_auction[i]->ShowAuction(textBoxAllInfo);

}

System::Void Guliver::MenuMain::проПокупцівToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBoxAllInfo->Text = "===Активні покупці===\r\n";
	textBoxAllInfo->Text += "\r\n";

	if (All_Auction::auc1 != nullptr) {
		textBoxAllInfo->Text += "Аукціон " + All_Auction::auc1->getNameA() + "\r\n";
		All_Auction::auc1->ShowAllBuyer(textBoxAllInfo);
	}
	if (All_Auction::auc2 != nullptr) {
		textBoxAllInfo->Text += "Аукціон " + All_Auction::auc2->getNameA() + "\r\n";
		All_Auction::auc2->ShowAllBuyer(textBoxAllInfo);
	}
	if (All_Auction::auc3 != nullptr) {
		textBoxAllInfo->Text += "Аукціон " + All_Auction::auc3->getNameA() + "\r\n";
		All_Auction::auc3->ShowAllBuyer(textBoxAllInfo);
	}
	textBoxAllInfo->Text += "===Неактивні покупці===\r\n";
	textBoxAllInfo->Text += "\r\n";

	for (int i = 0; i < All_Auction::l_auction->Count; i++) {
		textBoxAllInfo->Text += "Аукціон " + All_Auction::l_auction[i]->getNameA() + "\r\n";
		All_Auction::l_auction[i]->ShowAllBuyer(textBoxAllInfo);
	}
}

System::Void Guliver::MenuMain::проЛотиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBoxAllInfo->Text = "===Активні лоти===\r\n";
	textBoxAllInfo->Text += "\r\n";

	if (All_Auction::auc1 != nullptr) {
		textBoxAllInfo->Text += "Аукціон " + All_Auction::auc1->getNameA() + "\r\n";

		All_Auction::auc1->ShowAllLot(textBoxAllInfo);

	}

	if (All_Auction::auc2 != nullptr) {
		textBoxAllInfo->Text += "Аукціон " + All_Auction::auc2->getNameA() + "\r\n";

		All_Auction::auc2->ShowAllLot(textBoxAllInfo);

	}
	if (All_Auction::auc3 != nullptr) {
		textBoxAllInfo->Text += "Аукціон " + All_Auction::auc3->getNameA() + "\r\n";

		All_Auction::auc3->ShowAllLot(textBoxAllInfo);

	}

	textBoxAllInfo->Text += "===Завершені лоти===\r\n";
	textBoxAllInfo->Text += "\r\n";

	for (int i = 0; i < All_Auction::l_auction->Count; i++) {
		textBoxAllInfo->Text += "Аукціон " + All_Auction::l_auction[i]->getNameA() + "\r\n";
		All_Auction::l_auction[i]->ShowAllLot(textBoxAllInfo);
	}
	textBoxAllInfo->Text += "\r\n";
	textBoxAllInfo->Text += "\r\n";

}

System::Void Guliver::MenuMain::менюЛотівToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Lot_admin^ formLot_admin = gcnew Lot_admin();
	formLot_admin->Show();
}

System::Void Guliver::MenuMain::buttonMuchLot_Click(System::Object^ sender, System::EventArgs^ e)
{
	Int32 max = -1;
	if (All_Auction::auc1 != nullptr) {
		if (max == -1)
			max = All_Auction::auc1->MaxLot();
		if (max < All_Auction::auc1->MaxLot())
			max = All_Auction::auc1->MaxLot();
	}
	if (All_Auction::auc2 != nullptr) {
		if (max == -1)
			max = All_Auction::auc2->MaxLot();
		if (max < All_Auction::auc2->MaxLot())
			max = All_Auction::auc2->MaxLot();
	}
	if (All_Auction::auc3 != nullptr) {
		if (max == -1)
			max = All_Auction::auc3->MaxLot();
		if (max < All_Auction::auc3->MaxLot())
			max = All_Auction::auc3->MaxLot();
	}
	for (int i = 0; i < All_Auction::l_auction->Count; i++) {
		if (max == -1)
			max = All_Auction::l_auction[i]->MaxLot();
		if (max < All_Auction::l_auction[i]->MaxLot())
			max = All_Auction::l_auction[i]->MaxLot();
	}
	if (max != -1) {
		textBoxAllInfo->Text = "";
		if (All_Auction::auc1 != nullptr) {
			All_Auction::auc1->ShowMaxLot(max, textBoxAllInfo);
		}

		if (All_Auction::auc2 != nullptr) {
			All_Auction::auc3->ShowMaxLot(max, textBoxAllInfo);
		}
		if (All_Auction::auc3 != nullptr) {
			All_Auction::auc3->ShowMaxLot(max, textBoxAllInfo);
		}

		for (int i = 0; i < All_Auction::l_auction->Count; i++) {
			All_Auction::l_auction[i]->ShowMaxLot(max, textBoxAllInfo);
		}
	}
	else textBoxAllInfo->Text = "Інформація відсутня\r\n";

}

System::Void Guliver::MenuMain::buttonManyLot_Click(System::Object^ sender, System::EventArgs^ e)
{
	Int32 max = -1;
	String^ name = "unknown";
	if (All_Auction::auc1 != nullptr) {
		if (max < All_Auction::auc1->MaxSell()) {
			max = All_Auction::auc1->MaxSell();
			name = All_Auction::auc1->getNameA();
		}
	}
	if (All_Auction::auc2 != nullptr) {
		if (max < All_Auction::auc2->MaxSell()) {
			max = All_Auction::auc2->MaxSell();
			name = All_Auction::auc2->getNameA();
		}
	}
	if (All_Auction::auc3 != nullptr) {
		if (max < All_Auction::auc3->MaxSell()) {
			max = All_Auction::auc3->MaxSell();
			name = All_Auction::auc3->getNameA();
		}
	}
	for (int i = 0; i < All_Auction::l_auction->Count; i++) {
		if (max < All_Auction::l_auction[i]->MaxSell()) {
			max = All_Auction::l_auction[i]->MaxSell();
			name = All_Auction::l_auction[i]->getNameA();
		}
	}
	if (max != -1) {
		textBoxAllInfo->Text = "Максимальна кількість проданих лотів на аукціоні " + name + "\r\n";
	}
	else textBoxAllInfo->Text = "Інформація відсутня\r\n";

}

System::Void Guliver::MenuMain::buttonMaxDifference_Click(System::Object^ sender, System::EventArgs^ e)
{
	Lot^ max, ^ min; bool flag = true;
	if (All_Auction::auc1 != nullptr) {
		min = All_Auction::auc1->MaxDifference();
		if (flag) {
			max = min;
			flag = false;
		}
		if (max->getFinish() - max->getStart() < min->getFinish() - min->getStart()) {
			max = All_Auction::auc1->MaxDifference();
		}
	}
	if (All_Auction::auc2 != nullptr) {
		min = All_Auction::auc2->MaxDifference();

		if (flag) {
			max = min;
			flag = false;
		}
		if (max->getFinish() - max->getStart() < min->getFinish() - min->getStart()) {
			max = All_Auction::auc2->MaxDifference();
		}
	}
	if (All_Auction::auc3 != nullptr) {
		min = All_Auction::auc3->MaxDifference();

		if (flag) {
			max = min;
			flag = false;
		}
		if (max->getFinish() - max->getStart() < min->getFinish() - min->getStart()) {
			max = All_Auction::auc3->MaxDifference();
		}
	}
	for (int i = 0; i < All_Auction::l_auction->Count; i++) {
		min = All_Auction::l_auction[i]->MaxDifference();
		if (min != nullptr) {
			if (flag) {
				max = min;
				flag = false;
			}
			if (max->getFinish() - max->getStart() < min->getFinish() - min->getStart()) {
				max = All_Auction::l_auction[i]->MaxDifference();
			}
		}
		
	}
	if (!flag) {
		textBoxAllInfo->Text = "Лот з найбільшою різницею стартової та фінальної ціни " + max->getKey() + "\r\n";
	}
	else textBoxAllInfo->Text = "Інформація відсутня\r\n";
}

System::Void Guliver::MenuMain::buttonDate_Click(System::Object^ sender, System::EventArgs^ e)
{
	Int32 temp;
	array<String^>^ split_date = textBox1->Text->Split('.', 3);
	bool access = false;
	try {
		temp = System::Int32::Parse(split_date[0]);
		temp = System::Int32::Parse(split_date[1]);
		temp = System::Int32::Parse(split_date[2]);
		if (System::Int32::Parse(split_date[0]) > 30 || System::Int32::Parse(split_date[0]) < 1)
			throw - 1;
		if (System::Int32::Parse(split_date[1]) > 12 || System::Int32::Parse(split_date[1]) < 1)
			throw - 2;
		if (System::Int32::Parse(split_date[2]) < 1)
			throw - 3;
		access = true;
	}
	catch (System::FormatException^ u) {
		MessageBox::Show(u->Message + "(Формат дати) день.місяць.рік");
		textBox1->Text = "0.0.0";
	}
	catch (System::IndexOutOfRangeException^ u) {
		MessageBox::Show("(Формат дати) день.місяць.рік");
		textBox1->Text = "0.0.0";
	}
	catch (int) {
		MessageBox::Show("Неіснуючі параметри\r\n" + "Дата");
	}
	if (access) {
		_Date^ da = gcnew _Date(System::Int32::Parse(split_date[0]), System::Int32::Parse(split_date[1]), System::Int32::Parse(split_date[2]));
		textBoxAllInfo->Text = "";
		if (All_Auction::auc1 != nullptr) {
			if (da->dmy == All_Auction::auc1->getDate())
				All_Auction::auc1->ShowAllLot(textBoxAllInfo);

		}
		if (All_Auction::auc2 != nullptr) {
			if (da->dmy == All_Auction::auc2->getDate())
				All_Auction::auc2->ShowAllLot(textBoxAllInfo);
		}
		if (All_Auction::auc3 != nullptr) {
			if (da->dmy == All_Auction::auc3->getDate())
				All_Auction::auc3->ShowAllLot(textBoxAllInfo);
		}
		for (int i = 0; i < All_Auction::l_auction->Count; i++) {
			if (All_Auction::l_auction[i] != nullptr) {
				if (da->dmy == All_Auction::l_auction[i]->getDate())
					All_Auction::l_auction[i]->ShowAllLot(textBoxAllInfo);
			}
		}
		textBox1->Text = "";
	}
}

System::Void Guliver::MenuMain::buttonSpec_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ name = textBox1->Text;
	textBoxAllInfo->Text = "";
	textBoxAllInfo->Text += "===Активні лоти===\r\n";

	if (All_Auction::auc1 != nullptr) {
		if (name == All_Auction::auc1->getInfoA())
			textBoxAllInfo->Text += "Аукціон " + All_Auction::auc1->getNameA() + "\r\n";
	}

	if (All_Auction::auc2 != nullptr) {
		if (name == All_Auction::auc2->getInfoA())
			textBoxAllInfo->Text += "Аукціон " + All_Auction::auc2->getNameA() + "\r\n";
	}
	if (All_Auction::auc3 != nullptr) {
		if (name == All_Auction::auc3->getInfoA())
			textBoxAllInfo->Text += "Аукціон " + All_Auction::auc3->getNameA() + "\r\n";
	}

	textBoxAllInfo->Text += "===Завершені лоти===\r\n";
	textBoxAllInfo->Text += "\r\n";

	for (int i = 0; i < All_Auction::l_auction->Count; i++) {
		if (name == All_Auction::l_auction[i]->getInfoA())
			textBoxAllInfo->Text += "Аукціон " + All_Auction::l_auction[i]->getNameA() + "\r\n";
	}
	textBox1->Text = "";
	textBoxAllInfo->Text += "\r\n";
	textBoxAllInfo->Text += "\r\n";
}

System::Void Guliver::MenuMain::MenuMain_Load(System::Object^ sender, System::EventArgs^ e)
{
	try {
		StreamReader^ file = gcnew StreamReader("session.txt");
		array<String^>^ auction = gcnew array<String^>(5);
		List<Lot^>^ lot = gcnew List<Lot^>();
		List<Buyer^ >^ buyer = gcnew List<Buyer^>();
		array<String^>^ l = gcnew array<String^>(5);
		array<String^>^ b = gcnew array<String^>(2);
		Dictionary<Lot^, Buyer^>^ dic = gcnew Dictionary<Lot^, Buyer^>();
		String^ temp;
		while (!file->EndOfStream) {
			file->ReadLine();
			if (file->EndOfStream)
				break;
			auction[0] = file->ReadLine();
			auction[1] = file->ReadLine();
			auction[2] = file->ReadLine();
			auction[3] = file->ReadLine();
			auction[4] = file->ReadLine();
			//start_lot
			temp = file->ReadLine();
			while (temp != "end_lot") {
				temp = file->ReadLine();
				if (temp == "end_lot")
					continue;
				l[0] = temp;
				l[1] = file->ReadLine();
				l[2] = file->ReadLine();
				l[3] = file->ReadLine();
				l[4] = file->ReadLine();
				lot->Add(gcnew Lot(l[0], l[1], l[2], System::Int32::Parse(l[3]), System::Int32::Parse(l[4])));
			}
			//end_lot

			//start_buyer
			temp = file->ReadLine();
			while (temp != "end_buyer") {
				temp = file->ReadLine();
				if (temp == "end_buyer")
					continue;
				b[0] = temp;
				b[1] = file->ReadLine();
				buyer->Add(gcnew Buyer(b[0], b[1]));
			}
			//end buyer

			//start_finish
			temp = file->ReadLine();
			while (temp != "end_finish") {
				temp = file->ReadLine();
				if (temp == "end_finish")
					continue;
				l[0] = temp;
				l[1] = file->ReadLine();
				l[2] = file->ReadLine();
				l[3] = file->ReadLine();
				l[4] = file->ReadLine();
				b[0] = file->ReadLine();
				b[1] = file->ReadLine();
				dic->Add(gcnew Lot(l[0], l[1], l[2], System::Int32::Parse(l[3]), System::Int32::Parse(l[4])), gcnew Buyer(b[0], b[1]));
			}
			//end_finish
			_Date^ da = gcnew _Date(auction[2]->Split('.', 3));
			_Time^ ti = gcnew _Time(auction[3]->Split(':', 2));

			All_Auction::l_auction->Add(gcnew Auction(auction[0], auction[1], da, ti, auction[4], lot, buyer, dic));
			lot->Clear();
			buyer->Clear();
			dic->Clear();
			textBoxAllInfo->Text = "Download....";
		}

		MessageBox::Show("Інформація завантажена");
		textBoxAllInfo->Text = "";
		file->Close();
	}
	catch (System::IO::FileNotFoundException^ u) {
		MessageBox::Show(u->Message);
		
	}
	

}




