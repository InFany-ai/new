#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::IO;

ref class Lot {
	String^ key;
	String^ nameLot;
	String^ seller;
	Int32 start;
	Int32 finish;
public:
	Lot() : key("-1"), nameLot("unknown"), seller("unknown"), start(-1), finish(-1) {
		Int32 _i;
		try {
			StreamReader^ _lot1 = gcnew StreamReader("id_lot.txt");
			_i = (System::Int32::Parse(_lot1->ReadLine()));
			_lot1->Close(); _i += 1;
			StreamWriter^ _lot2 = gcnew StreamWriter("id_lot.txt");
			_lot2->WriteLine(_i);
			_lot2->Close();
		}
		catch (System::IO::FileNotFoundException^ ex) {
			StreamWriter^ _lot3 = gcnew StreamWriter("id_lot.txt");
			_i = 1;
			_lot3->WriteLine(_i);
			_lot3->Close();
		}
		key = "L" + _i;
	}
	Lot(String^ _nameLot, String^ _seller, Int32 _start) : nameLot(_nameLot), seller(_seller), start(_start), finish(start) {
		Int32 _i;
		try {
			StreamReader^ _lot1 = gcnew StreamReader("id_lot.txt");
			_i = (System::Int32::Parse(_lot1->ReadLine()));
			_lot1->Close(); _i += 1;
			StreamWriter^ _lot2 = gcnew StreamWriter("id_lot.txt");
			_lot2->WriteLine(_i);
			_lot2->Close();
		}
		catch (System::IO::FileNotFoundException^ ex) {
			StreamWriter^ _lot3 = gcnew StreamWriter("id_lot.txt");
			_i = 1;
			_lot3->WriteLine(_i);
			_lot3->Close();
		}
		key = "L" + _i;
	}
	Lot(String^ _key, String^ _nameLot, String^ _seller, Int32 _start, Int32 _finish) : nameLot(_nameLot), seller(_seller), start(_start), finish(_finish), key(_key) {}
	Lot(const Lot^ obj) : key(obj->key), nameLot(obj->nameLot), seller(obj->seller), start(obj->start), finish(obj->finish) {}

	String^ getKey() { return key; }
	String^ getNameLot() { return nameLot; }
	String^ getSeller() { return seller; }
	Int32 getStart() { return start; }
	Int32 getFinish() { return finish; }
	void setFinish(Int32 f) { finish = f; }
	
};

ref struct Buyer {
	String^ nameBuyer;
	String^ ID;
	Buyer(String^ na) : nameBuyer(na) {
		Int32 _ident;
		try {
			StreamReader^ _buy1 = gcnew StreamReader("id_buyer.txt");
			_ident = (System::Int32::Parse(_buy1->ReadLine()));
			_buy1->Close(); _ident += 1;
			StreamWriter^ _write = gcnew StreamWriter("id_buyer.txt");
			_write->WriteLine(_ident);
			_write->Close();
		}
		catch (System::IO::FileNotFoundException^ ex) {
			StreamWriter^ _buy2 = gcnew StreamWriter("id_buyer.txt");
			_ident = 1;
			_buy2->WriteLine(_ident);
			_buy2->Close();
		}
		ID = "B" + _ident;
	}
	Buyer(String^ na, String^ ke) : nameBuyer(na), ID(ke) {}
	void Show(TextBox^ box) {
		box->Text += "ID: " + ID + " " + nameBuyer + "\r\n";
	}
};

