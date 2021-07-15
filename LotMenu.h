#pragma once

namespace Guliver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для LotMenu
	/// </summary>
	public ref class LotMenu : public System::Windows::Forms::Form
	{
	public:
		LotMenu(void)
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
		~LotMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonAuctionOne;
	protected:
	private: System::Windows::Forms::Button^ buttonAuctionTwo;
	private: System::Windows::Forms::Button^ buttonAuctionThree;
	private: System::Windows::Forms::TextBox^ textBoxNameSeller;
	private: System::Windows::Forms::Label^ labelNameSeller;
	private: System::Windows::Forms::TextBox^ textBoxStartPrice;
	private: System::Windows::Forms::Label^ labelStartPrice;
	private: System::Windows::Forms::TextBox^ textBoxNameLot;
	private: System::Windows::Forms::Label^ labelNameLot;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonAuctionOne = (gcnew System::Windows::Forms::Button());
			this->buttonAuctionTwo = (gcnew System::Windows::Forms::Button());
			this->buttonAuctionThree = (gcnew System::Windows::Forms::Button());
			this->textBoxNameSeller = (gcnew System::Windows::Forms::TextBox());
			this->labelNameSeller = (gcnew System::Windows::Forms::Label());
			this->textBoxStartPrice = (gcnew System::Windows::Forms::TextBox());
			this->labelStartPrice = (gcnew System::Windows::Forms::Label());
			this->textBoxNameLot = (gcnew System::Windows::Forms::TextBox());
			this->labelNameLot = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonAuctionOne
			// 
			this->buttonAuctionOne->Location = System::Drawing::Point(70, 29);
			this->buttonAuctionOne->Name = L"buttonAuctionOne";
			this->buttonAuctionOne->Size = System::Drawing::Size(111, 52);
			this->buttonAuctionOne->TabIndex = 0;
			this->buttonAuctionOne->Text = L"Auc1";
			this->buttonAuctionOne->UseVisualStyleBackColor = true;
			this->buttonAuctionOne->Click += gcnew System::EventHandler(this, &LotMenu::buttonAuctionOne_Click);
			// 
			// buttonAuctionTwo
			// 
			this->buttonAuctionTwo->Location = System::Drawing::Point(187, 29);
			this->buttonAuctionTwo->Name = L"buttonAuctionTwo";
			this->buttonAuctionTwo->Size = System::Drawing::Size(111, 52);
			this->buttonAuctionTwo->TabIndex = 1;
			this->buttonAuctionTwo->Text = L"Auc2";
			this->buttonAuctionTwo->UseVisualStyleBackColor = true;
			this->buttonAuctionTwo->Click += gcnew System::EventHandler(this, &LotMenu::buttonAuctionTwo_Click);
			// 
			// buttonAuctionThree
			// 
			this->buttonAuctionThree->Location = System::Drawing::Point(304, 29);
			this->buttonAuctionThree->Name = L"buttonAuctionThree";
			this->buttonAuctionThree->Size = System::Drawing::Size(111, 52);
			this->buttonAuctionThree->TabIndex = 2;
			this->buttonAuctionThree->Text = L"Auc3";
			this->buttonAuctionThree->UseVisualStyleBackColor = true;
			this->buttonAuctionThree->Click += gcnew System::EventHandler(this, &LotMenu::buttonAuctionThree_Click);
			// 
			// textBoxNameSeller
			// 
			this->textBoxNameSeller->Location = System::Drawing::Point(208, 120);
			this->textBoxNameSeller->Name = L"textBoxNameSeller";
			this->textBoxNameSeller->Size = System::Drawing::Size(100, 20);
			this->textBoxNameSeller->TabIndex = 3;
			// 
			// labelNameSeller
			// 
			this->labelNameSeller->AutoSize = true;
			this->labelNameSeller->Location = System::Drawing::Point(136, 123);
			this->labelNameSeller->Name = L"labelNameSeller";
			this->labelNameSeller->Size = System::Drawing::Size(66, 13);
			this->labelNameSeller->TabIndex = 4;
			this->labelNameSeller->Text = L"Продавець:";
			// 
			// textBoxStartPrice
			// 
			this->textBoxStartPrice->Location = System::Drawing::Point(208, 158);
			this->textBoxStartPrice->Name = L"textBoxStartPrice";
			this->textBoxStartPrice->Size = System::Drawing::Size(100, 20);
			this->textBoxStartPrice->TabIndex = 5;
			// 
			// labelStartPrice
			// 
			this->labelStartPrice->AutoSize = true;
			this->labelStartPrice->Location = System::Drawing::Point(115, 161);
			this->labelStartPrice->Name = L"labelStartPrice";
			this->labelStartPrice->Size = System::Drawing::Size(87, 13);
			this->labelStartPrice->TabIndex = 6;
			this->labelStartPrice->Text = L"Початкова ціна:";
			// 
			// textBoxNameLot
			// 
			this->textBoxNameLot->Location = System::Drawing::Point(208, 196);
			this->textBoxNameLot->Name = L"textBoxNameLot";
			this->textBoxNameLot->Size = System::Drawing::Size(100, 20);
			this->textBoxNameLot->TabIndex = 7;
			// 
			// labelNameLot
			// 
			this->labelNameLot->AutoSize = true;
			this->labelNameLot->Location = System::Drawing::Point(136, 199);
			this->labelNameLot->Name = L"labelNameLot";
			this->labelNameLot->Size = System::Drawing::Size(66, 13);
			this->labelNameLot->TabIndex = 8;
			this->labelNameLot->Text = L"Ім\'я товару:";
			// 
			// LotMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 411);
			this->Controls->Add(this->labelNameLot);
			this->Controls->Add(this->textBoxNameLot);
			this->Controls->Add(this->labelStartPrice);
			this->Controls->Add(this->textBoxStartPrice);
			this->Controls->Add(this->labelNameSeller);
			this->Controls->Add(this->textBoxNameSeller);
			this->Controls->Add(this->buttonAuctionThree);
			this->Controls->Add(this->buttonAuctionTwo);
			this->Controls->Add(this->buttonAuctionOne);
			this->Name = L"LotMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LotMenu";
			this->Load += gcnew System::EventHandler(this, &LotMenu::LotMenu_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonAuctionTwo_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonAuctionOne_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonAuctionThree_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void LotMenu_Load(System::Object^ sender, System::EventArgs^ e);
};
}
