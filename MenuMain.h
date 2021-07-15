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
	/// Ñâîäêà äëÿ MenuMain
	/// </summary>
	public ref class MenuMain : public System::Windows::Forms::Form
	{
	public:
		MenuMain(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
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
	private: System::Windows::Forms::ToolStripMenuItem^ â³äîìîñò³ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîÏğîäàâö³âToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîÏîêóïö³âToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîÀóêö³îíèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğîËîòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äîáàâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ àóêöèîíToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ëîòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîêóïöÿToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBoxAllInfo;
	private: System::Windows::Forms::ToolStripMenuItem^ ìåíşËîò³âToolStripMenuItem;
	private: System::Windows::Forms::Button^ buttonMuchLot;
	private: System::Windows::Forms::Button^ buttonManyLot;
	private: System::Windows::Forms::Button^ buttonMaxDifference;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ buttonSpec;
	private: System::Windows::Forms::Button^ buttonDate;


	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->â³äîìîñò³ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÏğîäàâö³âToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÏîêóïö³âToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÀóêö³îíèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîËîòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîáàâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->àóêöèîíToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ëîòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîêóïöÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ìåíşËîò³âToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->â³äîìîñò³ToolStripMenuItem,
					this->äîáàâèòüToolStripMenuItem, this->ìåíşËîò³âToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(608, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// â³äîìîñò³ToolStripMenuItem
			// 
			this->â³äîìîñò³ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ïğîÏğîäàâö³âToolStripMenuItem,
					this->ïğîÏîêóïö³âToolStripMenuItem, this->ïğîÀóêö³îíèToolStripMenuItem, this->ïğîËîòèToolStripMenuItem
			});
			this->â³äîìîñò³ToolStripMenuItem->Name = L"â³äîìîñò³ToolStripMenuItem";
			this->â³äîìîñò³ToolStripMenuItem->Size = System::Drawing::Size(72, 20);
			this->â³äîìîñò³ToolStripMenuItem->Text = L"Â³äîìîñò³";
			// 
			// ïğîÏğîäàâö³âToolStripMenuItem
			// 
			this->ïğîÏğîäàâö³âToolStripMenuItem->Name = L"ïğîÏğîäàâö³âToolStripMenuItem";
			this->ïğîÏğîäàâö³âToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->ïğîÏğîäàâö³âToolStripMenuItem->Text = L"Ïğî ïğîäàâö³â";
			this->ïğîÏğîäàâö³âToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuMain::ïğîÏğîäàâö³âToolStripMenuItem_Click);
			// 
			// ïğîÏîêóïö³âToolStripMenuItem
			// 
			this->ïğîÏîêóïö³âToolStripMenuItem->Name = L"ïğîÏîêóïö³âToolStripMenuItem";
			this->ïğîÏîêóïö³âToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->ïğîÏîêóïö³âToolStripMenuItem->Text = L"Ïğî ïîêóïö³â";
			this->ïğîÏîêóïö³âToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuMain::ïğîÏîêóïö³âToolStripMenuItem_Click);
			// 
			// ïğîÀóêö³îíèToolStripMenuItem
			// 
			this->ïğîÀóêö³îíèToolStripMenuItem->Name = L"ïğîÀóêö³îíèToolStripMenuItem";
			this->ïğîÀóêö³îíèToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->ïğîÀóêö³îíèToolStripMenuItem->Text = L"Ïğî àóêö³îíè ";
			this->ïğîÀóêö³îíèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuMain::ïğîÀóêö³îíèToolStripMenuItem_Click);
			// 
			// ïğîËîòèToolStripMenuItem
			// 
			this->ïğîËîòèToolStripMenuItem->Name = L"ïğîËîòèToolStripMenuItem";
			this->ïğîËîòèToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->ïğîËîòèToolStripMenuItem->Text = L"Ïğî ëîòè";
			this->ïğîËîòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuMain::ïğîËîòèToolStripMenuItem_Click);
			// 
			// äîáàâèòüToolStripMenuItem
			// 
			this->äîáàâèòüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->àóêöèîíToolStripMenuItem,
					this->ëîòToolStripMenuItem, this->ïîêóïöÿToolStripMenuItem
			});
			this->äîáàâèòüToolStripMenuItem->Name = L"äîáàâèòüToolStripMenuItem";
			this->äîáàâèòüToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->äîáàâèòüToolStripMenuItem->Text = L"Äîäàòè";
			// 
			// àóêöèîíToolStripMenuItem
			// 
			this->àóêöèîíToolStripMenuItem->Name = L"àóêöèîíToolStripMenuItem";
			this->àóêöèîíToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->àóêöèîíToolStripMenuItem->Text = L"Àóêö³îí";
			this->àóêöèîíToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuMain::àóêöèîíToolStripMenuItem_Click);
			// 
			// ëîòToolStripMenuItem
			// 
			this->ëîòToolStripMenuItem->Name = L"ëîòToolStripMenuItem";
			this->ëîòToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->ëîòToolStripMenuItem->Text = L"Ëîò";
			this->ëîòToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuMain::ëîòToolStripMenuItem_Click);
			// 
			// ïîêóïöÿToolStripMenuItem
			// 
			this->ïîêóïöÿToolStripMenuItem->Name = L"ïîêóïöÿToolStripMenuItem";
			this->ïîêóïöÿToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->ïîêóïöÿToolStripMenuItem->Text = L"Ïîêóïöÿ";
			this->ïîêóïöÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuMain::ïîêóïöÿToolStripMenuItem_Click);
			// 
			// ìåíşËîò³âToolStripMenuItem
			// 
			this->ìåíşËîò³âToolStripMenuItem->Name = L"ìåíşËîò³âToolStripMenuItem";
			this->ìåíşËîò³âToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->ìåíşËîò³âToolStripMenuItem->Text = L"Ìåíş Ëîò³â";
			this->ìåíşËîò³âToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuMain::ìåíşËîò³âToolStripMenuItem_Click);
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
			this->buttonMuchLot->Text = L"Íàéäîğîæ÷èé ëîò";
			this->buttonMuchLot->UseVisualStyleBackColor = true;
			this->buttonMuchLot->Click += gcnew System::EventHandler(this, &MenuMain::buttonMuchLot_Click);
			// 
			// buttonManyLot
			// 
			this->buttonManyLot->Location = System::Drawing::Point(209, 77);
			this->buttonManyLot->Name = L"buttonManyLot";
			this->buttonManyLot->Size = System::Drawing::Size(114, 44);
			this->buttonManyLot->TabIndex = 3;
			this->buttonManyLot->Text = L"Ïğîäàíî íàéá³ëüøå";
			this->buttonManyLot->UseVisualStyleBackColor = true;
			this->buttonManyLot->Click += gcnew System::EventHandler(this, &MenuMain::buttonManyLot_Click);
			// 
			// buttonMaxDifference
			// 
			this->buttonMaxDifference->Location = System::Drawing::Point(209, 127);
			this->buttonMaxDifference->Name = L"buttonMaxDifference";
			this->buttonMaxDifference->Size = System::Drawing::Size(114, 44);
			this->buttonMaxDifference->TabIndex = 4;
			this->buttonMaxDifference->Text = L"Ìàêñèìàëüíà ğ³çíèöÿ";
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
			this->buttonSpec->Text = L"Ïîøóê ïğåäìåò³â";
			this->buttonSpec->UseVisualStyleBackColor = true;
			this->buttonSpec->Click += gcnew System::EventHandler(this, &MenuMain::buttonSpec_Click);
			// 
			// buttonDate
			// 
			this->buttonDate->Location = System::Drawing::Point(12, 66);
			this->buttonDate->Name = L"buttonDate";
			this->buttonDate->Size = System::Drawing::Size(90, 33);
			this->buttonDate->TabIndex = 7;
			this->buttonDate->Text = L"Ïîøóê ïî äàò³";
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
	private: System::Void àóêöèîíToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ëîòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïîêóïöÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïğîÏğîäàâö³âToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïğîÀóêö³îíèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïğîÏîêóïö³âToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ïğîËîòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);


		   //private: System::Void showForInfo();
	private: System::Void ìåíşËîò³âToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonMuchLot_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonManyLot_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonMaxDifference_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonDate_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSpec_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MenuMain_Load(System::Object^ sender, System::EventArgs^ e);
	};
}
