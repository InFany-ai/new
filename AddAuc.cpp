#include "AddAuc.h"
#include "Header.h"
#include "MenuMain.h"

bool flag_close = false;
Int32 active_int = 0;


//Загрузка формы аукционов
System::Void Guliver::AddAuc::AddAuc_Load(System::Object^ sender, System::EventArgs^ e)
{
	view_auc(infoBoxSmallAuc);

	if (flag_close) {
		activ();//int 
	}

}



System::Void Guliver::AddAuc::inactiv() {
	//===========================
	textBoxChoiceAuc->Enabled = true;
	buttonAddAuction->Enabled = true;

	buttonDeleteAuc->Enabled = true;
	textBoxDeleteAuc->Enabled = true;

	textBoxNameAuc->Enabled = false;
	textBoxInfoAuc->Enabled = false;
	textBoxAddressAuc->Enabled = false;
	textBoxDateAuc->Enabled = false;
	textBoxTimeAuc->Enabled = false;
	buttonAuctionActive->Enabled = false;

	textBoxNameAuc->Text = "";
	textBoxInfoAuc->Text = "";
	textBoxAddressAuc->Text = "";

	view_auc(infoBoxSmallAuc);
	//===========================

}

System::Void Guliver::AddAuc::activ() {
	//==================
	textBoxChoiceAuc->Enabled = false;
	buttonAddAuction->Enabled = false;

	buttonDeleteAuc->Enabled = false;
	textBoxDeleteAuc->Enabled = false;

	textBoxNameAuc->Enabled = true;
	textBoxInfoAuc->Enabled = true;
	textBoxAddressAuc->Enabled = true;
	textBoxDateAuc->Enabled = true;
	textBoxTimeAuc->Enabled = true;
	buttonAuctionActive->Enabled = true;

	textBoxNameAuc->Text = "";
	textBoxInfoAuc->Text = "";
	textBoxAddressAuc->Text = "";
	textBoxDateAuc->Text = "0.0.0";
	textBoxTimeAuc->Text = "00:00";

	infoBoxSmallAuc->Text = "Вводиться інформація: Auction " + active_int;

	//==================

}



System::Void Guliver::AddAuc::buttonDeleteAuc_Click(System::Object^ sender, System::EventArgs^ e)
{
	Int32 del;
	bool access = false, flag = false;
	try {
		del = System::Int32::Parse(textBoxDeleteAuc->Text);
		if (del < 1 || del > 3)
			throw - 1;
		access = true;
	}
	catch (System::FormatException^ u) {
		MessageBox::Show(u->Message);
		textBoxDeleteAuc->Text = "";
	}
	catch (int) {
		MessageBox::Show("Значення (1-3)");
		textBoxDeleteAuc->Text = "";
	}
	if (access) {
		switch (del) {
		case 1:
			if (All_Auction::auc1 != nullptr) {
				All_Auction::l_auction->Add(All_Auction::auc1);
				All_Auction::auc1 = nullptr;
				flag = true;
			}
			else {
				MessageBox::Show("Inactive");
			}
			break;
		case 2:
			if (All_Auction::auc2 != nullptr) {
				All_Auction::l_auction->Add(All_Auction::auc2);
				All_Auction::auc2 = nullptr;
				flag = true;

			}
			else {
				MessageBox::Show("Inactive");
			}
			break;
		case 3:
			if (All_Auction::auc3 != nullptr) {
				All_Auction::l_auction->Add(All_Auction::auc3);
				All_Auction::auc3 = nullptr;
				flag = true;

			}
			else {
				MessageBox::Show("Inactive");
			}
			break;
		default:
			break;
		}
		textBoxDeleteAuc->Text = "";

		view_auc(infoBoxSmallAuc);
		if (flag) {
			StreamWriter^ file = gcnew StreamWriter("session.txt", true);
			file->WriteLine("#");
			Auction^ cen = All_Auction::l_auction[All_Auction::l_auction->Count - 1];
			file->WriteLine(cen->getNameA());
			file->WriteLine(cen->getInfoA());
			file->WriteLine(cen->getDate());
			file->WriteLine(cen->getTime());
			file->WriteLine(cen->getAddress());
			file->WriteLine("start_lot");
			for each (auto c in cen->getLot()) {
				file->WriteLine(c->getKey());
				file->WriteLine(c->getNameLot());
				file->WriteLine(c->getSeller());
				file->WriteLine(c->getStart());
				file->WriteLine(c->getFinish());
			}
			file->WriteLine("end_lot");
			file->WriteLine("start_buyer");
			for each (auto c in cen->getBuyer()) {
				file->WriteLine(c->nameBuyer);
				file->WriteLine(c->ID);
			}
			file->WriteLine("end_buyer");
			file->WriteLine("start_finish");
			for each (KeyValuePair<Lot^, Buyer^> ^ c in cen->getDic()) {
				file->WriteLine(c->Key->getKey());
				file->WriteLine(c->Key->getNameLot());
				file->WriteLine(c->Key->getSeller());
				file->WriteLine(c->Key->getStart());
				file->WriteLine(c->Key->getFinish());
				file->WriteLine(c->Value->nameBuyer);
				file->WriteLine(c->Value->ID);
			}
			file->WriteLine("end_finish");

			file->Close();

		}
	}

}

