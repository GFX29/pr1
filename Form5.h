#pragma once
#include <string>
#include "Form2.h"
#include "Form5.h"
#include "Form6.h"
#include <array>
//using namespace std;

namespace CppCLR_WinformsProjekt1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для Form5
	/// </summary>
	public ref class Form5 : public System::Windows::Forms::Form
	{
		double d1 = 0;
		TextBox ^ textBox3;
		//	std::array<int ^,100> ^ razmetka = gcnew std::array<int ^,100>;
		public: Form5 ^f5;
	public: System::Windows::Forms::DataGridView^  dataGridView3;

	public: System::Windows::Forms::DataGridView^  dataGridView1;
	public:



		StreamWriter ^ sw;











	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox15;
	private: System::Windows::Forms::CheckBox^  checkBox14;
	private: System::Windows::Forms::CheckBox^  checkBox13;
	private: System::Windows::Forms::CheckBox^  checkBox12;
	private: System::Windows::Forms::CheckBox^  checkBox11;
	private: System::Windows::Forms::CheckBox^  checkBox10;
	private: System::Windows::Forms::CheckBox^  checkBox9;
	private: System::Windows::Forms::CheckBox^  checkBox8;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Date;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ListBox^  listBox4;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label23;

	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::ListBox^  listBox5;

	private: System::Windows::Forms::GroupBox^  groupBox3;



	public:

	public:


	public:


		//	public: System::Windows::Forms::DataGridView^  dataGridView1;
	public:
		Form5()
		{
			InitializeComponent();

			//n1 = n5;
			//
			//TODO: добавьте код конструктора
			//
		}
	public:
		Form5(DataGridView^  dataGridView3, TextBox^ textBox2, double d, StreamWriter ^ sw)
		{
			InitializeComponent();
			dataGridView1 = dataGridView3;
			textBox3 = textBox2;
			d1 = d;
			this->sw = sw;
			//n1 = n5;
			//
			//TODO: добавьте код конструктора
			//
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form5()
		{
			if (components)
			{
				delete components;

			}
			//delete M;
		}
		//	public: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;




	private: System::Windows::Forms::ComboBox^  comboBox2;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;




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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series19 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series20 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label27);
			this->groupBox1->Controls->Add(this->listBox5);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(243, 434);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Формирование блоков";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(125, 278);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(92, 13);
			this->label27->TabIndex = 27;
			this->label27->Text = L"Дата измерений";
			// 
			// listBox5
			// 
			this->listBox5->Enabled = false;
			this->listBox5->FormattingEnabled = true;
			this->listBox5->Location = System::Drawing::Point(114, 294);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(120, 134);
			this->listBox5->TabIndex = 27;
			this->listBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &Form5::listBox5_SelectedIndexChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->checkBox1);
			this->groupBox3->Controls->Add(this->checkBox15);
			this->groupBox3->Controls->Add(this->checkBox2);
			this->groupBox3->Controls->Add(this->checkBox14);
			this->groupBox3->Controls->Add(this->checkBox3);
			this->groupBox3->Controls->Add(this->checkBox13);
			this->groupBox3->Controls->Add(this->checkBox4);
			this->groupBox3->Controls->Add(this->checkBox12);
			this->groupBox3->Controls->Add(this->checkBox5);
			this->groupBox3->Controls->Add(this->checkBox11);
			this->groupBox3->Controls->Add(this->checkBox6);
			this->groupBox3->Controls->Add(this->checkBox10);
			this->groupBox3->Controls->Add(this->checkBox7);
			this->groupBox3->Controls->Add(this->checkBox9);
			this->groupBox3->Controls->Add(this->checkBox8);
			this->groupBox3->Location = System::Drawing::Point(6, 86);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(99, 342);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Марки:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(11, 25);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(32, 17);
			this->checkBox1->TabIndex = 14;
			this->checkBox1->Text = L"1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->Location = System::Drawing::Point(11, 305);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(38, 17);
			this->checkBox15->TabIndex = 14;
			this->checkBox15->Text = L"15";
			this->checkBox15->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(11, 45);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(32, 17);
			this->checkBox2->TabIndex = 15;
			this->checkBox2->Text = L"2";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->Location = System::Drawing::Point(11, 285);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(38, 17);
			this->checkBox14->TabIndex = 14;
			this->checkBox14->Text = L"14";
			this->checkBox14->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(11, 65);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(32, 17);
			this->checkBox3->TabIndex = 14;
			this->checkBox3->Text = L"3";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Location = System::Drawing::Point(11, 265);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(38, 17);
			this->checkBox13->TabIndex = 14;
			this->checkBox13->Text = L"13";
			this->checkBox13->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(11, 85);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(32, 17);
			this->checkBox4->TabIndex = 14;
			this->checkBox4->Text = L"4";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Location = System::Drawing::Point(11, 245);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(38, 17);
			this->checkBox12->TabIndex = 14;
			this->checkBox12->Text = L"12";
			this->checkBox12->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(11, 105);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(32, 17);
			this->checkBox5->TabIndex = 14;
			this->checkBox5->Text = L"5";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Location = System::Drawing::Point(11, 225);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(38, 17);
			this->checkBox11->TabIndex = 14;
			this->checkBox11->Text = L"11";
			this->checkBox11->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(11, 125);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(32, 17);
			this->checkBox6->TabIndex = 14;
			this->checkBox6->Text = L"6";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(11, 205);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(38, 17);
			this->checkBox10->TabIndex = 14;
			this->checkBox10->Text = L"10";
			this->checkBox10->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(11, 145);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(32, 17);
			this->checkBox7->TabIndex = 14;
			this->checkBox7->Text = L"7";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(11, 185);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(32, 17);
			this->checkBox9->TabIndex = 14;
			this->checkBox9->Text = L"9";
			this->checkBox9->UseVisualStyleBackColor = true;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(11, 165);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(32, 17);
			this->checkBox8->TabIndex = 14;
			this->checkBox8->Text = L"8";
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(141, 85);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 39);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Ввести снова";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form5::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(125, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Вы добавили в блок";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(111, 151);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(126, 108);
			this->listBox1->TabIndex = 2;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form5::listBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Блок_А", L"Блок_Б", L"Блок_В", L"Блок_Г", L"Блок_Д" });
			this->comboBox2->Location = System::Drawing::Point(9, 59);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(115, 21);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form5::comboBox2_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(141, 57);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 22);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Ок";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form5::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Выберите блок (например, Блок_В)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Система состоит из 15 марок";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(12, 32);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(118, 108);
			this->listBox2->TabIndex = 2;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->listBox3);
			this->groupBox2->Controls->Add(this->listBox2);
			this->groupBox2->Location = System::Drawing::Point(12, 452);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(249, 149);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Значения модулей M и A";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(179, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"A";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(59, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"M";
			// 
			// listBox3
			// 
			this->listBox3->FormatString = L"N6";
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(136, 32);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(107, 108);
			this->listBox3->TabIndex = 5;
			// 
			// chart1
			// 
			chartArea1->AxisX->Title = L"M";
			chartArea1->AxisY->Title = L"A";
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(267, 263);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series2->Legend = L"Legend1";
			series2->Name = L"Коорд-ты";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(385, 297);
			this->chart1->TabIndex = 5;
			this->chart1->Text = L"chart1";
			title1->Name = L"Title1";
			title1->Text = L"График фазовой тректории";
			this->chart1->Titles->Add(title1);
			this->chart1->Click += gcnew System::EventHandler(this, &Form5::chart1_Click);
			// 
			// chart2
			// 
			chartArea2->AxisX->Title = L"M";
			chartArea2->AxisY->Title = L"A";
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Enabled = false;
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(658, 263);
			this->chart2->Name = L"chart2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series4->Color = System::Drawing::Color::Red;
			series4->Legend = L"Legend1";
			series4->Name = L"Series2";
			this->chart2->Series->Add(series3);
			this->chart2->Series->Add(series4);
			this->chart2->Size = System::Drawing::Size(338, 297);
			this->chart2->TabIndex = 8;
			this->chart2->Text = L"chart2";
			title2->Name = L"Title1";
			title2->Text = L"График прогнозной точки";
			this->chart2->Titles->Add(title2);
			this->chart2->Click += gcnew System::EventHandler(this, &Form5::chart2_Click);
			// 
			// chart3
			// 
			chartArea3->AxisX->Title = L"M";
			chartArea3->AxisY->Title = L"A";
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(1002, 263);
			this->chart3->Name = L"chart3";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Legend = L"Legend1";
			series5->Name = L"M,A";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series6->Legend = L"Legend1";
			series6->Name = L"M+,A+";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series7->Legend = L"Legend1";
			series7->Name = L"M-,A-";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series8->Legend = L"Legend1";
			series8->Name = L" ";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series9->Legend = L"Legend1";
			series9->Name = L"  ";
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series10->Legend = L"Legend1";
			series10->Name = L"   ";
			this->chart3->Series->Add(series5);
			this->chart3->Series->Add(series6);
			this->chart3->Series->Add(series7);
			this->chart3->Series->Add(series8);
			this->chart3->Series->Add(series9);
			this->chart3->Series->Add(series10);
			this->chart3->Size = System::Drawing::Size(363, 297);
			this->chart3->TabIndex = 9;
			this->chart3->Text = L"chart3";
			title3->Name = L"Title1";
			title3->Text = L"График допустимых отклонений от нормы";
			this->chart3->Titles->Add(title3);
			this->chart3->Click += gcnew System::EventHandler(this, &Form5::chart3_Click);
			// 
			// chart4
			// 
			chartArea4->AxisX->Title = L"M";
			chartArea4->AxisY->Title = L"A";
			chartArea4->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart4->Legends->Add(legend4);
			this->chart4->Location = System::Drawing::Point(267, 263);
			this->chart4->Name = L"chart4";
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series11->Legend = L"Legend1";
			series11->Name = L"Блок_А";
			series11->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series11->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series12->Legend = L"Legend1";
			series12->Name = L"Блок_Б";
			series13->ChartArea = L"ChartArea1";
			series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series13->Legend = L"Legend1";
			series13->Name = L"Блок_В";
			series14->ChartArea = L"ChartArea1";
			series14->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series14->Legend = L"Legend1";
			series14->Name = L"Блок_Г";
			series15->ChartArea = L"ChartArea1";
			series15->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series15->Legend = L"Legend1";
			series15->Name = L"Блок_Д";
			series16->ChartArea = L"ChartArea1";
			series16->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series16->Legend = L"Legend1";
			series16->Name = L" ";
			series17->ChartArea = L"ChartArea1";
			series17->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series17->Legend = L"Legend1";
			series17->Name = L"  ";
			series18->ChartArea = L"ChartArea1";
			series18->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series18->Legend = L"Legend1";
			series18->Name = L"   ";
			series19->ChartArea = L"ChartArea1";
			series19->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series19->Legend = L"Legend1";
			series19->Name = L"      ";
			series20->ChartArea = L"ChartArea1";
			series20->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series20->Legend = L"Legend1";
			series20->Name = L"          ";
			this->chart4->Series->Add(series11);
			this->chart4->Series->Add(series12);
			this->chart4->Series->Add(series13);
			this->chart4->Series->Add(series14);
			this->chart4->Series->Add(series15);
			this->chart4->Series->Add(series16);
			this->chart4->Series->Add(series17);
			this->chart4->Series->Add(series18);
			this->chart4->Series->Add(series19);
			this->chart4->Series->Add(series20);
			this->chart4->Size = System::Drawing::Size(385, 297);
			this->chart4->TabIndex = 10;
			this->chart4->Text = L"chart4";
			title4->Name = L"Title1";
			title4->Text = L"График фазовой траектории для всех";
			this->chart4->Titles->Add(title4);
			this->chart4->Visible = false;
			this->chart4->Click += gcnew System::EventHandler(this, &Form5::chart4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1182, 566);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(82, 35);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Переход на 3 уровень";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form5::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1280, 566);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(78, 35);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Закрыть";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form5::button4_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Date });
			this->dataGridView2->Location = System::Drawing::Point(535, 37);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(788, 193);
			this->dataGridView2->TabIndex = 13;
			// 
			// Date
			// 
			this->Date->HeaderText = L"Date";
			this->Date->Name = L"Date";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(839, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 16);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Превышения марок";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(979, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 16);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Блок_А";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(979, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 16);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Блок_Б";
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(979, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 16);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Блок_В";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(980, 9);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(54, 16);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Блок_Г";
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(980, 9);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(56, 16);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Блок_Д";
			this->label11->Visible = false;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(276, 28);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(212, 95);
			this->listBox4->TabIndex = 20;
			this->listBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &Form5::listBox4_SelectedIndexChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(282, 12);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(146, 16);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Неустойчивые связи";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(432, 12);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(56, 16);
			this->label15->TabIndex = 22;
			this->label15->Text = L"Блок_А";
			this->label15->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(432, 12);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(56, 16);
			this->label17->TabIndex = 23;
			this->label17->Text = L"Блок_Б";
			this->label17->Visible = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(434, 12);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(56, 16);
			this->label19->TabIndex = 24;
			this->label19->Text = L"Блок_В";
			this->label19->Visible = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(432, 12);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(54, 16);
			this->label23->TabIndex = 25;
			this->label23->Text = L"Блок_Г";
			this->label23->Visible = false;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(430, 12);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(56, 16);
			this->label25->TabIndex = 26;
			this->label25->Text = L"Блок_Д";
			this->label25->Visible = false;
			// 
			// Form5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 605);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->chart4);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form5";
			this->Text = L"2 декомпозиция";
			this->Load += gcnew System::EventHandler(this, &Form5::Form5_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//	std::array<int,100> razmetka;
#pragma endregion
	//	int razmetka[100];
	private: System::Void Form5_Load(System::Object^  sender, System::EventArgs^  e) {
		dataGridView2->Rows->Add(dataGridView1->RowCount);
			for (int i = 0; i < dataGridView1->RowCount; i++) {
					dataGridView2->Rows[i]->Cells[0]->Value = dataGridView1->Rows[i]->Cells[0]->Value;
					listBox5->Items->Add(dataGridView2->Rows[i]->Cells[0]->Value);
			}

	}
			 int i = 0;
			 int *A = new int[100];
			 //	 int G = 0;
			 //	 int D = 0;
			 int *razmetka = new int[100];
			 int index = 0;
			 double S = 0;


	public: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (comboBox2->SelectedItem == "Блок_А") {
			if (k1 > 0) {
				MessageBox::Show("Вы уже выбирали марки для блока А, выберите другие блоки");
				groupBox3->Enabled = false;
			}
			else {
				groupBox3->Enabled = true;
			}
			
		}
		if (comboBox2->SelectedItem == "Блок_Б") {
			if (k2 > 0) {
				MessageBox::Show("Вы уже выбирали марки для блока Б, выберите другие блоки");
				groupBox3->Enabled = false;
			}
			else {
				groupBox3->Enabled = true;
			}
		}
		if (comboBox2->SelectedItem == "Блок_В") {
			if (k3 > 0) {
				MessageBox::Show("Вы уже выбирали марки для блока В, выберите другие блоки");
				groupBox3->Enabled = false;
			}
			else {
				groupBox3->Enabled = true;
			}
		}
		if (comboBox2->SelectedItem == "Блок_Г") {
			if (k4 > 0) {
				MessageBox::Show("Вы уже выбирали марки для блока Г, выберите другие блоки");
				groupBox3->Enabled = false;
			}
			else {
				groupBox3->Enabled = true;
			}
		}
		if (comboBox2->SelectedItem == "Блок_Д") {
			if (k5 > 0) {
				MessageBox::Show("Вы уже выбирали марки для блока Д, выберите другие блоки");
				groupBox3->Enabled = false;
			}
			else {
				groupBox3->Enabled = true;
			}
		}
	}
	public: long int fact(int N)
	{
		if (N < 0) // если пользователь ввел отрицательное число
			return 0; // возвращаем ноль
		if (N == 0) // если пользователь ввел ноль,
			return 1; // возвращаем факториал от нуля - не удивляетесь, но это 1 =)
		else // Во всех остальных случаях
			return N * fact(N - 1); // делаем рекурсию.
	};
			int selbA = 0;
			int selbB = 0;
			int selbV = 0;
			int selbG = 0;
			int selbD = 0;
			double Splus1 = 0;
			double Sminu1 = 0;
			int j = 0;
			int k = 0;
			int t = 0;
			int *stolb = new int[100];
			double V1 = 0;
			double *stolb1 = new double[100];
			double *stolb2 = new double[100];
			double *stolb3 = new double[100];
			double *stolb4 = new double[100];
			double *stolb5 = new double[100];
			double *Mplus1 = new double[100];
			double *Mplus2 = new double[100];
			double *Mplus3 = new double[100];
			double *Mplus4 = new double[100];
			double *Mplus5 = new double[100];
			double *Mminu1 = new double[100];
			double *Mminu2 = new double[100];
			double *Mminu3 = new double[100];
			double *Mminu4 = new double[100];
			double *Mminu5 = new double[100];
			int z1 = 0;
			int z2 = 0;
			int z3 = 0;
			int z4 = 0;
			int z5 = 0;
			int z6 = 0;
			int z7 = 0;
			int z8 = 0;
			int z9 = 0;
			int z10 = 0;
			double *A1 = new double[100];
			double *A2 = new double[100];
			double *A3 = new double[100];
			double *A4 = new double[100];
			double *A5 = new double[100];
			double *raznost = new double[100];
			String ^svyaz1;
			String ^svyaz2;
			String ^svyaz3;
			String ^svyaz4;
			String ^svyaz5;
			int c = 0;
			int k1 = 0;
			int k2 = 0;
			int k3 = 0;
			int k4 = 0;
			int k5 = 0;
	public: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		j = 0;
		i = 0;
	//	k = 0;
		if (checkBox1->Checked) {                  //запись выбранных марок в массив
			razmetka[j] = 1;
			i++;
			A[0] = 1;
			checkBox1->Checked = false;
			checkBox1->Enabled = false;
			j++;
			k++;
		}

		if (checkBox2->Checked) {
			razmetka[j] = 2;
			i++;
			A[1] = 1;
			j++;
			checkBox2->Checked = false;
			checkBox2->Enabled = false;
			k++;
		}

		if (checkBox3->Checked) {
			razmetka[j] = 3;
			i++;
			A[2] = 1;
			j++;
			checkBox3->Checked = false;
			checkBox3->Enabled = false;
			k++;
		}

		if (checkBox4->Checked) {
			razmetka[j] = 4;
			i++;
			A[3] = 1;
			j++;
			checkBox4->Checked = false;
			checkBox4->Enabled = false;
			k++;
		}

		if (checkBox5->Checked) {
			razmetka[j] = 5;
			i++;
			A[4] = 1;
			j++;
			checkBox5->Checked = false;
			checkBox5->Enabled = false;
			k++;
		}

		if (checkBox6->Checked) {
			razmetka[j] = 6;
			i++;
			A[5] = 1;
			j++;
			checkBox6->Checked = false;
			checkBox6->Enabled = false;
			k++;
		}

		if (checkBox7->Checked) {
			razmetka[j] = 7;
			i++;
			A[6] = 1;
			j++;
			checkBox7->Checked = false;
			checkBox7->Enabled = false;
			k++;
		}

		if (checkBox8->Checked) {
			razmetka[j] = 8;
			i++;
			A[7] = 1;
			j++;
			checkBox8->Checked = false;
			checkBox8->Enabled = false;
			k++;

		}

		if (checkBox9->Checked) {
			razmetka[j] = 9;
			i++;
			A[8] = 1;
			j++;
			checkBox9->Checked = false;
			checkBox9->Enabled = false;
			k++;
		}

		if (checkBox10->Checked) {
			razmetka[j] = 10;
			i++;
			A[9] = 1;
			j++;
			checkBox10->Checked = false;
			checkBox10->Enabled = false;
			k++;
		}

		if (checkBox11->Checked) {
			razmetka[j] = 11;
			i++;
			A[10] = 1;
			j++;
			checkBox11->Checked = false;
			checkBox11->Enabled = false;
			k++;
		}

		if (checkBox12->Checked) {
			razmetka[j] = 12;
			i++;
			A[11] = 1;
			j++;
			checkBox12->Checked = false;
			checkBox12->Enabled = false;
			k++;
		}

		if (checkBox13->Checked) {
			razmetka[j] = 13;
			i++;
			A[12] = 1;
			j++;
			checkBox13->Checked = false;
			checkBox13->Enabled = false;
			k++;
		}

		if (checkBox14->Checked) {
			razmetka[j] = 14;
			i++;
			A[13] = 1;
			j++;
			checkBox14->Checked = false;
			checkBox14->Enabled = false;
			k++;
		}

		if (checkBox15->Checked) {
			razmetka[j] = 15;
			i++;
			A[14] = 1;
			j++;
			checkBox15->Checked = false;
			checkBox15->Enabled = false;
			k++;
		}
		if (k <= 1) {                         //если выбранных марок <= 1, то выводим
			MessageBox::Show("Необходимо выбрать как минимум 2 марки, выберите заного!!!");
			this->Close();
			Form5 ^ f5 = gcnew Form5(dataGridView1, textBox3, d1,sw);
			f5->Show();
			k1 = 0;
			k2 = 0;
			k3 = 0;
			k4 = 0;
			k5 = 0;
			k = 0;
		}
		if ((comboBox2->SelectedItem == "Блок_А") && (i > 1)) {
			selbA++;
		}
		if ((comboBox2->SelectedItem == "Блок_Б") && (i > 1)) {
			selbB++;
		}
		if ((comboBox2->SelectedItem == "Блок_В") && (i > 1)) {
			selbV++;
		}
		if ((comboBox2->SelectedItem == "Блок_Г") && (i > 1)) {
			selbG++;
		}
		if ((comboBox2->SelectedItem == "Блок_Д") && (i > 1)) {
			selbD++;
		}


		if ((comboBox2->SelectedItem == "Блок_А") && (selbA == 1)) {           //вывод в listBox выборанных блоков
			t = 0;
			listBox1->Items->Add("Блок_А");
			selbA++;
		}
		if ((comboBox2->SelectedItem == "Блок_Б") && (selbB == 1)) {
			listBox1->Items->Add("Блок_Б");
			selbB++;
			t = 0;
		}
		if ((comboBox2->SelectedItem == "Блок_В") && (selbV == 1)) {
			listBox1->Items->Add("Блок_В");
			selbV++;
			t = 0;
		}
		if ((comboBox2->SelectedItem == "Блок_Г") && (selbG == 1)) {
			listBox1->Items->Add("Блок_Г");
			selbG++;
			t = 0;
		}
		if ((comboBox2->SelectedItem == "Блок_Д") && (selbD == 1)) {
			listBox1->Items->Add("Блок_Д");
			selbD++;
			t = 0;
		}
		c++;
		for (int q = 0; q < j; q++) {
			stolb[t] = razmetka[q];
			t++;
			if (comboBox2->SelectedItem == "Блок_А")         //считаем сколько марок из блока А, блока Б, блока В и т.д.
			{
				k1++;
			}
			if (comboBox2->SelectedItem == "Блок_Б")
			{
				k2++;
			}
			if (comboBox2->SelectedItem == "Блок_В")
			{
				k3++;
			}
			if (comboBox2->SelectedItem == "Блок_Г")
			{
				k4++;
			}
			if (comboBox2->SelectedItem == "Блок_Д")
			{
				k5++;
			}
		}


		for (int r = 0; r < dataGridView1->RowCount; r++) {
			V1 = 0;
			S = 0;
			Splus1 = 0;
			Sminu1 = 0;
			for (int y = 0; y < t; y++) {
				S = S + Convert::ToDouble(dataGridView1->Rows[r]->Cells[stolb[y]]->Value) * Convert::ToDouble(dataGridView1->Rows[r]->Cells[stolb[y]]->Value);
				Splus1 = Splus1 + (Convert::ToDouble(dataGridView1->Rows[r]->Cells[stolb[y]]->Value) + Convert::ToDouble(d1)) * (Convert::ToDouble(dataGridView1->Rows[r]->Cells[stolb[y]]->Value) + Convert::ToDouble(d1));
				Sminu1 = Sminu1 + (Convert::ToDouble(dataGridView1->Rows[r]->Cells[stolb[y]]->Value) - Convert::ToDouble(d1)) * (Convert::ToDouble(dataGridView1->Rows[r]->Cells[stolb[y]]->Value) - Convert::ToDouble(d1));
				V1 = V1 + Convert::ToDouble(dataGridView1->Rows[0]->Cells[stolb[y]]->Value) * Convert::ToDouble(dataGridView1->Rows[r]->Cells[stolb[y]]->Value);
				//listBox4->Items->Add(stolb[y]);
			}
			if (comboBox2->SelectedItem == "Блок_А") {          //если выбран Блок_А, то считаем модули А и М
				stolb1[r] = sqrt(S);
				Mplus1[r] = sqrt(Splus1);
				Mminu1[r] = sqrt(Sminu1);
				A1[r] = acos(V1 / (stolb1[0] * stolb1[r]));
				if (isnan(A1[r])) {
					A1[r] = 0;
				}
				A1[r] = floor(A1[r] * 10000000 + 0.5) / 10000000;
				A1[0] = 0;
				label15->Visible = true;
				label17->Visible = false;
				label19->Visible = false;
				label23->Visible = false;
				label25->Visible = false;
				label7->Visible = true;
				label8->Visible = false;
				label9->Visible = false;
				label11->Visible = false;
				label10->Visible = false;
			}
			if (comboBox2->SelectedItem == "Блок_Б") {
				stolb2[r] = sqrt(S);
				Mplus2[r] = sqrt(Splus1);
				Mminu2[r] = sqrt(Sminu1);
				A2[r] = acos(V1 / (stolb2[0] * stolb2[r]));
				if (isnan(A2[r])) {
					A2[r] = 0;
				}
				A2[r] = floor(A2[r] * 10000000 + 0.5) / 10000000;
				A2[0] = 0;
				label15->Visible = false;
				label17->Visible = true;
				label19->Visible = false;
				label23->Visible = false;
				label25->Visible = false;
				label8->Visible = true;
				label7->Visible = false;
				label9->Visible = false;
				label11->Visible = false;
				label10->Visible = false;
			}
			if (comboBox2->SelectedItem == "Блок_В") {
				stolb3[r] = sqrt(S);
				Mplus3[r] = sqrt(Splus1);
				Mminu3[r] = sqrt(Sminu1);
				A3[r] = acos(V1 / (stolb3[0] * stolb3[r]));
				if (isnan(A3[r])) {
					A3[r] = 0;
				}
				A3[r] = floor(A3[r] * 10000000 + 0.5) / 10000000;
				A3[0] = 0;
				label15->Visible = false;
				label17->Visible = false;
				label19->Visible = true;
				label23->Visible = false;
				label25->Visible = false;
				label9->Visible = true;
				label8->Visible = false;
				label7->Visible = false;
				label11->Visible = false;
				label10->Visible = false;
			}
			if (comboBox2->SelectedItem == "Блок_Г") {
				stolb4[r] = sqrt(S);
				Mplus4[r] = sqrt(Splus1);
				Mminu4[r] = sqrt(Sminu1);
				A4[r] = acos(V1 / (stolb4[0] * stolb4[r]));
				if (isnan(A4[r])) {
					A4[r] = 0;
				}
				A4[r] = floor(A4[r] * 10000000 + 0.5) / 10000000;
				A4[0] = 0;
				label15->Visible = false;
				label17->Visible = false;
				label19->Visible = false;
				label23->Visible = true;
				label25->Visible = false;
				label10->Visible = true;
				label8->Visible = false;
				label7->Visible = false;
				label11->Visible = false;
				label9->Visible = false;
			}
			if (comboBox2->SelectedItem == "Блок_Д") {
				stolb5[r] = sqrt(S);
				Mplus5[r] = sqrt(Splus1);
				Mminu5[r] = sqrt(Sminu1);
				A5[r] = acos(V1 / (stolb5[0] * stolb5[r]));
				if (isnan(A5[r])) {
					A5[r] = 0;
				}
				A5[r] = floor(A5[r] * 10000000 + 0.5) / 10000000;
				A5[0] = 0;
				label15->Visible = false;
				label17->Visible = false;
				label19->Visible = false;
				label23->Visible = false;
				label25->Visible = true;
				label11->Visible = true;
				label10->Visible = false;
				label8->Visible = false;
				label9->Visible = false;
				label7->Visible = false;
			}
		}
		int stol1 = 0;
		int u1 = 0;
		dataGridView2->ColumnCount = 1;
	
		if ((k1 >= 2) || (k2 >= 2) || (k3 >= 2) || (k4 >= 2) || (k5 >= 2)) {   //если марок >=2
			DataGridViewTextBoxColumn ^dgvAge;
			dgvAge = gcnew DataGridViewTextBoxColumn();
			int	faktorial = (fact(k) / (fact(k - 2) * 2));
			for (int i = 0; i < faktorial; ++i) {
				dataGridView2->Columns->Add("", "");
			}

			int u = 0;
			int y1 = 0;
			for (int y = 0; y < faktorial - y1; y++) {          //вывод информации в dataGridView о разности высот

				for (u = 1; u < k; u++) {
					//	dgvAge->HeaderText = Convert::ToString(razmetka[y]) + "-" + Convert::ToString(razmetka[u + u1]);

					for (int i = 0; i < dataGridView1->RowCount; i++) {
						dataGridView2->Rows[i]->Cells[stol1 + 1]->Value = fabs(Convert::ToDouble(dataGridView1->Rows[i]->Cells[razmetka[y]]->Value) - Convert::ToDouble(dataGridView1->Rows[i]->Cells[razmetka[u + u1]]->Value));
						dataGridView2->Columns[stol1 + 1]->HeaderText = Convert::ToString(razmetka[y]) + "-" + Convert::ToString(razmetka[u + u1]);
					}

					stol1++;
					if (u == k - 1) {
						k--;
						u1++;
						break;
					}

					y1++;
				}

			}
			listBox4->Items->Clear();
			if (comboBox2->SelectedItem == "Блок_А") {
				int p1 = 0;
				for (int i = 1; i < dataGridView2->ColumnCount; i++) {        //считаем неустойчивые связи
					
					for (int y = 0; y < dataGridView2->RowCount; y++) {
						if (fabs((Convert::ToDouble(dataGridView2->Rows[0]->Cells[i]->Value) - Convert::ToDouble(dataGridView2->Rows[y]->Cells[i]->Value))) <= d1) {
							z1++;
						}
						else {
							if (p1 == 0) {
								svyaz1 += Convert::ToString(dataGridView2->Columns[i]->HeaderText) + " ";
								listBox4->Items->Add(dataGridView2->Columns[i]->HeaderText);
								p1=1;
								z6++;
							}
							
							
							
						}
						
					}
					p1 = 0;
				}
				if (z6 == 0) {
					listBox4->Items->Add("Не устойчивых связей в блоке нет!");
				}
			}


		if (comboBox2->SelectedItem == "Блок_Б") {
			int p2 = 0;
				for (int i = 1; i < dataGridView2->ColumnCount; i++) {
					for (int y = 0; y < dataGridView2->RowCount; y++) {
						if (fabs((Convert::ToDouble(dataGridView2->Rows[0]->Cells[i]->Value) - Convert::ToDouble(dataGridView2->Rows[y]->Cells[i]->Value))) <= d1) {
							z2++;
						}
						else {
							if(p2==0){
								svyaz2 += dataGridView2->Columns[i]->HeaderText + " ";
								listBox4->Items->Add(dataGridView2->Columns[i]->HeaderText);
								p2 = 1;
								z7++;
							}
							
							
						}
					}
					p2 = 0;
				}
				if (z7 == 0) {
					listBox4->Items->Add("Не устойчивых связей в блоке нет!");
				}
			}
		if (comboBox2->SelectedItem == "Блок_В") {
			int p3 = 0;
			for (int i = 1; i < dataGridView2->ColumnCount; i++) {
				for (int y = 0; y < dataGridView2->RowCount; y++) {
					if (fabs((Convert::ToDouble(dataGridView2->Rows[0]->Cells[i]->Value) - Convert::ToDouble(dataGridView2->Rows[y]->Cells[i]->Value)))<=d1){//2 * fabs(Convert::ToDouble(Mplus3[y]) - Convert::ToDouble(Mminu3[y]))) {
						z3++;
									}
						else {
						if(p3==0){
							svyaz3 += dataGridView2->Columns[i]->HeaderText + " ";
							listBox4->Items->Add(dataGridView2->Columns[i]->HeaderText);
							p3 = 1;
							z8++;
						}
						
									}
								}
				p3 = 0;
							}
			if (z8 == 0) {
				listBox4->Items->Add("Не устойчивых связей в блоке нет!");
			}
						}
		if (comboBox2->SelectedItem == "Блок_Г") {
			int p4 = 0;
				for (int i = 1; i < dataGridView2->ColumnCount; i++) {
					for (int y = 0; y < dataGridView2->RowCount; y++) {
						if (fabs((Convert::ToDouble(dataGridView2->Rows[0]->Cells[i]->Value) - Convert::ToDouble(dataGridView2->Rows[y]->Cells[i]->Value))) <= d1) {
					z4++;
					
							}
			     				else {
							
							if(p4==0){
								svyaz4 += dataGridView2->Columns[i]->HeaderText + " ";
								listBox4->Items->Add(dataGridView2->Columns[i]->HeaderText);
								p4 = 1;
								z9++;
							}
							
									}
								}
					p4 = 0;
							}
				if (z9 == 0) {
					listBox4->Items->Add("Не устойчивых связей в блоке нет!");
				}
						}
		if (comboBox2->SelectedItem == "Блок_Д") {
			int p5 = 0;
				for (int i = 1; i < dataGridView2->ColumnCount; i++) {
				 for (int y = 0; y < dataGridView2->RowCount; y++) {
					if (fabs((Convert::ToDouble(dataGridView2->Rows[0]->Cells[i]->Value) - Convert::ToDouble(dataGridView2->Rows[y]->Cells[i]->Value))) <= d1) {
						z5++;    
						}
						   else {
						if(p5==0){
							svyaz5 += dataGridView2->Columns[i]->HeaderText + " ";
							listBox4->Items->Add(dataGridView2->Columns[i]->HeaderText);
							p5 = 1;
							z10++;
						}
						
					    
									}
								}
				 p5 = 0;
							}
				if (z10 == 0) {
					listBox4->Items->Add("Не устойчивых связей в блоке нет!");
				}
						}

					
	//	textBox1->Text = Convert::ToString(k);
		k = 0;
		groupBox3->Enabled = false;
					}
				}
			
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		
	}



