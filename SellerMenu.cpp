#include "SellerMenu.h"
#include "Header.h"
System::Void Guliver::SellerMenu::buttonSellerOne_Click(System::Object^ sender, System::EventArgs^ e)
{
    bool access = false;
    String^ nameB = textBoxNameBuyer->Text;
    try {
        if (nameB->Length < 3)
            throw - 1;
        access = true;
    }
    catch (int) {
        MessageBox::Show("Неіснуюча інформація");
        textBoxNameBuyer->Text = "";
    }
    if (access) {
        Buyer^ buy = gcnew Buyer(nameB);
        All_Auction::auc1->addBuyer(buy);
        textBoxNameBuyer->Text = "";
        MessageBox::Show("GOOD");

    }
}

System::Void Guliver::SellerMenu::buttonSellerTwo_Click(System::Object^ sender, System::EventArgs^ e)
{
    bool access = false;
    String^ nameB = textBoxNameBuyer->Text;
    try {
        if (nameB->Length < 3)
            throw - 1;
        access = true;
    }
    catch (int) {
        MessageBox::Show("Неіснуюча інформація");
        textBoxNameBuyer->Text = "";
    }
    if (access) {
        Buyer^ buy = gcnew Buyer(nameB);
        All_Auction::auc2->addBuyer(buy);
        textBoxNameBuyer->Text = "";
        MessageBox::Show("GOOD");
    }
}

System::Void Guliver::SellerMenu::buttonSellerThree_Click(System::Object^ sender, System::EventArgs^ e)
{
    bool access = false;
    String^ nameB = textBoxNameBuyer->Text;
    try {
        if (nameB->Length < 3)
            throw - 1;
        access = true;
    }
    catch (int) {
        MessageBox::Show("Неіснуюча інформація");
        textBoxNameBuyer->Text = "";
    }
    if (access) {
        Buyer^ buy = gcnew Buyer(nameB);
        All_Auction::auc3->addBuyer(buy);
        textBoxNameBuyer->Text = "";
        MessageBox::Show("GOOD");
    }
}

System::Void Guliver::SellerMenu::SellerMenu_Load(System::Object^ sender, System::EventArgs^ e)
{
    if (All_Auction::auc1 == nullptr) {
        buttonSellerOne->Enabled = false;
        buttonSellerOne->Text = "";
    }
    else {
        buttonSellerOne->Text = All_Auction::auc1->getNameA();
    }
    if (All_Auction::auc2 == nullptr) {
        buttonSellerTwo->Enabled = false;
        buttonSellerTwo->Text = "";

    }
    else {
        buttonSellerTwo->Text = All_Auction::auc2->getNameA();
    }
    if (All_Auction::auc3 == nullptr) {
        buttonSellerThree->Enabled = false;
        buttonSellerThree->Text = "";
    }
    else {
        buttonSellerThree->Text = All_Auction::auc3->getNameA();
    }
}

System::Void Guliver::SellerMenu::numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
   
}
