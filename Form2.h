#pragma once
#include "Form2.h"
#include "Form3.h"
#include "Form5.h"
#include <string>
#include <atltime.h>
#include <ctime>
using namespace std;
using namespace System::Windows::Forms;

namespace CppCLR_WinformsProjekt1 {
	using namespace System::Windows::Forms;
	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Сводка для Form2
	/// </summary>
	private ref class Form2 : public System::Windows::Forms::Form
	{
		Form2 ^ f2;

	private: System::Windows::Forms::Button^  button6;



	public: OpenFileDialog^ openfile;
	public:
		Form2()
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	public: System::Windows::Forms::DataGridView^  dataGridView3;
	private:
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(100, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Подключение к БД";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(100, 67);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 32);
			this->button2->TabIndex = 1;
			this->button2->Text = L"1 уровень";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(226, 67);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 32);
			this->button3->TabIndex = 2;
			this->button3->Text = L"2 уровень";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(348, 67);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 32);
			this->button4->TabIndex = 3;
			this->button4->Text = L"3 уровень";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(480, 209);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(78, 35);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Закрыть";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form2::button6_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(570, 247);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form2";
			this->Text = L"Меню";
			this->ResumeLayout(false);

		}
	
#pragma endregion
	int n = 0;
	int y = 0;
	public: System::Data::OleDb::OleDbDataReader^ oledbRead;
	public: System::Data::OleDb::OleDbConnection^ connect;
	public: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {     //подключение к базе данных
		button2->Enabled = true;
		
		OpenFileDialog^ openfile = gcnew OpenFileDialog();
		DataGridView^ dataGridView3 = gcnew DataGridView;
		openfile->Filter = "All Files (*.*)|*.*";	//Открытие диалогового окна выбора файла
		openfile->FilterIndex = 1;
		openfile->Multiselect = true; //разрешить подключение нескольких файлов
		if (openfile->ShowDialog() == ::DialogResult::OK) {
			connect = gcnew System::Data::OleDb::OleDbConnection("Provider = Microsoft.ACE.OLEDB.12.0;Data Source=" + openfile->FileName);	//открытие файла базы данных 
			n = 1;
		}
		
	}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { //переход в форму
		Form3^ f3 = gcnew Form3(connect,n,y);
		f3->Show();
	}


private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) { //закрытие
	this->Close();
}

};
}


