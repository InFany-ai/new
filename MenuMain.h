#pragma once
#include "AddAuc.h"
#include "LotMenu.h"
#include "SellerMenu.h"
#include "Lot_admin.h"
namespace Guliver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// ������ ��� MenuMain
	/// </summary>
	public ref class MenuMain : public System::Windows::Forms::Form
	{
	public:
		MenuMain(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MenuMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBoxAllInfo;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::Button^ buttonMuchLot;
	private: System::Windows::Forms::Button^ buttonManyLot;
	private: System::Windows::Forms::Button^ buttonMaxDifference;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ buttonSpec;
	private: System::Windows::Forms::Button^ buttonDate;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBoxAllInfo = (gcnew System::Windows::Forms::TextBox());
			this->buttonMuchLot = (gcnew System::Windows::Forms::Button());
			this->buttonManyLot = (gcnew System::Windows::Forms::Button());
			this->buttonMaxDifference = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonSpec = (gcnew System::Windows::Forms::Button());
			this->buttonDate = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������ToolStripMenuItem,
					this->��������ToolStripMenuItem, this->��������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(608, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->������������ToolStripMenuItem,
					this->�����������ToolStripMenuItem, this->�����������ToolStripMenuItem, this->�������ToolStripMenuItem
			});
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(72, 20);
			this->�������ToolStripMenuItem->Text = L"³������";
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->������������ToolStripMenuItem->Text = L"��� ���������";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuMain::������������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->�����������ToolStripMenuItem->Text = L"��� ��������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuMain::�����������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->�����������ToolStripMenuItem->Text = L"��� �������� ";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuMain::�����������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->�������ToolStripMenuItem->Text = L"��� ����";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuMain::�������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������ToolStripMenuItem,
					this->���ToolStripMenuItem, this->�������ToolStripMenuItem
			});
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->��������ToolStripMenuItem->Text = L"������";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuMain::�������ToolStripMenuItem_Click);
			// 
			// ���ToolStripMenuItem
			// 
			this->���ToolStripMenuItem->Name = L"���ToolStripMenuItem";
			this->���ToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->���ToolStripMenuItem->Text = L"���";
			this->���ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuMain::���ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuMain::�������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->��������ToolStripMenuItem->Text = L"���� ����";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuMain::��������ToolStripMenuItem_Click);
			// 
			// textBoxAllInfo
			// 
			this->textBoxAllInfo->Location = System::Drawing::Point(329, 27);
			this->textBoxAllInfo->Multiline = true;
			this->textBoxAllInfo->Name = L"textBoxAllInfo";
			this->textBoxAllInfo->ReadOnly = true;
			this->textBoxAllInfo->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxAllInfo->Size = System::Drawing::Size(267, 348);
			this->textBoxAllInfo->TabIndex = 1;
			// 
			// buttonMuchLot
			// 
			this->buttonMuchLot->Location = System::Drawing::Point(209, 27);
			this->buttonMuchLot->Name = L"buttonMuchLot";
			this->buttonMuchLot->Size = System::Drawing::Size(114, 44);
			this->buttonMuchLot->TabIndex = 2;
			this->buttonMuchLot->Text = L"����������� ���";
			this->buttonMuchLot->UseVisualStyleBackColor = true;
			this->buttonMuchLot->Click += gcnew System::EventHandler(this, &MenuMain::buttonMuchLot_Click);
			// 
			// buttonManyLot
			// 
			this->buttonManyLot->Location = System::Drawing::Point(209, 77);
			this->buttonManyLot->Name = L"buttonManyLot";
			this->buttonManyLot->Size = System::Drawing::Size(114, 44);
			this->buttonManyLot->TabIndex = 3;
			this->buttonManyLot->Text = L"������� ��������";
			this->buttonManyLot->UseVisualStyleBackColor = true;
			this->buttonManyLot->Click += gcnew System::EventHandler(this, &MenuMain::buttonManyLot_Click);
			// 
			// buttonMaxDifference
			// 
			this->buttonMaxDifference->Location = System::Drawing::Point(209, 127);
			this->buttonMaxDifference->Name = L"buttonMaxDifference";
			this->buttonMaxDifference->Size = System::Drawing::Size(114, 44);
			this->buttonMaxDifference->TabIndex = 4;
			this->buttonMaxDifference->Text = L"����������� ������";
			this->buttonMaxDifference->UseVisualStyleBackColor = true;
			this->buttonMaxDifference->Click += gcnew System::EventHandler(this, &MenuMain::buttonMaxDifference_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(58, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			// 
			// buttonSpec
			// 
			this->buttonSpec->Location = System::Drawing::Point(108, 66);
			this->buttonSpec->Name = L"buttonSpec";
			this->buttonSpec->Size = System::Drawing::Size(90, 34);
			this->buttonSpec->TabIndex = 6;
			this->buttonSpec->Text = L"����� ��������";
			this->buttonSpec->UseVisualStyleBackColor = true;
			this->buttonSpec->Click += gcnew System::EventHandler(this, &MenuMain::buttonSpec_Click);
			// 
			// buttonDate
			// 
			this->buttonDate->Location = System::Drawing::Point(12, 66);
			this->buttonDate->Name = L"buttonDate";
			this->buttonDate->Size = System::Drawing::Size(90, 33);
			this->buttonDate->TabIndex = 7;
			this->buttonDate->Text = L"����� �� ���";
			this->buttonDate->UseVisualStyleBackColor = true;
			this->buttonDate->Click += gcnew System::EventHandler(this, &MenuMain::buttonDate_Click);
			// 
			// MenuMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(608, 403);
			this->Controls->Add(this->buttonDate);
			this->Controls->Add(this->buttonSpec);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->buttonMaxDifference);
			this->Controls->Add(this->buttonManyLot);
			this->Controls->Add(this->buttonMuchLot);
			this->Controls->Add(this->textBoxAllInfo);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MenuMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MenuMain";
			this->Load += gcnew System::EventHandler(this, &MenuMain::MenuMain_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//add
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ���ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);


		   //private: System::Void showForInfo();
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonMuchLot_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonManyLot_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonMaxDifference_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonDate_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSpec_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MenuMain_Load(System::Object^ sender, System::EventArgs^ e);
	};
}
