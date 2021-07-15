#pragma once

namespace Guliver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ SellerMenu
	/// </summary>
	public ref class SellerMenu : public System::Windows::Forms::Form
	{
	public:
		SellerMenu(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~SellerMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonSellerOne;
	private: System::Windows::Forms::Button^ buttonSellerTwo;
	private: System::Windows::Forms::Button^ buttonSellerThree;
	protected:



	private: System::Windows::Forms::TextBox^ textBoxNameBuyer;
	private: System::Windows::Forms::Label^ labelNameNuyer;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonSellerOne = (gcnew System::Windows::Forms::Button());
			this->buttonSellerTwo = (gcnew System::Windows::Forms::Button());
			this->buttonSellerThree = (gcnew System::Windows::Forms::Button());
			this->textBoxNameBuyer = (gcnew System::Windows::Forms::TextBox());
			this->labelNameNuyer = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonSellerOne
			// 
			this->buttonSellerOne->Location = System::Drawing::Point(12, 12);
			this->buttonSellerOne->Name = L"buttonSellerOne";
			this->buttonSellerOne->Size = System::Drawing::Size(100, 51);
			this->buttonSellerOne->TabIndex = 0;
			this->buttonSellerOne->Text = L"Auction 1";
			this->buttonSellerOne->UseVisualStyleBackColor = true;
			this->buttonSellerOne->Click += gcnew System::EventHandler(this, &SellerMenu::buttonSellerOne_Click);
			// 
			// buttonSellerTwo
			// 
			this->buttonSellerTwo->Location = System::Drawing::Point(151, 12);
			this->buttonSellerTwo->Name = L"buttonSellerTwo";
			this->buttonSellerTwo->Size = System::Drawing::Size(100, 51);
			this->buttonSellerTwo->TabIndex = 1;
			this->buttonSellerTwo->Text = L"Auction 2";
			this->buttonSellerTwo->UseVisualStyleBackColor = true;
			this->buttonSellerTwo->Click += gcnew System::EventHandler(this, &SellerMenu::buttonSellerTwo_Click);
			// 
			// buttonSellerThree
			// 
			this->buttonSellerThree->Location = System::Drawing::Point(290, 12);
			this->buttonSellerThree->Name = L"buttonSellerThree";
			this->buttonSellerThree->Size = System::Drawing::Size(100, 51);
			this->buttonSellerThree->TabIndex = 2;
			this->buttonSellerThree->Text = L"Auction 3";
			this->buttonSellerThree->UseVisualStyleBackColor = true;
			this->buttonSellerThree->Click += gcnew System::EventHandler(this, &SellerMenu::buttonSellerThree_Click);
			// 
			// textBoxNameBuyer
			// 
			this->textBoxNameBuyer->Location = System::Drawing::Point(151, 115);
			this->textBoxNameBuyer->Name = L"textBoxNameBuyer";
			this->textBoxNameBuyer->Size = System::Drawing::Size(100, 20);
			this->textBoxNameBuyer->TabIndex = 3;
			// 
			// labelNameNuyer
			// 
			this->labelNameNuyer->AutoSize = true;
			this->labelNameNuyer->Location = System::Drawing::Point(75, 118);
			this->labelNameNuyer->Name = L"labelNameNuyer";
			this->labelNameNuyer->Size = System::Drawing::Size(70, 13);
			this->labelNameNuyer->TabIndex = 4;
			this->labelNameNuyer->Text = L"≤м\'€ покупц€";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(254, 91);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 5;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &SellerMenu::numericUpDown1_ValueChanged);
			// 
			// SellerMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(402, 239);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->labelNameNuyer);
			this->Controls->Add(this->textBoxNameBuyer);
			this->Controls->Add(this->buttonSellerThree);
			this->Controls->Add(this->buttonSellerTwo);
			this->Controls->Add(this->buttonSellerOne);
			this->Name = L"SellerMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SellerMenu";
			this->Load += gcnew System::EventHandler(this, &SellerMenu::SellerMenu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonSellerOne_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSellerTwo_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSellerThree_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void SellerMenu_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e);
};
}
