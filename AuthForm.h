#pragma once
#include "DB.h"
#include "ToDoList.h"


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
	public ref class AuthForm : public System::Windows::Forms::Form
	{
	private:
		Form^ obj;
	public:
		AuthForm(void)
		{
			InitializeComponent();
			
		}
		AuthForm(Form^ obj)
		{
			InitializeComponent();
			this->obj = obj;

		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AuthForm()
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
	private: System::Windows::Forms::TextBox^ textBox_login1;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox_password;


	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Button^ btn_auth;






	protected:



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

		Point pos;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::LinkLabel^ link_reg;




		   bool is_drag;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Требуемый метод для поддержки конструктора — не изменяйте 
		   /// содержимое этого метода с помощью редактора кода.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AuthForm::typeid));
			   this->label_logo = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->textBox_login1 = (gcnew System::Windows::Forms::TextBox());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			   this->btn_exit = (gcnew System::Windows::Forms::Button());
			   this->btn_auth = (gcnew System::Windows::Forms::Button());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->link_reg = (gcnew System::Windows::Forms::LinkLabel());
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
			   // textBox_login1
			   // 
			   this->textBox_login1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			   this->textBox_login1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBox_login1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->textBox_login1->ForeColor = System::Drawing::SystemColors::Window;
			   this->textBox_login1->Location = System::Drawing::Point(5, 13);
			   this->textBox_login1->Name = L"textBox_login1";
			   this->textBox_login1->Size = System::Drawing::Size(166, 19);
			   this->textBox_login1->TabIndex = 4;
			   // 
			   // panel1
			   // 
			   this->panel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			   this->panel1->Controls->Add(this->textBox_login1);
			   this->panel1->Location = System::Drawing::Point(87, 261);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(179, 44);
			   this->panel1->TabIndex = 5;
			   // 
			   // panel2
			   // 
			   this->panel2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			   this->panel2->Controls->Add(this->textBox_password);
			   this->panel2->Location = System::Drawing::Point(87, 354);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(179, 44);
			   this->panel2->TabIndex = 6;
			   // 
			   // textBox_password
			   // 
			   this->textBox_password->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			   this->textBox_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBox_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->textBox_password->ForeColor = System::Drawing::SystemColors::Window;
			   this->textBox_password->Location = System::Drawing::Point(5, 13);
			   this->textBox_password->Name = L"textBox_password";
			   this->textBox_password->PasswordChar = '*';
			   this->textBox_password->Size = System::Drawing::Size(166, 19);
			   this->textBox_password->TabIndex = 4;
			   this->textBox_password->UseSystemPasswordChar = true;
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
			   this->btn_exit->Click += gcnew System::EventHandler(this, &AuthForm::btn_exit_Click);
			   // 
			   // btn_auth
			   // 
			   this->btn_auth->BackColor = System::Drawing::Color::RoyalBlue;
			   this->btn_auth->FlatAppearance->BorderSize = 0;
			   this->btn_auth->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_auth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->btn_auth->ForeColor = System::Drawing::Color::White;
			   this->btn_auth->Location = System::Drawing::Point(87, 417);
			   this->btn_auth->Name = L"btn_auth";
			   this->btn_auth->Size = System::Drawing::Size(96, 36);
			   this->btn_auth->TabIndex = 9;
			   this->btn_auth->Text = L"Вход";
			   this->btn_auth->UseVisualStyleBackColor = false;
			   this->btn_auth->Click += gcnew System::EventHandler(this, &AuthForm::btn_auth_Click);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->BackColor = System::Drawing::Color::Transparent;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label1->Location = System::Drawing::Point(87, 180);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(101, 20);
			   this->label1->TabIndex = 10;
			   this->label1->Text = L"Авторизация";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::Color::Transparent;
			   this->label2->Location = System::Drawing::Point(84, 470);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(81, 13);
			   this->label2->TabIndex = 11;
			   this->label2->Text = L"Нет аккаунта\?";
			   // 
			   // link_reg
			   // 
			   this->link_reg->AutoSize = true;
			   this->link_reg->BackColor = System::Drawing::Color::Transparent;
			   this->link_reg->LinkColor = System::Drawing::Color::White;
			   this->link_reg->Location = System::Drawing::Point(172, 470);
			   this->link_reg->Name = L"link_reg";
			   this->link_reg->Size = System::Drawing::Size(113, 13);
			   this->link_reg->TabIndex = 12;
			   this->link_reg->TabStop = true;
			   this->link_reg->Text = L"Зарегистрироваться";
			   this->link_reg->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AuthForm::link_reg_LinkClicked);
			   // 
			   // AuthForm
			   // 
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			   this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->ClientSize = System::Drawing::Size(866, 505);
			   this->Controls->Add(this->link_reg);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->btn_auth);
			   this->Controls->Add(this->btn_exit);
			   this->Controls->Add(this->panel2);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label_logo);
			   this->Controls->Add(this->panel1);
			   this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->Name = L"AuthForm";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Авторизация";
			   this->Load += gcnew System::EventHandler(this, &AuthForm::AuthForm_Load);
			   this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AuthForm::MyForm_MouseDown);
			   this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AuthForm::MyForm_MouseMove);
			   this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AuthForm::MyForm_MouseUp);
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
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
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
	
	
	private: System::Void link_reg_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->Hide();
		obj->ShowDialog();
		this->Close();
	}
	private: System::Void btn_auth_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ login = textBox_login1->Text->Trim();
		String^ pass = textBox_password->Text->Trim();
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
		bool result = db->auth_user(login, pass);
		delete db;
		static int errors =3;
		if (result)
		{
			textBox_login1->Text = "";
			textBox_password->Text = "";
			btn_auth->Text = "Successful";
		}
		
		else
		{
			MessageBox::Show(this, "Такого пользователя нет! Осталось попыток: " + (errors), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			
			if (errors == 0) {
				MessageBox::Show(this, "Пользователь удалён!");
				String^ user_to_delete = textBox_login1->Text;
				DB* db = new DB;
				db->delete_user(user_to_delete);
				delete db;
			}--errors;
			 return;
		}
		
		

		this->Hide();
		ToDoList^ form = gcnew ToDoList;
		form->ShowDialog();
		this->Close();
		
	}
private: System::Void AuthForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

};
}
