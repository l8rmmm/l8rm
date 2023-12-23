#include "MyForm.h"
#include "AuthForm.h"
#include "ToDoList.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace gumkaWinForms;

[STAThreadAttribute]
int main(array<String^>^ args) {

	Application::SetCompatibleTextRenderingDefault(false);   //глобальные характиристики для всего приложения
	Application::EnableVisualStyles();
	MyForm form;
	Application::Run(% form);
}
 System::Void MyForm::link_auth_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->Hide();
	AuthForm^ form = gcnew AuthForm(this);
	form->ShowDialog();
	this->Close();
}