ref class _Date {
	Int32 day;
	Int32 month;
	Int32 year;
public:
	String^ dmy;
	_Date() {}
	_Date(Int32 d, Int32 m, Int32 y) : day(d), month(m), year(y), dmy(d + "." + m + "." + y) {}
	_Date(const _Date^ obj) : day(obj->day), month(obj->month), year(obj->year) {}
	_Date(array<String^>^ d) {
		day = System::Int32::Parse(d[0]);
		month = System::Int32::Parse(d[1]);
		year = System::Int32::Parse(d[2]);
		dmy = day + "." + month + "." + year;
	}
};
ref class _Time {
	Int32 hour;
	Int32 minut;
public:
	String^ hm;
	_Time() {};
	_Time(Int32 h, Int32 m) : hour(h), minut(m), hm(h + ":" + m) {}
	_Time(const _Time^ obj) : hour(obj->hour), minut(obj->minut), hm(obj->hm) {}
	_Time(array<String^>^ t) {
		hour = System::Int32::Parse(t[0]);
		minut = System::Int32::Parse(t[1]);
		hm = hour + ":" + minut;
	}
};
ref class Auction {
	String^ nameAuction;
	String^ infoAuction;
	_Date^ date;
	_Time^ time;
	String^ address;
	List<Lot^>^ l_lot = gcnew List<Lot^>();
	List<Buyer^>^ l_buyer = gcnew List<Buyer^>();
	Dictionary<Lot^, Buyer^>^ result = gcnew Dictionary<Lot^, Buyer^>();
	
public:
	~Auction() {
		l_lot->Clear();
		l_buyer->Clear();
		result->Clear();
	}
	Auction() : nameAuction("unknown"), infoAuction("unknown"), address("unknown") {}
	Auction(const Auction^ obj) {
		nameAuction = obj->nameAuction;
		infoAuction = obj->infoAuction;
		date = obj->date;
		time = obj->time;
		address = obj->address;
		for each (auto c in obj->l_lot)
			l_lot->Add(c);

		for each (auto c in obj->l_buyer)
			l_buyer->Add(c);

		for each (KeyValuePair<Lot^, Buyer^> ^ c in obj->result) {
			result->Add(c->Key, c->Value);
		}

	}
	Auction(String^ name, String^ info, String^ adres, _Date^ dat, _Time^ tim) {
		this->nameAuction = name;
		this->infoAuction = info;
		this->address = adres;
		this->date = dat;
		this->time = tim;
	}
	Auction(String^ name, String^ info, _Date^ dat, _Time^ tim, String^ addre, List<Lot^>^ lot, List<Buyer^>^ buy, Dictionary<Lot^, Buyer^>^ res) {
		nameAuction = name;
		infoAuction = info;
		date = dat;
		time = tim;
		address = addre;
		for each (auto c in lot) 
			l_lot->Add(c);
		
		for each (auto c in buy) 
			l_buyer->Add(c);
		
		for each (KeyValuePair<Lot^, Buyer^>^ c in res) {
			result->Add(c->Key, c->Value);
		}
	}
	List<Lot^>^ getLot() { return l_lot; }
	List<Buyer^>^ getBuyer() { return l_buyer; }
	Dictionary<Lot^, Buyer^>^ getDic() { return result; }
	String^ getNameA() { return nameAuction; }
	String^ getInfoA() { return infoAuction; }
	String^ getDate() { return date->dmy; }
	String^ getTime() { return time->hm; }
	String^ getAddress() { return address; }
	void addLot(Lot^ obj) {
		l_lot->Add(obj);
	}
	void addBuyer(Buyer^ obj) {
		l_buyer->Add(obj);
	}
	void DeleteLot(String^ n) {
		for (int i = 0; i < l_lot->Count; i++) {
			if (l_lot[i]->getKey() == n) {
				l_lot->RemoveAt(i);
				MessageBox::Show("Delete");
				break;
			}
		}
	}
	void ShowAllLot(TextBox^ box) {
		box->Text += "\r\n";
		
		box->Text += "(В продажу)\r\n";
		if (l_lot->Count == 0)
			box->Text += "Немає лотів\r\n";
		for (int i = 0; i < l_lot->Count; i++) {
			box->Text += "----------------------\r\n";
			box->Text += "ID: " + l_lot[i]->getKey() + "\r\n";
			box->Text += "Найменування товару: " + l_lot[i]->getNameLot() + "\r\n";
			box->Text += "Продавець: " + l_lot[i]->getSeller() + "\r\n";
			box->Text += "Початкова ціна: " + l_lot[i]->getStart() + "\r\n";
			box->Text += "----------------------\r\n\r\n";

		}

		box->Text += "\r\n";

		box->Text += "(Куплені)\r\n";
		if (result->Count == 0)
			box->Text += "Немає лотів\r\n";
		if (result->Count >= 1)
		{
			for each (KeyValuePair<Lot^, Buyer^> c in result) {
				box->Text += "----------------------\r\n";
				box->Text += "=()= Лот " + c.Key->getKey() + " фінальна ціна " + c.Key->getFinish() + " купив " + c.Value->nameBuyer + " " + c.Value->ID + " =()=\r\n";
				box->Text += "----------------------\r\n\r\n";

			}
		}
	}
	void ShowAllBuyer(TextBox^ box) {
		if (l_buyer->Count == 0)
			box->Text += "Немає покупців\r\n";
		for (int i = 0; i < l_buyer->Count; i++) {
			box->Text += "----------------------\r\n";

			l_buyer[i]->Show(box);
			box->Text += "----------------------\r\n\r\n";

		}
	}
	void ShowSeller(TextBox^ box) {
		box->Text += "\r\n";
		if (l_lot->Count == 0)
			box->Text += "Немає продавців\r\n";
		for (int i = 0; i < l_lot->Count; i++) {
			box->Text += "----------------------\r\n";

			box->Text += "Продавець " + l_lot[i]->getSeller() + "\r\nЗ товаром " + l_lot[i]->getKey() + "\r\n";
			box->Text += "----------------------\r\n\r\n";

		}
		box->Text += "\r\n";

	}
	void ShowAuction(TextBox^ box) {
		box->Text += "\r\n";

		box->Text += "========================\r\n";
		box->Text += "*Аукціон " + nameAuction + "* \r\n";
		box->Text += "Проводиться " + date->dmy + " у " + time->hm + "\r\n";
		box->Text += "за адресою: " + address + "\r\n";
		box->Text += "Інформація про аукціон: " + infoAuction + "\r\n";
		box->Text += "Список лотів:\r\n";
		ShowAllLot(box);
		box->Text += "Список покупців:\r\n";
		ShowAllBuyer(box);
		box->Text += "\r\n";
		box->Text += "========================\r\n\r\n";
	}
	void WriteBuy(String^ l, String^ b, Int32 ed) {
		Int32 a, c; bool x = false, y = false;
		for (int i = 0; i < l_lot->Count; i++) {
			if (l_lot[i]->getKey() == l) {
				a = i;
				x = true;
			}
		}
		for (int i = 0; i < l_buyer->Count; i++) {
			if (l_buyer[i]->ID == b) {
				c = i;
				y = true;
			}
		}
		if (x && y) {
			if (l_lot[a]->getStart() > ed) {
				MessageBox::Show("Фінальна ціна менша за стартову...");
				return;
			}
			l_lot[a]->setFinish(ed);
			result->Add(l_lot[a], l_buyer[c]);
			l_lot->RemoveAt(a);
			l_buyer->RemoveAt(c);
			MessageBox::Show("GOOD");
		}
	}
	Int32 MaxLot() {
		Int32 max; bool flag = true;
		for each (KeyValuePair<Lot^, Buyer^> ^ c in result) {
			if (flag)
			{
				max = c->Key->getFinish(); flag = false;
			}
			if (max < c->Key->getFinish())
				max = c->Key->getFinish();
		}
		return max;
		
	}
	void ShowMaxLot(Int32 a, TextBox^ box) {
		for each (KeyValuePair<Lot^, Buyer^> ^ c in result) {
			if (a == c->Key->getFinish())
				box->Text += "Покупець найдорожчого лоту " + c->Value->nameBuyer + "\r\n" + "Продавець найдорожчого лоту " + c->Key->getSeller() + "\r\n" + "Лот " + c->Key->getKey() + "\r\n";
		}
	}
	Int32 MaxSell() {
		return result->Count;
	}
	Lot^ MaxDifference() {
		Int32 a; bool flag = true; String^ i;
		for each (KeyValuePair<Lot^, Buyer^> ^ c in result) {
			if (flag) {
				a = c->Key->getFinish() - c->Key->getStart();
				i = c->Key->getKey();
				flag = false;
			}
			if (a < c->Key->getFinish() - c->Key->getStart()) {
				a = c->Key->getFinish() - c->Key->getStart();
				i = c->Key->getKey();

			}
		}
		for each (KeyValuePair<Lot^, Buyer^> ^ c in result) {
			if(i == c->Key->getKey())
				return c->Key;
		}

		
	}
	
};


static ref struct All_Auction {
	static Auction^ auc1 = nullptr;
	static Auction^ auc2 = nullptr;
	static Auction^ auc3 = nullptr;
	static List<Auction^>^ l_auction = gcnew List<Auction^>();
};


static void view_auc(TextBox^ tbox) {
	tbox->Text = "";
	(All_Auction::auc1 == nullptr) ? tbox->Text += "| Auction 1 -> inactive |" : tbox->Text += "| Auction 1 -> active |";
	(All_Auction::auc2 == nullptr) ? tbox->Text += " Auction 2 -> inactive | " : tbox->Text += " Auction 2 -> active | ";
	(All_Auction::auc3 == nullptr) ? tbox->Text += " Auction 3 -> inactive |" : tbox->Text += " Auction 3 -> active |";
}