System::Void Guliver::AddAuc::buttonAuctionActive_Click(System::Object^ sender, System::EventArgs^ e)
{
	bool access = false;

	String^ name = textBoxNameAuc->Text;
	String^ info = textBoxInfoAuc->Text;
	String^ address = textBoxAddressAuc->Text;
	array<String^>^ split_date = textBoxDateAuc->Text->Split('.', 3);
	array<String^>^ split_time = textBoxTimeAuc->Text->Split(':', 2);
	_Date^ d;
	_Time^ t;
	//корректно считаем дату
	{
		Int32 temp;
		try {
			temp = System::Int32::Parse(split_date[0]);
			temp = System::Int32::Parse(split_date[1]);
			temp = System::Int32::Parse(split_date[2]);
			temp = System::Int32::Parse(split_time[0]);
			temp = System::Int32::Parse(split_time[1]);
			if (System::Int32::Parse(split_date[0]) > 30 || System::Int32::Parse(split_date[0]) < 1)
				throw - 1;
			if (System::Int32::Parse(split_date[1]) > 12 || System::Int32::Parse(split_date[1]) < 1)
				throw - 2;
			if (System::Int32::Parse(split_date[2]) < 1)
				throw - 3;
			if (System::Int32::Parse(split_time[1]) > 59 || System::Int32::Parse(split_time[1]) < 0)
				throw - 4;
			if (System::Int32::Parse(split_time[0]) < 1 || System::Int32::Parse(split_time[0]) > 23)
				throw - 5;
			if (name->Length < 3)
				throw - 6;
			if (info->Length < 3)
				throw - 7;
			if (address->Length < 3)
				throw - 8;

			access = true;

		}
		catch (System::FormatException^ u) {
			MessageBox::Show(u->Message + "\r\n(Формат часу) хвилини:години\r\n(Формат дати) день.місяць.рік");
			textBoxDateAuc->Text = "0.0.0";
			textBoxTimeAuc->Text = "0:0";
		}
		catch (System::IndexOutOfRangeException^ u) {
			MessageBox::Show("(Формат часу) хвилини:години\r\n(Формат дати) день.місяць.рік");
			textBoxDateAuc->Text = "0.0.0";
			textBoxTimeAuc->Text = "0:0";
		}
		catch (int a) {
			String^ b;
			if (a <= -1 && a >= -3)
				b = "Дата";
			else if (a == -4 || a == -5)
				b = "Час";
			else b = "Ім'я, Інформація, Адреса короче 3 символів";
			MessageBox::Show("Неіснуючі параметри\r\n" + b);
		}
		
	}
	if (access) {
		d = gcnew _Date(System::Int32::Parse(split_date[0]), System::Int32::Parse(split_date[1]), System::Int32::Parse(split_date[2]));
		t = gcnew _Time(System::Int32::Parse(split_time[0]), System::Int32::Parse(split_time[1]));
		switch (active_int)
		{
		case 1:
			All_Auction::auc1 = gcnew Auction(name, info, address, d, t);
			//All_Auction::l_auction->Add(All_Auction::auc1); 
			break;
		case 2:
			All_Auction::auc2 = gcnew Auction(name, info, address, d, t);
			//All_Auction::l_auction->Add(All_Auction::auc2);

			break;
		case 3:
			All_Auction::auc3 = gcnew Auction(name, info, address, d, t);
			//All_Auction::l_auction->Add(All_Auction::auc3);
			break;
		default:
			break;
		}
		inactiv();
		active_int = 0;
		flag_close = false;
	}
	




}
//активация аукциона
System::Void Guliver::AddAuc::buttonAddAuction_Click(System::Object^ sender, System::EventArgs^ e)
{
	Int32 choice;
	try {
		choice = System::Int32::Parse(textBoxChoiceAuc->Text);
	}
	catch (System::FormatException^ e) {
		MessageBox::Show(e->Message);
		textBoxChoiceAuc->Text = "";
		choice = 0;
	}
	switch (choice) {
	case 0:
		break;
	case 1:
		if (All_Auction::auc1 == nullptr) {
			active_int = 1;
			activ();
		}
		else
			MessageBox::Show("Аукціон вже активний");
		break;
	case 2:
		if (All_Auction::auc2 == nullptr) {
			active_int = 2;
			activ();
		}
		else
			MessageBox::Show("Аукціон вже активний");
		break;
	case 3:
		if (All_Auction::auc3 == nullptr) {
			active_int = 3;
			activ();
		}
		else
			MessageBox::Show("Аукціон вже активний");
		break;
	default:
		MessageBox::Show("Не припустиме значення");
		textBoxChoiceAuc->Text = "";
		break;
	}
	if (active_int)
		infoBoxSmallAuc->Text = "Вводиться інформація: Auction " + active_int;
}

System::Void Guliver::AddAuc::AddAuc_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	if (active_int)
		flag_close = true;
	System::Windows::Forms::FormCollection^ gg = Application::OpenForms;
	gg[0]->Show();
}
