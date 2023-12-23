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
	public ref class ToDoList : public System::Windows::Forms::Form
	{
	private:
		Form^ obj;
	public:
		ToDoList(void)
		{
			InitializeComponent();

		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ToDoList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_logo;
	protected:


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_task;




	private: System::Windows::Forms::Panel^ panel1;




	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Button^ btn_add_task;







	protected:



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

		Point pos;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_delete_task;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox_edit_task;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button_edit_task;







		   bool is_drag;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Требуемый метод для поддержки конструктора — не изменяйте 
		   /// содержимое этого метода с помощью редактора кода.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->label_logo = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->textBox_task = (gcnew System::Windows::Forms::TextBox());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->btn_exit = (gcnew System::Windows::Forms::Button());
			   this->btn_add_task = (gcnew System::Windows::Forms::Button());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->btn_delete_task = (gcnew System::Windows::Forms::Button());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			   this->textBox_edit_task = (gcnew System::Windows::Forms::TextBox());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->button_edit_task = (gcnew System::Windows::Forms::Button());
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
			   this->label_logo->Location = System::Drawing::Point(46, 102);
			   this->label_logo->Name = L"label_logo";
			   this->label_logo->Size = System::Drawing::Size(163, 72);
			   this->label_logo->TabIndex = 0;
			   this->label_logo->Text = L"ToDo";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->BackColor = System::Drawing::Color::Transparent;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label3->Location = System::Drawing::Point(39, 222);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(131, 25);
			   this->label3->TabIndex = 2;
			   this->label3->Text = L"Добавть дело";
			   // 
			   // textBox_task
			   // 
			   this->textBox_task->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			   this->textBox_task->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBox_task->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->textBox_task->ForeColor = System::Drawing::SystemColors::Window;
			   this->textBox_task->Location = System::Drawing::Point(5, 13);
			   this->textBox_task->Name = L"textBox_task";
			   this->textBox_task->Size = System::Drawing::Size(263, 19);
			   this->textBox_task->TabIndex = 4;
			   // 
			   // panel1
			   // 
			   this->panel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			   this->panel1->Controls->Add(this->textBox_task);
			   this->panel1->Location = System::Drawing::Point(39, 259);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(271, 44);
			   this->panel1->TabIndex = 5;
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
			   this->btn_exit->Location = System::Drawing::Point(244, 12);
			   this->btn_exit->Name = L"btn_exit";
			   this->btn_exit->Size = System::Drawing::Size(66, 47);
			   this->btn_exit->TabIndex = 7;
			   this->btn_exit->Text = L"X";
			   this->btn_exit->UseVisualStyleBackColor = false;
			   this->btn_exit->Click += gcnew System::EventHandler(this, &ToDoList::btn_exit_Click);
			   // 
			   // btn_add_task
			   // 
			   this->btn_add_task->BackColor = System::Drawing::Color::SeaGreen;
			   this->btn_add_task->FlatAppearance->BorderSize = 0;
			   this->btn_add_task->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_add_task->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->btn_add_task->ForeColor = System::Drawing::Color::White;
			   this->btn_add_task->Location = System::Drawing::Point(39, 324);
			   this->btn_add_task->Name = L"btn_add_task";
			   this->btn_add_task->Size = System::Drawing::Size(126, 36);
			   this->btn_add_task->TabIndex = 9;
			   this->btn_add_task->Text = L"Добавить";
			   this->btn_add_task->UseVisualStyleBackColor = false;
			   this->btn_add_task->Click += gcnew System::EventHandler(this, &ToDoList::btn_add_task_Click);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->BackColor = System::Drawing::Color::Transparent;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label1->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			   this->label1->Location = System::Drawing::Point(54, 174);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(43, 20);
			   this->label1->TabIndex = 10;
			   this->label1->Text = L"Дела";
			   // 
			   // btn_delete_task
			   // 
			   this->btn_delete_task->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				   static_cast<System::Int32>(static_cast<System::Byte>(0)));
			   this->btn_delete_task->FlatAppearance->BorderSize = 0;
			   this->btn_delete_task->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_delete_task->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->btn_delete_task->ForeColor = System::Drawing::Color::White;
			   this->btn_delete_task->Location = System::Drawing::Point(184, 324);
			   this->btn_delete_task->Name = L"btn_delete_task";
			   this->btn_delete_task->Size = System::Drawing::Size(126, 36);
			   this->btn_delete_task->TabIndex = 11;
			   this->btn_delete_task->Text = L"Удалить";
			   this->btn_delete_task->UseVisualStyleBackColor = false;
			   this->btn_delete_task->Click += gcnew System::EventHandler(this, &ToDoList::btn_delete_task_Click);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::Color::Transparent;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label2->Location = System::Drawing::Point(39, 376);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(138, 25);
			   this->label2->TabIndex = 12;
			   this->label2->Text = L"Ваши задания:";
			   // 
			   // comboBox1
			   // 
			   this->comboBox1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			   this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->comboBox1->ForeColor = System::Drawing::SystemColors::Window;
			   this->comboBox1->FormattingEnabled = true;
			   this->comboBox1->Location = System::Drawing::Point(44, 416);
			   this->comboBox1->Name = L"comboBox1";
			   this->comboBox1->Size = System::Drawing::Size(266, 33);
			   this->comboBox1->TabIndex = 13;
			   this->comboBox1->Click += gcnew System::EventHandler(this, &ToDoList::comboBox1_Click);
			   // 
			   // textBox_edit_task
			   // 
			   this->textBox_edit_task->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			   this->textBox_edit_task->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBox_edit_task->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->textBox_edit_task->ForeColor = System::Drawing::SystemColors::Window;
			   this->textBox_edit_task->Location = System::Drawing::Point(5, 13);
			   this->textBox_edit_task->Name = L"textBox_edit_task";
			   this->textBox_edit_task->Size = System::Drawing::Size(261, 19);
			   this->textBox_edit_task->TabIndex = 4;
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->BackColor = System::Drawing::Color::Transparent;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label4->Location = System::Drawing::Point(44, 479);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(172, 25);
			   this->label4->TabIndex = 14;
			   this->label4->Text = L"Изменить задание";
			   // 
			   // panel2
			   // 
			   this->panel2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			   this->panel2->Controls->Add(this->textBox_edit_task);
			   this->panel2->Location = System::Drawing::Point(39, 516);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(276, 44);
			   this->panel2->TabIndex = 15;
			   // 
			   // button_edit_task
			   // 
			   this->button_edit_task->BackColor = System::Drawing::Color::SeaGreen;
			   this->button_edit_task->FlatAppearance->BorderSize = 0;
			   this->button_edit_task->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button_edit_task->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button_edit_task->ForeColor = System::Drawing::Color::White;
			   this->button_edit_task->Location = System::Drawing::Point(39, 566);
			   this->button_edit_task->Name = L"button_edit_task";
			   this->button_edit_task->Size = System::Drawing::Size(126, 36);
			   this->button_edit_task->TabIndex = 16;
			   this->button_edit_task->Text = L"Изменить";
			   this->button_edit_task->UseVisualStyleBackColor = false;
			   this->button_edit_task->Click += gcnew System::EventHandler(this, &ToDoList::button_edit_task_Click);
			   // 
			   // ToDoList
			   // 
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			   this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			   this->ClientSize = System::Drawing::Size(344, 460);
			   this->Controls->Add(this->button_edit_task);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->panel2);
			   this->Controls->Add(this->comboBox1);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->btn_delete_task);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->btn_add_task);
			   this->Controls->Add(this->btn_exit);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label_logo);
			   this->Controls->Add(this->panel1);
			   this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			   this->Name = L"ToDoList";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Авторизация";
			   this->Load += gcnew System::EventHandler(this, &ToDoList::AuthForm_Load);
			   this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ToDoList::MyForm_MouseDown);
			   this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ToDoList::MyForm_MouseMove);
			   this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ToDoList::MyForm_MouseUp);
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


	
	
	private: System::Void AuthForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void btn_add_task_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ task = textBox_task->Text->Trim();
		
		if (task->Equals(""))
		{
			MessageBox::Show(this, "Please enter your task!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		

		DB* db = new DB;
		db->add_task(task);
		comboBox1->DataSource = db->get_tasks();
		delete db;

		
		
		textBox_task->Text = "";
		btn_add_task->Text = "Successful";
		
		
	}
	private: System::Void comboBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->Items->Count > 0)
			return;
		
		DB* db = new DB;
		comboBox1->DataSource = db->get_tasks();
		delete db;

		this->Height += 150;
	}
	private: System::Void btn_delete_task_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedItem == nullptr)
		{
			return;
		}
		
		String^ task_to_delete = comboBox1->GetItemText(comboBox1->SelectedValue);
		DB* db = new DB;
		db->delete_task(task_to_delete);
		comboBox1->DataSource = db->get_tasks();
		delete db;
	}
	private: System::Void button_edit_task_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedItem == nullptr) {
			return;
		}
		

		String^ task_to_update = comboBox1->GetItemText(comboBox1->SelectedValue);
		DB* db = new DB;
		db->update_task(task_to_update, textBox_edit_task->Text->Trim());
		comboBox1->DataSource = db->get_tasks();
		delete db;
	}		
};
}
