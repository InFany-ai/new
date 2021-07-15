#pragma once
#include "Header.h"
namespace Guliver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Lot_admin
	/// </summary>
	public ref class Lot_admin : public System::Windows::Forms::Form
	{
	public:
		Lot_admin(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Lot_admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxMenuLot;
	private: System::Windows::Forms::TextBox^ textBoxDelete;
	protected:

	protected:

	private: System::Windows::Forms::Button^ buttonDeleteLot;
	private: System::Windows::Forms::TextBox^ textBoxLot;
	private: System::Windows::Forms::TextBox^ textBoxBuyer;



	private: System::Windows::Forms::Label^ labelNumLot;
	private: System::Windows::Forms::Label^ labelNumBuy;
	private: System::Windows::Forms::Button^ buttonWriteBuy;
	private: System::Windows::Forms::TextBox^ textBoxEndPrice;
	private: System::Windows::Forms::Label^ label1;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода. infany
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxMenuLot = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDelete = (gcnew System::Windows::Forms::TextBox());
			this->buttonDeleteLot = (gcnew System::Windows::Forms::Button());
			this->textBoxLot = (gcnew System::Windows::Forms::TextBox());
			this->textBoxBuyer = (gcnew System::Windows::Forms::TextBox());
			this->labelNumLot = (gcnew System::Windows::Forms::Label());
			this->labelNumBuy = (gcnew System::Windows::Forms::Label());
			this->buttonWriteBuy = (gcnew System::Windows::Forms::Button());
			this->textBoxEndPrice = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBoxMenuLot
			// 
			this->textBoxMenuLot->Location = System::Drawing::Point(12, 12);
			this->textBoxMenuLot->Multiline = true;
			this->textBoxMenuLot->Name = L"textBoxMenuLot";
			this->textBoxMenuLot->ReadOnly = true;
			this->textBoxMenuLot->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxMenuLot->Size = System::Drawing::Size(174, 241);
			this->textBoxMenuLot->TabIndex = 12;
			// 
			// textBoxDelete
			// 
			this->textBoxDelete->Location = System::Drawing::Point(192, 12);
			this->textBoxDelete->Name = L"textBoxDelete";
			this->textBoxDelete->Size = System::Drawing::Size(100, 20);
			this->textBoxDelete->TabIndex = 1;
			// 
			// buttonDeleteLot
			// 
			this->buttonDeleteLot->Location = System::Drawing::Point(192, 38);
			this->buttonDeleteLot->Name = L"buttonDeleteLot";
			this->buttonDeleteLot->Size = System::Drawing::Size(100, 32);
			this->buttonDeleteLot->TabIndex = 2;
			this->buttonDeleteLot->Text = L"Видалити лот";
			this->buttonDeleteLot->UseVisualStyleBackColor = true;
			this->buttonDeleteLot->Click += gcnew System::EventHandler(this, &Lot_admin::buttonDeleteLot_Click);
			// 
			// textBoxLot
			// 
			this->textBoxLot->Location = System::Drawing::Point(12, 278);
			this->textBoxLot->Name = L"textBoxLot";
			this->textBoxLot->Size = System::Drawing::Size(100, 20);
			this->textBoxLot->TabIndex = 3;
			// 
			// textBoxBuyer
			// 
			this->textBoxBuyer->Location = System::Drawing::Point(118, 278);
			this->textBoxBuyer->Name = L"textBoxBuyer";
			this->textBoxBuyer->Size = System::Drawing::Size(100, 20);
			this->textBoxBuyer->TabIndex = 4;
			// 
			// labelNumLot
			// 
			this->labelNumLot->AutoSize = true;
			this->labelNumLot->Location = System::Drawing::Point(31, 262);
			this->labelNumLot->Name = L"labelNumLot";
			this->labelNumLot->Size = System::Drawing::Size(66, 13);
			this->labelNumLot->TabIndex = 5;
			this->labelNumLot->Text = L"Номер лоту";
			// 
			// labelNumBuy
			// 
			this->labelNumBuy->AutoSize = true;
			this->labelNumBuy->Location = System::Drawing::Point(124, 262);
			this->labelNumBuy->Name = L"labelNumBuy";
			this->labelNumBuy->Size = System::Drawing::Size(85, 13);
			this->labelNumBuy->TabIndex = 6;
			this->labelNumBuy->Text = L"Номер покупця";
			// 
			// buttonWriteBuy
			// 
			this->buttonWriteBuy->Location = System::Drawing::Point(79, 327);
			this->buttonWriteBuy->Name = L"buttonWriteBuy";
			this->buttonWriteBuy->Size = System::Drawing::Size(75, 23);
			this->buttonWriteBuy->TabIndex = 7;
			this->buttonWriteBuy->Text = L"Записати";
			this->buttonWriteBuy->UseVisualStyleBackColor = true;
			this->buttonWriteBuy->Click += gcnew System::EventHandler(this, &Lot_admin::buttonWriteBuy_Click);
			// 
			// textBoxEndPrice
			// 
			this->textBoxEndPrice->Location = System::Drawing::Point(86, 301);
			this->textBoxEndPrice->Name = L"textBoxEndPrice";
			this->textBoxEndPrice->Size = System::Drawing::Size(100, 20);
			this->textBoxEndPrice->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1, 304);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Фінальна ціна";
			// 
			// Lot_admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(391, 362);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxEndPrice);
			this->Controls->Add(this->buttonWriteBuy);
			this->Controls->Add(this->labelNumBuy);
			this->Controls->Add(this->labelNumLot);
			this->Controls->Add(this->textBoxBuyer);
			this->Controls->Add(this->textBoxLot);
			this->Controls->Add(this->buttonDeleteLot);
			this->Controls->Add(this->textBoxDelete);
			this->Controls->Add(this->textBoxMenuLot);
			this->Name = L"Lot_admin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lot_admin";
			this->Load += gcnew System::EventHandler(this, &Lot_admin::Lot_admin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void show_();
	private: System::Void Lot_admin_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonDeleteLot_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonWriteBuy_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
