#pragma once
#include "DB.h"


namespace gumkaWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_logo;
	protected:


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_login;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox_pass;

	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Button^ reg_btn;

	




	protected:



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

		Point pos;
	private: System::Windows::Forms::CheckBox^ checkBox;
	private: System::Windows::Forms::LinkLabel^ link_rights;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ link_auth;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ show_hide_btn;

		   bool is_drag;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label_logo = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_login = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox_pass = (gcnew System::Windows::Forms::TextBox());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->reg_btn = (gcnew System::Windows::Forms::Button());
			this->checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->link_rights = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->link_auth = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->show_hide_btn = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label_logo
			// 
			this->label_logo->AutoSize = true;
			this->label_logo->BackColor = System::Drawing::Color::Transparent;
			this->label_logo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 40, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_logo->Location = System::Drawing::Point(75, 108);
			this->label_logo->Name = L"label_logo";
			this->label_logo->Size = System::Drawing::Size(209, 72);
			this->label_logo->TabIndex = 0;
			this->label_logo->Text = L"Gumka";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(82, 214);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Логин";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(82, 317);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Пароль";
			// 
			// textBox_login
			// 
			this->textBox_login->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox_login->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_login->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox_login->Location = System::Drawing::Point(5, 13);
			this->textBox_login->Name = L"textBox_login";
			this->textBox_login->Size = System::Drawing::Size(166, 19);
			this->textBox_login->TabIndex = 4;
			this->textBox_login->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel1->Controls->Add(this->textBox_login);
			this->panel1->Location = System::Drawing::Point(87, 255);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(179, 44);
			this->panel1->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel2->Controls->Add(this->textBox_pass);
			this->panel2->Location = System::Drawing::Point(87, 354);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(179, 44);
			this->panel2->TabIndex = 6;
			// 
			// textBox_pass
			// 
			this->textBox_pass->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox_pass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_pass->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox_pass->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox_pass->Location = System::Drawing::Point(5, 13);
			this->textBox_pass->Name = L"textBox_pass";
			this->textBox_pass->PasswordChar = '*';
			this->textBox_pass->Size = System::Drawing::Size(166, 19);
			this->textBox_pass->TabIndex = 7;
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_exit->FlatAppearance->BorderColor = System::Drawing::Color::DarkRed;
			this->btn_exit->FlatAppearance->BorderSize = 3;
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_exit->ForeColor = System::Drawing::Color::Transparent;
			this->btn_exit->Location = System::Drawing::Point(788, 12);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(66, 47);
			this->btn_exit->TabIndex = 7;
			this->btn_exit->Text = L"X";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MyForm::btn_exit_Click);
			// 
			// reg_btn
			// 
			this->reg_btn->BackColor = System::Drawing::Color::RoyalBlue;
			this->reg_btn->FlatAppearance->BorderSize = 0;
			this->reg_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reg_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->reg_btn->ForeColor = System::Drawing::Color::White;
			this->reg_btn->Location = System::Drawing::Point(87, 432);
			this->reg_btn->Name = L"reg_btn";
			this->reg_btn->Size = System::Drawing::Size(158, 36);
			this->reg_btn->TabIndex = 8;
			this->reg_btn->Text = L"Регистрация";
			this->reg_btn->UseVisualStyleBackColor = false;
			this->reg_btn->Click += gcnew System::EventHandler(this, &MyForm::reg_btn_Click);
			// 
			// checkBox
			// 
			this->checkBox->AutoSize = true;
			this->checkBox->BackColor = System::Drawing::Color::Transparent;
			this->checkBox->Checked = true;
			this->checkBox->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox->FlatAppearance->BorderSize = 0;
			this->checkBox->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->checkBox->Location = System::Drawing::Point(87, 409);
			this->checkBox->Name = L"checkBox";
			this->checkBox->Size = System::Drawing::Size(83, 17);
			this->checkBox->TabIndex = 10;
			this->checkBox->Text = L"Я прочитал";
			this->checkBox->UseVisualStyleBackColor = false;
			this->checkBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_CheckedChanged);
			// 
			// link_rights
			// 
			this->link_rights->ActiveLinkColor = System::Drawing::Color::Silver;
			this->link_rights->AutoSize = true;
			this->link_rights->BackColor = System::Drawing::Color::Transparent;
			this->link_rights->LinkColor = System::Drawing::Color::White;
			this->link_rights->Location = System::Drawing::Point(170, 410);
			this->link_rights->Name = L"link_rights";
			this->link_rights->Size = System::Drawing::Size(162, 13);
			this->link_rights->TabIndex = 11;
			this->link_rights->TabStop = true;
			this->link_rights->Text = L"пользовательское сообщение";
			this->link_rights->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::link_rights_LinkClicked);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(87, 180);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 20);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Регистрация";
			// 
			// link_auth
			// 
			this->link_auth->AutoSize = true;
			this->link_auth->BackColor = System::Drawing::Color::Transparent;
			this->link_auth->LinkColor = System::Drawing::Color::White;
			this->link_auth->Location = System::Drawing::Point(172, 483);
			this->link_auth->Name = L"link_auth";
			this->link_auth->Size = System::Drawing::Size(90, 13);
			this->link_auth->TabIndex = 14;
			this->link_auth->TabStop = true;
			this->link_auth->Text = L"Авторизоваться";
			this->link_auth->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::link_auth_LinkClicked);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(84, 483);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Есть аккаунт\?";
			// 
			// show_hide_btn
			// 
			this->show_hide_btn->BackColor = System::Drawing::Color::Goldenrod;
			this->show_hide_btn->FlatAppearance->BorderSize = 0;
			this->show_hide_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->show_hide_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->show_hide_btn->ForeColor = System::Drawing::Color::DimGray;
			this->show_hide_btn->Location = System::Drawing::Point(288, 360);
			this->show_hide_btn->Name = L"show_hide_btn";
			this->show_hide_btn->Size = System::Drawing::Size(115, 38);
			this->show_hide_btn->TabIndex = 15;
			this->show_hide_btn->Text = L"Показать";
			this->show_hide_btn->UseVisualStyleBackColor = false;
			this->show_hide_btn->Click += gcnew System::EventHandler(this, &MyForm::show_hide_btn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(866, 505);
			this->Controls->Add(this->show_hide_btn);
			this->Controls->Add(this->link_auth);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->link_rights);
			this->Controls->Add(this->checkBox);
			this->Controls->Add(this->reg_btn);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label_logo);
			this->Controls->Add(this->panel1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Регистрация";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

		




private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->ActiveControl = label_logo;
}
	

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void reg_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ login = textBox_login->Text->Trim();
	String^ pass = textBox_pass->Text->Trim();
	if (login->Equals(""))
	{
		MessageBox::Show(this, "Please enter your login!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}
	if (pass->Equals(""))
	{
		MessageBox::Show(this, "Please enter your pass!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}

	DB* db = new DB;
	db->add_user(login, pass);
	delete db;

	textBox_login->Text = "";
	textBox_pass->Text = "";
	reg_btn->Text = "Successful registration";
}   
private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}



		private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			is_drag = true;
			pos.X = e->X;
			pos.Y = e->Y;
		}
		private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (is_drag)
			{
				Point currentPos = PointToScreen(Point(e->X, e->Y));
				Location = Point(currentPos.X - pos.X, currentPos.Y - pos.Y);
			}
		}
		private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			is_drag = false;
		}
		private: System::Void checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox->Checked)
			{
				reg_btn->Enabled = true;
			}
			else
			{
				reg_btn->Enabled = false;
				MessageBox::Show(this,"Пользовательское соглашение не установлено", "Ошибка!", MessageBoxButtons::OKCancel,MessageBoxIcon::Information);
			}
			
		}
		private: System::Void link_rights_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			if (MessageBox::Show("Хотите перейти на сайт и прочитать пользовательское соглашение?", "Права", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
				
				System::Diagnostics::Process::Start("https://leetcode.com/problemset/");
				link_rights->LinkVisited = true;

			}
		}
		private: System::Void link_auth_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
		private: System::Void show_hide_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			if (textBox_pass->PasswordChar == '*')
				textBox_pass->PasswordChar = '\0';
			else
				textBox_pass->PasswordChar = '*';
			

		}
};
}
