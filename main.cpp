#include "MenuMain.h"
#include "Header.h"
using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Guliver::MenuMain form;
	Application::Run(%form);

}