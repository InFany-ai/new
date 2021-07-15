#pragma once

namespace Guliver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddAuc
	/// </summary>
	public ref class AddAuc : public System::Windows::Forms::Form
	{
	public:
		AddAuc()
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
		~AddAuc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ infoBoxSmallAuc;
	private: System::Windows::Forms::TextBox^ textBoxChoiceAuc;
	private: System::Windows::Forms::Button^ buttonAddAuction;
	private: System::Windows::Forms::TextBox^ textBoxNameAuc;
	private: System::Windows::Forms::TextBox^ textBoxInfoAuc;
	private: System::Windows::Forms::Label^ labelNameAuc;
	private: System::Windows::Forms::Label^ labelInfoAuc;
	private: System::Windows::Forms::Label^ labelAddressAuc;
	private: System::Windows::Forms::TextBox^ textBoxAddressAuc;
	private: System::Windows::Forms::TextBox^ textBoxDateAuc;
	private: System::Windows::Forms::Label^ labelDateAuc;
	private: System::Windows::Forms::Label^ labelTimeAuc;
	private: System::Windows::Forms::TextBox^ textBoxTimeAuc;
	private: System::Windows::Forms::Button^ buttonAuctionActive;
	private: System::Windows::Forms::TextBox^ textBoxDeleteAuc;
	private: System::Windows::Forms::Button^ buttonDeleteAuc;
	protected:

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
			this->infoBoxSmallAuc = (gcnew System::Windows::Forms::TextBox());
			this->textBoxChoiceAuc = (gcnew System::Windows::Forms::TextBox());
			this->buttonAddAuction = (gcnew System::Windows::Forms::Button());
			this->textBoxNameAuc = (gcnew System::Windows::Forms::TextBox());
			this->textBoxInfoAuc = (gcnew System::Windows::Forms::TextBox());
			this->labelNameAuc = (gcnew System::Windows::Forms::Label());
			this->labelInfoAuc = (gcnew System::Windows::Forms::Label());
			this->labelAddressAuc = (gcnew System::Windows::Forms::Label());
			this->textBoxAddressAuc = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDateAuc = (gcnew System::Windows::Forms::TextBox());
			this->labelDateAuc = (gcnew System::Windows::Forms::Label());
			this->labelTimeAuc = (gcnew System::Windows::Forms::Label());
			this->textBoxTimeAuc = (gcnew System::Windows::Forms::TextBox());
			this->buttonAuctionActive = (gcnew System::Windows::Forms::Button());
			this->textBoxDeleteAuc = (gcnew System::Windows::Forms::TextBox());
			this->buttonDeleteAuc = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// infoBoxSmallAuc
			// 
			this->infoBoxSmallAuc->Location = System::Drawing::Point(12, 12);
			this->infoBoxSmallAuc->Multiline = true;
			this->infoBoxSmallAuc->Name = L"infoBoxSmallAuc";
			this->infoBoxSmallAuc->ReadOnly = true;
			this->infoBoxSmallAuc->Size = System::Drawing::Size(341, 26);
			this->infoBoxSmallAuc->TabIndex = 0;
			this->infoBoxSmallAuc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxChoiceAuc
			// 
			this->textBoxChoiceAuc->Location = System::Drawing::Point(55, 44);
			this->textBoxChoiceAuc->Name = L"textBoxChoiceAuc";
			this->textBoxChoiceAuc->Size = System::Drawing::Size(100, 20);
			this->textBoxChoiceAuc->TabIndex = 1;
			this->textBoxChoiceAuc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// buttonAddAuction
			// 
			this->buttonAddAuction->Location = System::Drawing::Point(55, 70);
			this->buttonAddAuction->Name = L"buttonAddAuction";
			this->buttonAddAuction->Size = System::Drawing::Size(102, 35);
			this->buttonAddAuction->TabIndex = 2;
			this->buttonAddAuction->Text = L"Активувати аукціон";
			this->buttonAddAuction->UseVisualStyleBackColor = true;
			this->buttonAddAuction->Click += gcnew System::EventHandler(this, &AddAuc::buttonAddAuction_Click);
			// 
			// textBoxNameAuc
			// 
			this->textBoxNameAuc->Enabled = false;
			this->textBoxNameAuc->Location = System::Drawing::Point(125, 123);
			this->textBoxNameAuc->Name = L"textBoxNameAuc";
			this->textBoxNameAuc->Size = System::Drawing::Size(100, 20);
			this->textBoxNameAuc->TabIndex = 3;
			// 
			// textBoxInfoAuc
			// 
			this->textBoxInfoAuc->Enabled = false;
			this->textBoxInfoAuc->Location = System::Drawing::Point(125, 164);
			this->textBoxInfoAuc->Name = L"textBoxInfoAuc";
			this->textBoxInfoAuc->Size = System::Drawing::Size(100, 20);
			this->textBoxInfoAuc->TabIndex = 4;
			// 
			// labelNameAuc
			// 
			this->labelNameAuc->AutoSize = true;
			this->labelNameAuc->Location = System::Drawing::Point(34, 126);
			this->labelNameAuc->Name = L"labelNameAuc";
			this->labelNameAuc->Size = System::Drawing::Size(85, 13);
			this->labelNameAuc->TabIndex = 5;
			this->labelNameAuc->Text = L"Найменування:";
			// 
			// labelInfoAuc
			// 
			this->labelInfoAuc->AutoSize = true;
			this->labelInfoAuc->Location = System::Drawing::Point(52, 167);
			this->labelInfoAuc->Name = L"labelInfoAuc";
			this->labelInfoAuc->Size = System::Drawing::Size(67, 13);
			this->labelInfoAuc->TabIndex = 6;
			this->labelInfoAuc->Text = L"Інформація:";
			// 
			// labelAddressAuc
			// 
			this->labelAddressAuc->AutoSize = true;
			this->labelAddressAuc->Location = System::Drawing::Point(72, 206);
			this->labelAddressAuc->Name = L"labelAddressAuc";
			this->labelAddressAuc->Size = System::Drawing::Size(47, 13);
			this->labelAddressAuc->TabIndex = 7;
			this->labelAddressAuc->Text = L"Адреса:";
			// 
			// textBoxAddressAuc
			// 
			this->textBoxAddressAuc->Enabled = false;
			this->textBoxAddressAuc->Location = System::Drawing::Point(125, 203);
			this->textBoxAddressAuc->Name = L"textBoxAddressAuc";
			this->textBoxAddressAuc->Size = System::Drawing::Size(100, 20);
			this->textBoxAddressAuc->TabIndex = 8;
			// 
			// textBoxDateAuc
			// 
			this->textBoxDateAuc->Enabled = false;
			this->textBoxDateAuc->Location = System::Drawing::Point(125, 239);
			this->textBoxDateAuc->Name = L"textBoxDateAuc";
			this->textBoxDateAuc->Size = System::Drawing::Size(100, 20);
			this->textBoxDateAuc->TabIndex = 9;
			this->textBoxDateAuc->Text = L"0.0.0";
			// 
			// labelDateAuc
			// 
			this->labelDateAuc->AutoSize = true;
			this->labelDateAuc->Location = System::Drawing::Point(83, 242);
			this->labelDateAuc->Name = L"labelDateAuc";
			this->labelDateAuc->Size = System::Drawing::Size(36, 13);
			this->labelDateAuc->TabIndex = 10;
			this->labelDateAuc->Text = L"Дата:";
			// 
			// labelTimeAuc
			// 
			this->labelTimeAuc->AutoSize = true;
			this->labelTimeAuc->Location = System::Drawing::Point(83, 278);
			this->labelTimeAuc->Name = L"labelTimeAuc";
			this->labelTimeAuc->Size = System::Drawing::Size(30, 13);
			this->labelTimeAuc->TabIndex = 11;
			this->labelTimeAuc->Text = L"Час:";
			// 
			// textBoxTimeAuc
			// 
			this->textBoxTimeAuc->Enabled = false;
			this->textBoxTimeAuc->Location = System::Drawing::Point(125, 275);
			this->textBoxTimeAuc->Name = L"textBoxTimeAuc";
			this->textBoxTimeAuc->Size = System::Drawing::Size(100, 20);
			this->textBoxTimeAuc->TabIndex = 12;
			this->textBoxTimeAuc->Text = L"00:00";
			// 
			// buttonAuctionActive
			// 
			this->buttonAuctionActive->Enabled = false;
			this->buttonAuctionActive->Location = System::Drawing::Point(125, 315);
			this->buttonAuctionActive->Name = L"buttonAuctionActive";
			this->buttonAuctionActive->Size = System::Drawing::Size(98, 34);
			this->buttonAuctionActive->TabIndex = 13;
			this->buttonAuctionActive->Text = L"Додати";
			this->buttonAuctionActive->UseVisualStyleBackColor = true;
			this->buttonAuctionActive->Click += gcnew System::EventHandler(this, &AddAuc::buttonAuctionActive_Click);
			// 
			// textBoxDeleteAuc
			// 
			this->textBoxDeleteAuc->Location = System::Drawing::Point(211, 44);
			this->textBoxDeleteAuc->Name = L"textBoxDeleteAuc";
			this->textBoxDeleteAuc->Size = System::Drawing::Size(100, 20);
			this->textBoxDeleteAuc->TabIndex = 14;
			this->textBoxDeleteAuc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// buttonDeleteAuc
			// 
			this->buttonDeleteAuc->Location = System::Drawing::Point(211, 70);
			this->buttonDeleteAuc->Name = L"buttonDeleteAuc";
			this->buttonDeleteAuc->Size = System::Drawing::Size(100, 35);
			this->buttonDeleteAuc->TabIndex = 15;
			this->buttonDeleteAuc->Text = L"Закінчити аукціон";
			this->buttonDeleteAuc->UseVisualStyleBackColor = true;
			this->buttonDeleteAuc->Click += gcnew System::EventHandler(this, &AddAuc::buttonDeleteAuc_Click);
			// 
			// AddAuc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(364, 441);
			this->Controls->Add(this->buttonDeleteAuc);
			this->Controls->Add(this->textBoxDeleteAuc);
			this->Controls->Add(this->buttonAuctionActive);
			this->Controls->Add(this->textBoxTimeAuc);
			this->Controls->Add(this->labelTimeAuc);
			this->Controls->Add(this->labelDateAuc);
			this->Controls->Add(this->textBoxDateAuc);
			this->Controls->Add(this->textBoxAddressAuc);
			this->Controls->Add(this->labelAddressAuc);
			this->Controls->Add(this->labelInfoAuc);
			this->Controls->Add(this->labelNameAuc);
			this->Controls->Add(this->textBoxInfoAuc);
			this->Controls->Add(this->textBoxNameAuc);
			this->Controls->Add(this->buttonAddAuction);
			this->Controls->Add(this->textBoxChoiceAuc);
			this->Controls->Add(this->infoBoxSmallAuc);
			this->MaximumSize = System::Drawing::Size(380, 480);
			this->MinimumSize = System::Drawing::Size(380, 480);
			this->Name = L"AddAuc";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddAuc";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &AddAuc::AddAuc_FormClosing);
			this->Load += gcnew System::EventHandler(this, &AddAuc::AddAuc_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddAuc_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonAddAuction_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void AddAuc_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
	private: System::Void activ();
	private: System::Void buttonAuctionActive_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void inactiv();
	private: System::Void buttonDeleteAuc_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
