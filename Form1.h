#pragma once
#include "Form2.h"
#include "Form3.h"
namespace CppCLR_WinformsProjekt1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		Form2 ^ f2;
		Form3 ^ f3;
	private:  System::Windows::Forms::Button^ button2;
	public:
		Form1(void)
		{
			
			InitializeComponent();
			
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
//	private: System::Windows::Forms::Form^ f2;
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  label1;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(96, 74);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 46);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ПРОДОЛЖИТЬ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(23, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(274, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Добро пожаловать, Пользователь";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(96, 143);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 22);
			this->button2->TabIndex = 2;
			this->button2->Text = L"ВЫЙТИ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(309, 191);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Приветствие";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {   //переход в главное меню Form2 
		Form2^ f2 = gcnew Form2();
		f2->Show();
	}
	
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