private: System::Void checkedListBox1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
	
}
public: double func(double stolb1, double mpr)  //функция для вычисления прогнозной точки
{
	return stolb1 * Convert::ToDouble(textBox3->Text) + (1 - Convert::ToDouble(textBox3->Text)) * mpr;
}
		
//public: bool func1(double M0, double M1, double E) {
	

		double p= 0;
		int clik1 = 0;
		int clik2 = 0;
		double Mpr1 = 0;
		double Mpr2 = 0;
		double Mpr3 = 0;
		double Mpr4 = 0;
		double Mpr5 = 0;
		double alphaPr1 = 0;
		double alphaPr2 = 0;
		double alphaPr3 = 0;
		double alphaPr4 = 0;
		double alphaPr5 = 0;
		int sw1 = 0;
		int sw2 = 0;
		int sw3 = 0;
		int sw4 = 0;
		int sw5 = 0;
		double *vector1 = new double[100];
		double *vector2 = new double[100];
		double *vector3 = new double[100];
		double *vector4 = new double[100];
		double *vector5 = new double[100];
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	listBox2->Items->Clear();
	listBox3->Items->Clear();
	listBox5->Enabled = true;
	chart3->Series[3]->Points->Clear();
	chart3->Series[4]->Points->Clear();
	chart3->Series[5]->Points->Clear();
	chart1->Series[0]->Points->Clear();
	chart1->Series[1]->Points->Clear();
	chart2->Series[0]->Points->Clear();
	chart2->Series[1]->Points->Clear();
	chart3->Series[0]->Points->Clear();
	chart3->Series[1]->Points->Clear();
	chart3->Series[2]->Points->Clear();
	//StreamWriter ^ sw = gcnew StreamWriter("..\\Reports\\_ini\\" + "Osn_vychisleniya.ini");
	double sumPr = 0;
	double sumPrAlpha = 0;
	double sredn = 0;
	double srednAlpha = 0;
	double Mpr[100];
	double alphaPr[100];
		if (listBox1->SelectedItem == "Блок_А")
	{
			if (sw1 == 0){
				sw->WriteLine("Вычисления модуля М и модуля А для Блока_А, 2 декомпозиция:");
		}
		for (int i = 0; i < dataGridView1->RowCount; i++) {
			sumPr = sumPr + stolb1[i];
			sumPrAlpha = sumPrAlpha + A1[i];
			listBox2->Items->Add(Convert::ToDouble(stolb1[i]));     //вывод модуля М и А
			listBox3->Items->Add(Convert::ToDouble(A1[i]));
			if (sw1 == 0) {
				sw->WriteLine(Convert::ToString(stolb1[i]) + " " + Convert::ToString(A1[i]));
			}
			
			chart1->Series[0]->Points->AddXY(stolb1[i], A1[i]);     //график
			chart1->Series[1]->Points->AddXY(stolb1[i], A1[i]);
			chart2->Series[0]->Points->AddXY(stolb1[i], A1[i]);
			Mplus1[i] = floor(Mplus1[i] * 1000000 + 0.5) / 1000000;
			Mminu1[i] = floor(Mminu1[i] * 1000000 + 0.5) / 1000000;
			chart3->Series[0]->Points->AddXY(stolb1[i], A1[i]);
			chart3->Series[1]->Points->AddXY(Mplus1[i], A1[i]);
			chart3->Series[2]->Points->AddXY(Mminu1[i], A1[i]);
			chart3->Series[3]->Points->AddXY(stolb1[i], A1[i]);
			chart3->Series[4]->Points->AddXY(Mplus1[i], A1[i]);
			chart3->Series[5]->Points->AddXY(Mminu1[i], A1[i]);
		}
		sw1++;
		chart1->Series[0]->Name = "Блок_А";
		sredn = sumPr / dataGridView1->RowCount;
		srednAlpha = sumPrAlpha / dataGridView1->RowCount;
		Mpr[0] = stolb1[0] * Convert::ToDouble(textBox3->Text) + (1 - Convert::ToDouble(textBox3->Text)) * sredn;       //вычисление прогнозной точки
		alphaPr[0] = A1[0] * Convert::ToDouble(textBox3->Text) + (1 - Convert::ToDouble(textBox3->Text)) * srednAlpha;
		for (int i = 1; i < dataGridView1->RowCount; i++) {
			Mpr[i] = func(stolb1[i],Mpr[i-1]);
			alphaPr[i] = func(A1[i],alphaPr[i - 1]);
		}
		Mpr1 = sredn * Convert::ToDouble(textBox3->Text) + (1 - Convert::ToDouble(textBox3->Text))*Mpr[dataGridView1->RowCount - 1];
		alphaPr1 = srednAlpha * Convert::ToDouble(textBox3->Text) + (1 - Convert::ToDouble(textBox3->Text))*alphaPr[dataGridView1->RowCount - 1];
		chart2->Series[0]->Points->AddXY(Mpr1, alphaPr1);
		chart2->Series[1]->Points->AddXY(Mpr1, alphaPr1);
		listBox2->Items->Add("Mпр" + " " + Mpr1);
		listBox3->Items->Add("Alphaпр" + " " + alphaPr1);
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_BLOK_A_2_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);   //сохранение всех графиков
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_BLOCK_A_2_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyh_otkloneniy_dlya_BLOCK_A_2_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
	}
	if (listBox1->SelectedItem == "Блок_Б")
	{
		if (sw2 == 0) {
			sw->WriteLine("Вычисления модуля М и модуля А для Блока_Б, 2 декомпозиция:");
		}
		for (int i = 0; i < dataGridView1->RowCount; i++) {
		//	vector2[z2] = stolb2[i];
		//	z2++;
			sumPr = sumPr + stolb2[i];
			sumPrAlpha = sumPrAlpha + A2[i];
			listBox2->Items->Add(Convert::ToDouble(stolb2[i]));
			listBox3->Items->Add(Convert::ToDouble(A2[i]));
			if (sw2 == 0) {
				
				sw->WriteLine(Convert::ToString(stolb2[i]) + " " + Convert::ToString(A2[i]));
					}
			
			chart1->Series[0]->Points->AddXY(stolb2[i], A2[i]);
			chart1->Series[1]->Points->AddXY(stolb2[i], A2[i]);
			chart2->Series[0]->Points->AddXY(stolb2[i], A2[i]);
			chart3->Series[0]->Points->AddXY(stolb2[i], A2[i]);
			chart3->Series[1]->Points->AddXY(Mplus2[i], A2[i]);
			chart3->Series[2]->Points->AddXY(Mminu2[i], A2[i]);
			chart3->Series[3]->Points->AddXY(stolb2[i], A2[i]);
			chart3->Series[4]->Points->AddXY(Mplus2[i], A2[i]);
			chart3->Series[5]->Points->AddXY(Mminu2[i], A2[i]);
		}
		sw2++;
		sredn = sumPr / dataGridView1->RowCount;
		srednAlpha = sumPrAlpha / dataGridView1->RowCount;
		Mpr[0] = stolb2[0] * Convert::ToDouble(textBox3->Text) + (1 - Convert::ToDouble(textBox3->Text)) * sredn;
		alphaPr[0] = A2[0] * Convert::ToDouble(textBox3->Text) + (1 - Convert::ToDouble(textBox3->Text)) * srednAlpha;
		for (int i = 1; i < dataGridView1->RowCount; i++) {
			Mpr[i] = func(stolb2[i], Mpr[i - 1]);
			alphaPr[i] = func(A2[i], alphaPr[i - 1]);
		}
		Mpr2 = sredn * Convert::ToDouble(textBox3->Text) + (1 - Convert::ToDouble(textBox3->Text))*Mpr[dataGridView1->RowCount - 1];
		alphaPr2 = srednAlpha * Convert::ToDouble(textBox3->Text) + (1 - Convert::ToDouble(textBox3->Text))*alphaPr[dataGridView1->RowCount - 1];
		chart1->Series[0]->Name = "Блок_Б";
		chart2->Series[0]->Points->AddXY(Mpr2, alphaPr2);
		chart2->Series[1]->Points->AddXY(Mpr2, alphaPr2);
		listBox2->Items->Add("Mпр" + " " + Mpr2);
		listBox3->Items->Add("Alphaпр" + " " + alphaPr2);
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_BLOK_B_2_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_BLOCK_B_2_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyh_otkloneniy_dlya_BLOCK_B_2_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		//textBox1->Text = Convert::ToString(Mpr1);
	}
	if (listBox1->SelectedItem == "Блок_В")
	{
		if (sw3 == 0) {
			sw->WriteLine("Вычисления модуля М и модуля А для Блока_В, 2 декомпозиция:");
		}
		for (int i = 0; i < dataGridView1->RowCount; i++) {
		//	vector3[z3] = stolb3[i];
		//	z3++;
			sumPr = sumPr + stolb3[i];
			sumPrAlpha = sumPrAlpha + A3[i];
			listBox2->Items->Add(Convert::ToDouble(stolb3[i]));
			listBox3->Items->Add(Convert::ToDouble(A3[i]));
			if (sw3 == 0) {
				
				sw->WriteLine(Convert::ToString(stolb3[i]) + " " + Convert::ToString(A3[i]));
			}
			
			chart1->Series[0]->Points->AddXY(stolb3[i], A3[i]);
			chart1->Series[1]->Points->AddXY(stolb3[i], A3[i]);
			chart2->Series[0]->Points->AddXY(stolb3[i], A3[i]);
			chart3->Series[0]->Points->AddXY(stolb3[i], A3[i]);
			chart3->Series[1]->Points->AddXY(Mplus3[i], A3[i]);
			chart3->Series[2]->Points->AddXY(Mminu3[i], A3[i]);
			chart3->Series[3]->Points->AddXY(stolb3[i], A3[i]);
			chart3->Series[4]->Points->AddXY(Mplus3[i], A3[i]);
			chart3->Series[5]->Points->AddXY(Mminu3[i], A3[i]);
		}
		sw3++;
		sredn = sumPr / dataGridView1->RowCount;
		srednAlpha = sumPrAlpha / dataGridView1->RowCount;
		Mpr[0] = stolb3[0] * Convert::ToDouble(textBox3->Text) + (1 - Convert::ToDouble(textBox3->Text)) * sredn;
		alphaPr[0] = A3[0] * Convert::ToDouble(textBox3->Text) + (1 - Convert::ToDouble(textBox3->Text)) * srednAlpha;
		for (int i = 1; i < dataGridView1->RowCount; i++) {
			Mpr[i] = func(stolb3[i], Mpr[i - 1]);
			alphaPr[i] = func(A3[i], alphaPr[i - 1]);
		}
		chart1->Series[0]->Name = "Блок_В";
		Mpr3 = sredn * Convert::ToDouble(textBox3->Text) + (1 - Convert::ToDouble(textBox3->Text))*Mpr[dataGridView1->RowCount - 1];
		alphaPr3 = srednAlpha * Convert::ToDouble(textBox3->Text) + (1 - Convert::ToDouble(textBox3->Text))*alphaPr[dataGridView1->RowCount - 1];
		chart2->Series[0]->Points->AddXY(Mpr3, alphaPr3);
		chart2->Series[1]->Points->AddXY(Mpr3, alphaPr3);
		listBox2->Items->Add("Mпр" + " " + Mpr3);
		listBox3->Items->Add("Alphaпр" + " " + alphaPr3);
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_BLOK_V_2_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_BLOCK_V_2_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyh_otkloneniy_dlya_BLOCK_V_2_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		//textBox1->Text = Convert::ToString(Mpr1);
	}
	if (listBox1->SelectedItem == "Блок_Г")
	{
		if (sw4 == 0) {
			sw->WriteLine("Вычисления модуля М и модуля А для Блока_Г, 2 декомпозиция:");
		}
		for (int i = 0; i < dataGridView1->RowCount; i++) {
		//	vector4[z4] = stolb4[i];
		//	z4++;
			sumPr = sumPr + stolb4[i];
			sumPrAlpha = sumPrAlpha + A4[i];
			listBox2->Items->Add(Convert::ToDouble(stolb4[i]));
			listBox3->Items->Add(Convert::ToDouble(A4[i]));
			if (sw4 == 0) {
				
				sw->WriteLine(Convert::ToString(stolb4[i]) + " " + Convert::ToString(A4[i]));
			}
			chart1->Series[0]->Points->AddXY(stolb4[i], A4[i]);
			chart1->Series[1]->Points->AddXY(stolb4[i], A4[i]);
			chart2->Series[0]->Points->AddXY(stolb4[i], A4[i]);
			chart3->Series[0]->Points->AddXY(stolb4[i], A4[i]);
			chart3->Series[1]->Points->AddXY(Mplus4[i], A4[i]);
			chart3->Series[2]->Points->AddXY(Mminu4[i], A4[i]);
			chart3->Series[3]->Points->AddXY(stolb4[i], A4[i]);
			chart3->Series[4]->Points->AddXY(Mplus4[i], A4[i]);
			chart3->Series[5]->Points->AddXY(Mminu4[i], A4[i]);
		}
		sw4++;
		sredn = sumPr / dataGridView1->RowCount;
		srednAlpha = sumPrAlpha / dataGridView1->RowCount;
		Mpr[0] = stolb4[0] * Convert::ToDouble(textBox3->Text) + (1 - Convert::ToDouble(textBox3->Text)) * sredn;
		alphaPr[0] = A4[0] * Convert::ToDouble(textBox3->Text) + (1 - Convert::ToDouble(textBox3->Text)) * srednAlpha;
		for (int i = 1; i < dataGridView1->RowCount; i++) {
			Mpr[i] = func(stolb4[i], Mpr[i - 1]);
			alphaPr[i] = func(A4[i], alphaPr[i - 1]);
		}
		Mpr4 = sredn * Convert::ToDouble(textBox3->Text) + (1 - Convert::ToDouble(textBox3->Text))*Mpr[dataGridView1->RowCount - 1];
		alphaPr4 = srednAlpha * Convert::ToDouble(textBox3->Text) + (1 - Convert::ToDouble(textBox3->Text))*alphaPr[dataGridView1->RowCount - 1];
		chart1->Series[0]->Name = "Блок_Г";
		chart2->Series[0]->Points->AddXY(Mpr4, alphaPr4);
		chart2->Series[1]->Points->AddXY(Mpr4, alphaPr4);
		listBox2->Items->Add("Mпр" + " " + Mpr4);
		listBox3->Items->Add("Alphaпр" + " " + alphaPr4);
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_BLOK_G_2_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_BLOCK_G_2_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyh_otkloneniy_dlya_BLOCK_G_2_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		//textBox1->Text = Convert::ToString(Mpr1);
	}
	if (listBox1->SelectedItem == "Блок_Д")
	{
		if (sw5 == 0) {
			sw->WriteLine("Вычисления модуля М и модуля А для Блока_Д, 2 декомпозиция:");
		}
		for (int i = 0; i < dataGridView1->RowCount; i++) {
		//	vector5[z5] = stolb5[i];
		//	z5++;
			sumPr = sumPr + stolb5[i];
			sumPrAlpha = sumPrAlpha + A5[i];
			listBox2->Items->Add(Convert::ToDouble(stolb5[i]));
			listBox3->Items->Add(Convert::ToDouble(A5[i]));
			if (sw5 == 0) {
				
				sw->WriteLine(Convert::ToString(stolb5[i]) + " " + Convert::ToString(A5[i]));
			}
			chart1->Series[0]->Points->AddXY(stolb5[i], A5[i]);
			chart1->Series[1]->Points->AddXY(stolb5[i], A5[i]);
			chart2->Series[0]->Points->AddXY(stolb5[i], A5[i]);
			chart3->Series[0]->Points->AddXY(stolb5[i], A5[i]);
			chart3->Series[1]->Points->AddXY(Mplus5[i], A5[i]);
			chart3->Series[2]->Points->AddXY(Mminu5[i], A5[i]);
			chart3->Series[3]->Points->AddXY(stolb5[i], A5[i]);
			chart3->Series[4]->Points->AddXY(Mplus5[i], A5[i]);
			chart3->Series[5]->Points->AddXY(Mminu5[i], A5[i]);
		}
		sw5++;
		sredn = sumPr / dataGridView1->RowCount;
		srednAlpha = sumPrAlpha / dataGridView1->RowCount;
		Mpr[0] = stolb5[0] * Convert::ToDouble(textBox3->Text) + (1 - Convert::ToDouble(textBox3->Text)) * sredn;
		alphaPr[0] = A5[0] * Convert::ToDouble(textBox3->Text) + (1 - Convert::ToDouble(textBox3->Text)) * srednAlpha;
		for (int i = 1; i < dataGridView1->RowCount; i++) {
			Mpr[i] = func(stolb5[i], Mpr[i - 1]);
			alphaPr[i] = func(A5[i], alphaPr[i - 1]);
		}
		Mpr5 = sredn * Convert::ToDouble(textBox3->Text) + (1 - Convert::ToDouble(textBox3->Text))*Mpr[dataGridView1->RowCount - 1];
		alphaPr5 = srednAlpha * Convert::ToDouble(textBox3->Text) + (1 - Convert::ToDouble(textBox3->Text))*alphaPr[dataGridView1->RowCount - 1];
		chart1->Series[0]->Name = "Блок_Д";
		chart2->Series[0]->Points->AddXY(Mpr5, alphaPr5);
		chart2->Series[1]->Points->AddXY(Mpr5, alphaPr5);
		listBox2->Items->Add("Mпр" +" "+ Mpr5);
		listBox3->Items->Add("Alphaпр" + " " + alphaPr5);
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_BLOK_D_2_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_BLOCK_D_2_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyh_otkloneniy_dlya_BLOCK_D_2_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		//textBox1->Text = Convert::ToString(Mpr1);
	}
	//sw->Close();
	if (clik1 == 1) {
		chart4->Series[0]->Points->Clear();
		chart4->Series[1]->Points->Clear();
		chart4->Series[2]->Points->Clear();
		chart4->Series[3]->Points->Clear();
		chart4->Series[4]->Points->Clear();
		chart4->Series[5]->Points->Clear();
		chart4->Series[6]->Points->Clear();
		chart4->Series[7]->Points->Clear();
		chart4->Series[8]->Points->Clear();
		chart4->Series[9]->Points->Clear();
		if (selbA >= 1) {
			for (int i = 0; i < dataGridView1->RowCount; i++) {
				chart4->Series[0]->Points->AddXY(stolb1[i], A1[i]);
			}
			for (int i = 0; i < dataGridView1->RowCount; i++) {
				chart4->Series[5]->Points->AddXY(stolb1[i], A1[i]);
			}
		//	textBox1->Text = Convert::ToString(k1);
		}
		if (selbB >= 1) {
			for (int i = 0; i < dataGridView1->RowCount; i++) {
				chart4->Series[1]->Points->AddXY(stolb2[i], A2[i]);
							}
			for (int i = 0; i < dataGridView1->RowCount; i++) {
				chart4->Series[6]->Points->AddXY(stolb2[i], A2[i]);
			}
		}
		if (selbV >= 1) {
			for (int i = 0; i < dataGridView1->RowCount; i++) {
				chart4->Series[2]->Points->AddXY(stolb3[i], A3[i]);
				
			}
			for (int i = 0; i < dataGridView1->RowCount; i++) {
				chart4->Series[7]->Points->AddXY(stolb3[i], A3[i]);
			}
		}
		if(selbG >= 1) {
			for (int i = 0; i < dataGridView1->RowCount; i++) {
				chart4->Series[3]->Points->AddXY(stolb4[i], A4[i]);
				
			}
			for (int i = 0; i < dataGridView1->RowCount; i++) {
				chart4->Series[8]->Points->AddXY(stolb4[i], A4[i]);
			}

		}
		if (selbD >= 1) {
			for (int i = 0; i < dataGridView1->RowCount; i++) {
				chart4->Series[4]->Points->AddXY(stolb5[i], A5[i]);
				
			}
			for (int i = 0; i < dataGridView1->RowCount; i++) {
				chart4->Series[9]->Points->AddXY(stolb5[i], A5[i]);
			}
		}
	//	textBox1->Text = Convert::ToString(k1);
		
		chart4->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_vsex_2_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
	}

}
public: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (((k1 == k2) || (k1 == 0) || (k2 == 0)) && ((k2 == k3) || (k2== 0) || (k3== 0)) && ((k3==k4) || (k3 == 0) || (k4 == 0)) && ((k4==k5) || (k4 == 0) || (k5 == 0)) && ((k1 == k3) || (k1 == 0) || (k3 == 0)) && ((k1 == k4) || (k1 == 0) || (k4 == 0)) && ((k1 == k5) || (k1 == 0) || (k5 == 0)) && ((k2 == k4) || (k2 == 0) || (k4 == 0)) && ((k2 == k5) || (k2 == 0) || (k5 == 0)) && ((k3 == k5) || (k3 == 0) || (k5 == 0))) {

		chart4->Visible = true;
		chart1->Visible = false;
		clik1++;
		clik2 = 0;
		if (clik1 == 2) {
			chart4->Series[0]->Points->Clear();
			chart4->Series[1]->Points->Clear();
			chart4->Series[2]->Points->Clear();
			chart4->Series[3]->Points->Clear();
			chart4->Series[4]->Points->Clear();
			chart4->Series[5]->Points->Clear();
			chart4->Series[6]->Points->Clear();
			chart4->Series[7]->Points->Clear();
			chart4->Series[8]->Points->Clear();
			chart4->Series[9]->Points->Clear();
			clik1 = 1;
		}
		listBox1->Enabled = false;
		listBox1_SelectedIndexChanged(sender, e);
		//}		
	}
	else {
		MessageBox::Show("Количество марок должно быть равно!!!");
	}
	
		
}
private: System::Void chart2_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void chart3_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
	Form5 ^ f5 = gcnew Form5(dataGridView1, textBox3, d1,sw);
	f5->Show();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//sw->Close();
	Form6 ^ f6 = gcnew Form6(dataGridView1, textBox3, d1,sw);
	f6->Show();
	if(k1>3){
		int	factor1 = fact(k1)/(fact(k1 - 2) * 2);
		k1 = factor1;
	}
	if (k2 > 3) {
		int	factor2 = fact(k2) / (fact(k2 - 2) * 2);
		k2 = factor2;
	}
	if (k3 > 3) {
		int	factor3 = fact(k3) / (fact(k3 - 2) * 2);
		k3 = factor3;
	}
	if (k4 > 3) {
		int	factor4 = fact(k4) / (fact(k4 - 2) * 2);
		k4 = factor4;
	}
	if (k5 > 3) {
		int	factor5 = fact(k5) / (fact(k5 - 2) * 2);
		k5 = factor5;
	}
	int s1 = 0;
	int s2 = 0;
	int s3 = 0;
	int s4 = 0;
	int s5 = 0;
	if (k1 != 0) {                                 
		if ((3 * k1 - 6) / 2 >= z6) {
			s1 = 2;
		}
		
		if (z1 == dataGridView1->RowCount*k1) {
			s1 = 1;
		}
		if ((k1 == 2) && (z1 == dataGridView1->RowCount)){          //условие о АТТ
			s1 = 1;
		}
		if ((3 * k1 - 6) / 2 < z6) {
			s1 = 3;
		}
		if (s1 == 1)
		{
			MessageBox::Show("Блок_А: Система является АТТ");
		}
		if (s1 == 2)
		{
			MessageBox::Show("Блок_А: Рекомендуется конструирование по подблокам, все неустойчивые связи - " + svyaz1 + " ");
		}
		if (s1 == 3)
		{
			MessageBox::Show("Блок_А: Рекомендуется исследование по точкам, все неустойчивые связи - " + svyaz1 + " ");
		}
		//textBox1->Text = Convert::ToString(z1);
	}
	if (k2 != 0) {
		if ((3 * k2 - 6) / 2 >= z7) {
			s2 = 2;
		}
		if (z2 == dataGridView1->RowCount*k2) {
			s2 = 1;
		}
		if ((k2 == 2) && (z2 == dataGridView1->RowCount)) {
			s2 = 1;
		}
		if ((3 * k2 - 6) / 2 < z7) {
			s2 = 3;
		}
		if (s2 == 1)
		{
			MessageBox::Show("Блок_Б: Система является АТТ");
		}
		if (s2 == 2)
		{
			MessageBox::Show("Блок_Б: Рекомендуется конструирование по подблокам, все неустойчивые связи - " + svyaz2 + " ");
		}
		if (s2 == 3)
		{
			MessageBox::Show("Блок_Б: Рекомендуется исследование по точкам, все неустойчивые связи - " + svyaz2 + " ");
		}
//		textBox1->Text = Convert::ToString(z2);
	}
	if (k3 != 0) {
		if ((3 * k3 - 6) / 2 >= z8) {
			s3 = 2;
		}
		if (z3 == dataGridView1->RowCount*k3) {
			s3 = 1;
		}
		if ((k3 == 2) && (z3 == dataGridView1->RowCount)) {
			s3 = 1;
		}
		if ((3 * k3- 6) / 2 < z8) {
			s3 = 3;
		}
		if (s3 == 1)
		{
			MessageBox::Show("Блок_В: Система является АТТ");
		}
		if (s3 == 2)
		{
			MessageBox::Show("Блок_В: Рекомендуется конструирование по подблокам, все неустойчивые связи - " + svyaz3 + " ");
		}
		if (s3 == 3)
		{
			MessageBox::Show("Блок_В: Рекомендуется исследование по точкам, все неустойчивые связи - " + svyaz3 + " ");
		}
//		textBox1->Text = Convert::ToString(z3);
	}
	if (k4 != 0) {
		if ((3 * k4 - 6) / 2 >= z9) {
			s4 = 2;
		}
		if (z4 == dataGridView1->RowCount*k4) {
			s4 = 1;
		}
		if ((k4 == 2) && (z4 == dataGridView1->RowCount)) {
			s4 = 1;
		}
		if ((3 * k4 - 6) / 2 < z9) {
			s4 = 3;
		}
		if (s4 == 1)
		{
			MessageBox::Show("Блок_Г: Система является АТТ");
		}
		if (s4 == 2)
		{
			MessageBox::Show("Блок_Г: Рекомендуется конструирование по подблокам, все неустойчивые связи - " + svyaz4 + " ");
		}
		if (s4 == 3)
		{
			MessageBox::Show("Блок_Г: Рекомендуется исследование по точкам, все неустойчивые связи - " + svyaz4 + " ");
		}
	//	textBox1->Text = Convert::ToString(s4);
	}
	if (k5 != 0) {
		if ((3 * k5 - 6) / 2 >= z10) {
			s5 = 2;
		}
		if (z5 == dataGridView1->RowCount*k5) {
			s5 = 1;
		}
		if ((k5 == 2) && (z5 == dataGridView1->RowCount)) {
			s5 = 1;
		}
		if ((3 * k5 - 6) / 2 < z10) {
			s5 = 3;
		}
		if (s5 == 1)
		{
			MessageBox::Show("Блок_Д: Система является АТТ");
		}
		if (s5 == 2)
		{
			MessageBox::Show("Блок_Д: Рекомендуется конструирование по подблокам, все неустойчивые связи - " + svyaz5 + " ");
		}
		if (s5 == 3)
		{
			MessageBox::Show("Блок_Д: Рекомендуется исследование по точкам, все неустойчивые связи - " + svyaz5 + " ");
		}
	//	textBox1->Text = Convert::ToString(s5);
	}
	
	

}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	
	this->Close();
}
private: System::Void chart4_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void listBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void listBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	listBox2->SelectedIndex = listBox5->SelectedIndex;
	listBox3->SelectedIndex = listBox5->SelectedIndex;
}
};
}
