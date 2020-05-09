#pragma once
#include <math.h>
#include "Form7.h"
#include "Form8.h"
#include "Form9.h"
namespace CppCLR_WinformsProjekt1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для Form6
	/// </summary>
	public ref class Form6 : public System::Windows::Forms::Form
	{
	public: DataGridView ^ dataGridView5;
	public: TextBox ^ textBox5;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;

	StreamWriter ^ sw;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label4;
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
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ListBox^  listBox5;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ListBox^  listBox7;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::GroupBox^  groupBox3;

	public:
	public: double ^ d5;
	public:
		Form6(DataGridView ^ dataGridView1, TextBox ^ textBox3, double ^ d1, StreamWriter ^ sw)
		{
			InitializeComponent();
			dataGridView5 = dataGridView1;
			textBox5 = textBox3;
			d5 = d1;
			this->sw = sw;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form6()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::Windows::Forms::DataVisualization::Charting::Title^  title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->listBox7 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(6, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(105, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"A1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->listBox2);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(310, 464);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Формирование системы по подблокам";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->checkBox9);
			this->groupBox3->Controls->Add(this->checkBox1);
			this->groupBox3->Controls->Add(this->checkBox2);
			this->groupBox3->Controls->Add(this->checkBox15);
			this->groupBox3->Controls->Add(this->checkBox3);
			this->groupBox3->Controls->Add(this->checkBox14);
			this->groupBox3->Controls->Add(this->checkBox4);
			this->groupBox3->Controls->Add(this->checkBox13);
			this->groupBox3->Controls->Add(this->checkBox5);
			this->groupBox3->Controls->Add(this->checkBox12);
			this->groupBox3->Controls->Add(this->checkBox6);
			this->groupBox3->Controls->Add(this->checkBox11);
			this->groupBox3->Controls->Add(this->checkBox7);
			this->groupBox3->Controls->Add(this->checkBox10);
			this->groupBox3->Controls->Add(this->checkBox8);
			this->groupBox3->Enabled = false;
			this->groupBox3->Location = System::Drawing::Point(6, 107);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(89, 349);
			this->groupBox3->TabIndex = 9;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Выберите марки";
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(6, 201);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(32, 17);
			this->checkBox9->TabIndex = 2;
			this->checkBox9->Text = L"9";
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &Form6::checkBox9_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(6, 33);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(32, 17);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"1";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form6::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(6, 54);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(32, 17);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"2";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form6::checkBox2_CheckedChanged);
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->Location = System::Drawing::Point(6, 327);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(38, 17);
			this->checkBox15->TabIndex = 2;
			this->checkBox15->Text = L"15";
			this->checkBox15->UseVisualStyleBackColor = true;
			this->checkBox15->CheckedChanged += gcnew System::EventHandler(this, &Form6::checkBox15_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(6, 75);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(32, 17);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"3";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Form6::checkBox3_CheckedChanged);
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->Location = System::Drawing::Point(6, 306);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(38, 17);
			this->checkBox14->TabIndex = 2;
			this->checkBox14->Text = L"14";
			this->checkBox14->UseVisualStyleBackColor = true;
			this->checkBox14->CheckedChanged += gcnew System::EventHandler(this, &Form6::checkBox14_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(6, 96);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(32, 17);
			this->checkBox4->TabIndex = 2;
			this->checkBox4->Text = L"4";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Form6::checkBox4_CheckedChanged);
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Location = System::Drawing::Point(6, 285);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(38, 17);
			this->checkBox13->TabIndex = 2;
			this->checkBox13->Text = L"13";
			this->checkBox13->UseVisualStyleBackColor = true;
			this->checkBox13->CheckedChanged += gcnew System::EventHandler(this, &Form6::checkBox13_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(6, 117);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(32, 17);
			this->checkBox5->TabIndex = 2;
			this->checkBox5->Text = L"5";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Form6::checkBox5_CheckedChanged);
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Location = System::Drawing::Point(6, 264);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(38, 17);
			this->checkBox12->TabIndex = 2;
			this->checkBox12->Text = L"12";
			this->checkBox12->UseVisualStyleBackColor = true;
			this->checkBox12->CheckedChanged += gcnew System::EventHandler(this, &Form6::checkBox12_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(6, 138);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(32, 17);
			this->checkBox6->TabIndex = 2;
			this->checkBox6->Text = L"6";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &Form6::checkBox6_CheckedChanged);
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Location = System::Drawing::Point(6, 243);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(38, 17);
			this->checkBox11->TabIndex = 2;
			this->checkBox11->Text = L"11";
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &Form6::checkBox11_CheckedChanged);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(6, 159);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(32, 17);
			this->checkBox7->TabIndex = 2;
			this->checkBox7->Text = L"7";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &Form6::checkBox7_CheckedChanged);
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(6, 222);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(38, 17);
			this->checkBox10->TabIndex = 2;
			this->checkBox10->Text = L"10";
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &Form6::checkBox10_CheckedChanged);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(6, 180);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(32, 17);
			this->checkBox8->TabIndex = 2;
			this->checkBox8->Text = L"8";
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &Form6::checkBox8_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(229, 433);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"По точкам";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form6::button2_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(207, 126);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(97, 108);
			this->listBox2->TabIndex = 2;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form6::listBox2_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(215, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Связи в блоке";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(124, 104);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Подблоки";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(101, 126);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(100, 108);
			this->listBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введите имя подблока";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(137, 36);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ок";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form6::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Имя блока";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Блок_А", L"Блок_Б", L"Блок_В", L"Блок_Г", L"Блок_Д" });
			this->comboBox1->Location = System::Drawing::Point(6, 39);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(105, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form6::comboBox1_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(311, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Модуль А";
			// 
			// listBox5
			// 
			this->listBox5->FormatString = L"N6";
			this->listBox5->FormattingEnabled = true;
			this->listBox5->Location = System::Drawing::Point(289, 32);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(105, 134);
			this->listBox5->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(198, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Модуль М";
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(163, 32);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(120, 134);
			this->listBox3->TabIndex = 2;
			// 
			// chart1
			// 
			chartArea1->AxisX->Title = L"M";
			chartArea1->AxisY->Title = L"A";
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(328, 18);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series2->Legend = L"Legend1";
			series2->Name = L"Series2";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(384, 308);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			title1->Name = L"Title1";
			title1->Text = L"График фазовых координат";
			this->chart1->Titles->Add(title1);
			// 
			// chart2
			// 
			chartArea2->AxisX->Title = L"M";
			chartArea2->AxisY->Title = L"Y";
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Enabled = false;
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(730, 18);
			this->chart2->Name = L"chart2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series4->Legend = L"Legend1";
			series4->MarkerColor = System::Drawing::Color::Lime;
			series4->Name = L"Series2";
			this->chart2->Series->Add(series3);
			this->chart2->Series->Add(series4);
			this->chart2->Size = System::Drawing::Size(400, 308);
			this->chart2->TabIndex = 3;
			this->chart2->Text = L"chart2";
			title2->Name = L"Title1";
			title2->Text = L"График прогнозной точки";
			this->chart2->Titles->Add(title2);
			// 
			// chart3
			// 
			chartArea3->AxisX->Title = L"M";
			chartArea3->AxisY->Title = L"A";
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Enabled = false;
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(328, 332);
			this->chart3->Name = L"chart3";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Legend = L"Legend1";
			series5->Name = L"Series1";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series6->Legend = L"Legend1";
			series6->Name = L"Series2";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series7->Legend = L"Legend1";
			series7->Name = L"Series3";
			this->chart3->Series->Add(series5);
			this->chart3->Series->Add(series6);
			this->chart3->Series->Add(series7);
			this->chart3->Size = System::Drawing::Size(384, 301);
			this->chart3->TabIndex = 4;
			this->chart3->Text = L"chart3";
			title3->Name = L"Title1";
			title3->Text = L"График допустимых отклонений от нормы";
			this->chart3->Titles->Add(title3);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->listBox7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->listBox3);
			this->groupBox2->Controls->Add(this->listBox5);
			this->groupBox2->Location = System::Drawing::Point(730, 332);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(400, 184);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Значение модулей М и А";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(32, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(95, 13);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Дата измерений:";
			// 
			// listBox7
			// 
			this->listBox7->Enabled = false;
			this->listBox7->FormattingEnabled = true;
			this->listBox7->Location = System::Drawing::Point(6, 32);
			this->listBox7->Name = L"listBox7";
			this->listBox7->Size = System::Drawing::Size(151, 134);
			this->listBox7->TabIndex = 3;
			this->listBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &Form6::listBox7_SelectedIndexChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1055, 596);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 37);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Закрыть";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form6::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 581);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(111, 52);
			this->button4->TabIndex = 7;
			this->button4->Text = L"График средних осадок";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form6::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(149, 581);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(111, 52);
			this->button5->TabIndex = 8;
			this->button5->Text = L"График неравномерных осадок";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form6::button5_Click);
			// 
			// Form6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1142, 645);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form6";
			this->Text = L"3 декомпозиция";
			this->Load += gcnew System::EventHandler(this, &Form6::Form6_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form6_Load(System::Object^  sender, System::EventArgs^  e) {
		for (int i = 0; i < dataGridView5->RowCount; i++) {
			listBox7->Items->Add(dataGridView5->Rows[i]->Cells[0]->Value);
	}
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		groupBox3->Enabled = false;
		if (comboBox1->SelectedItem == "Блок_А")
		{
			textBox1->Enabled = true;
			textBox1->Text = "А1";
			listBox1->Items->Clear();
			//comboBox2->Enabled = true;
			listBox2->Items->Clear();
		}
		if (comboBox1->SelectedItem == "Блок_Б")
		{
			textBox1->Enabled = true;
			textBox1->Text = "Б1";
			listBox1->Items->Clear();
			//comboBox2->Enabled = true;
			listBox2->Items->Clear();
		}
		if (comboBox1->SelectedItem == "Блок_В")
		{
			textBox1->Enabled = true;
			textBox1->Text = "В1";
			listBox1->Items->Clear();
			//comboBox2->Enabled = true;
			listBox2->Items->Clear();
		}
		if (comboBox1->SelectedItem == "Блок_Г")
		{
			textBox1->Enabled = true;
			textBox1->Text = "Г1";
			listBox1->Items->Clear();
			//comboBox2->Enabled = true;
			listBox2->Items->Clear();
		}
		if (comboBox1->SelectedItem == "Блок_Д")
		{
			textBox1->Enabled = true;
			textBox1->Text = "Д1";
			listBox1->Items->Clear();
			//comboBox2->Enabled = true;
			listBox2->Items->Clear();
		}
	}		
			 int j = 0;
			 int i = 0;
			 int k = 0;
			 int *A = new int[100];
			 int *check = new int[100];
			 int checkA = 0;
			 int checkB = 0;
			 int checkV = 0;
			 int checkG = 0;
			 int checkD = 0;
			 int sch1 = 0;
			 int sch2 = 0;
			 int sch3 = 0;
			 int sch4 = 0;
			 int sch5 = 0;
			 int sch6 = 0;
			 int sch7 = 0;
			 int sch8 = 0;
			 int sch9 = 0;
			 int sch10 = 0;
			 String ^ marki = "";
			 String ^ str1 = "";
			 String ^ str2 = "";
			 String ^ str3 = "";
			 String ^ str4 = "";
			 String ^ str5 = "";
			 String ^ str6 = "";
			 String ^ str7 = "";
			 String ^ str8 = "";
			 String ^ str9 = "";
			 String ^ str10 = "";
			 String ^ str11 = "";
			 String ^ str12 = "";
			 String ^ str13 = "";
			 String ^ str14 = "";
			 String ^ str15 = "";
			 String ^ str21 = "";
			 String ^ str22 = "";
			 String ^ str23 = "";
			 String ^ str24 = "";
			 String ^ str25 = "";
			 String ^ str26 = "";
			 String ^ str27 = "";
			 String ^ str28 = "";
			 String ^ str29 = "";
			 String ^ str30 = "";
			 String ^ str31 = "";
			 String ^ str32 = "";
			 String ^ str33 = "";
			 String ^ str34 = "";
			 String ^ str35 = "";
			 double *M1 = new double[100];                         // расчет модуля М
			 double *V1 = new double[100];
			 double *A1 = new double[100];
			 double *A2 = new double[100];
			 double *M2 = new double[100];
			 double *A3 = new double[100];
			 double *M3 = new double[100];
			 double *A4 = new double[100];
			 double *M4 = new double[100];
			 double *A5 = new double[100];
			 double *M5 = new double[100];
			 double *A6 = new double[100];
			 double *M6 = new double[100];
			 double *A7 = new double[100];
			 double *M7 = new double[100];
			 double *A8 = new double[100];
			 double *M8 = new double[100];
			 double *A9 = new double[100];
			 double *M9 = new double[100];
			 double *M21 = new double[100];                         // расчет модуля М
			 double *A21 = new double[100];
			 double *A22 = new double[100];
			 double *M22 = new double[100];
			 double *A23 = new double[100];
			 double *M23 = new double[100];
			 double *A24 = new double[100];
			 double *M24 = new double[100];
			 double *A25 = new double[100];
			 double *M25 = new double[100];
			 double *A26 = new double[100];
			 double *M26 = new double[100];
			 double *A27 = new double[100];
			 double *M27 = new double[100];
			 double *A28 = new double[100];
			 double *M28 = new double[100];
			 double *A29 = new double[100];
			 double *M29 = new double[100];
			 double *A30 = new double[100];
			 double *M30 = new double[100];
			 double *A31 = new double[100];
			 double *M31 = new double[100];
			 double *A32 = new double[100];
			 double *M32 = new double[100];
			 double *A33 = new double[100];
			 double *M33 = new double[100];
			 double *A34 = new double[100];
			 double *M34 = new double[100];
			 double *A35 = new double[100];
			 double *M35 = new double[100];
			 double *A10 = new double[100];
			 double *M10 = new double[100];
			 double *A11 = new double[100];
			 double *M11 = new double[100];
			 double *A12 = new double[100];
			 double *M12 = new double[100];
			 double *A13 = new double[100];
			 double *M13 = new double[100];
			 double *A14 = new double[100];
			 double *M14 = new double[100];
			 double *A15 = new double[100];
			 double *M15 = new double[100];
			 double *M1plus = new double[100];
			 double *M1minu = new double[100];
			 double *M2plus = new double[100];
			 double *M2minu = new double[100];
			 double *M3plus = new double[100];
			 double *M3minu = new double[100];
			 double *M4plus = new double[100];
			 double *M4minu = new double[100];
			 double *M5plus = new double[100];
			 double *M5minu = new double[100];
			 double *M6plus = new double[100];
			 double *M6minu = new double[100];
			 double *M7plus = new double[100];
			 double *M7minu = new double[100];
			 double *M8plus = new double[100];
			 double *M8minu = new double[100];
			 double *M9plus = new double[100];
			 double *M9minu = new double[100];
			 double *M10plus = new double[100];
			 double *M10minu = new double[100];
			 double *M11plus = new double[100];
			 double *M11minu = new double[100];
			 double *M12plus = new double[100];
			 double *M12minu = new double[100];
			 double *M13plus = new double[100];
			 double *M13minu = new double[100];
			 double *M14plus = new double[100];
			 double *M14minu = new double[100];
			 double *M15plus = new double[100];
			 double *M15minu = new double[100];
			 double *M21plus = new double[100];                         // расчет модуля М
			 double *M21minu = new double[100];
			 double *M22plus = new double[100];
			 double *M22minu = new double[100];
			 double *M23plus = new double[100];
			 double *M23minu = new double[100];
			 double *M24plus = new double[100];
			 double *M24minu = new double[100];
			 double *M25plus = new double[100];
			 double *M25minu = new double[100];
			 double *M26plus = new double[100];
			 double *M26minu = new double[100];
			 double *M27plus = new double[100];
			 double *M27minu = new double[100];
			 double *M28plus = new double[100];
			 double *M28minu = new double[100];
			 double *M29plus = new double[100];
			 double *M29minu = new double[100];
			 double *M30plus = new double[100];
			 double *M30minu = new double[100];
			 double *M31plus = new double[100];
			 double *M31minu = new double[100];
			 double *M32plus = new double[100];
			 double *M32minu = new double[100];
			 double *M33plus = new double[100];
			 double *M33minu = new double[100];
			 double *M34plus = new double[100];
			 double *M34minu = new double[100];
			 double *M35plus = new double[100];
			 double *M35minu = new double[100];
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBox3->Enabled = true;
	if (checkBox1->Checked) {
		
	}

	if (checkBox2->Checked) {
		
	}

	if (checkBox3->Checked) {
		
	}

	if (checkBox4->Checked) {
		
	}

	if (checkBox5->Checked) {
		
	}

	if (checkBox6->Checked) {
		
	}

	if (checkBox7->Checked) {
	
	}

	if (checkBox8->Checked) {
		

	}

	if (checkBox9->Checked) {
		
	}

	if (checkBox10->Checked) {
		
	}

	if (checkBox11->Checked) {
	
	}

	if (checkBox12->Checked) {
	
	}

	if (checkBox13->Checked) {
		
	}

	if (checkBox14->Checked) {
		
	}

	if (checkBox15->Checked) {
		
	}
	if ((comboBox1->SelectedItem == "Блок_А") && (textBox1->Text!="")) {
		
		if (checkA >= 1) {
			for (int y = 0; y < sch1; y++) {
				if (textBox1->Text == listBox1->Items[y]->ToString()) {
					sch2++;
				}
				
			}
		}
		if (sch2 >= 1) {
			MessageBox::Show("Подблок с таким именем существует!!! Введите другое имя");     //исключаем возможность добавления подблока во второй раз
			sch2 = 0;
		} else{
			listBox1->Items->Add(textBox1->Text);
			sch1++;
		}
		checkA++;
		
		
	}
	if ((comboBox1->SelectedItem == "Блок_Б") && (textBox1->Text!="")) {
		if (checkB >= 1) {
			for (int y = 0; y < sch3; y++) {
				if (textBox1->Text == listBox1->Items[y]->ToString()) {
					sch4++;
				}

			}
		}
		if (sch4 >= 1) {
			MessageBox::Show("Подблок с таким именем существует!!! Введите другое имя");
			sch4 = 0;
		}
		else {
			listBox1->Items->Add(textBox1->Text);
			sch3++;
		}
		 checkB++;
		 
	}
	if ((comboBox1->SelectedItem == "Блок_В") && (textBox1->Text!="")) {
		if (checkV >= 1) {
			for (int y = 0; y < sch5; y++) {
				if (textBox1->Text == listBox1->Items[y]->ToString()) {
					sch6++;
				}

			}
		}
		if (sch6 >= 1) {
			MessageBox::Show("Подблок с таким именем существует!!! Введите другое имя");
			sch6 = 0;
		}
		else {
			listBox1->Items->Add(textBox1->Text);
			sch5++;
		}
		checkV++;
		
	}
	if ((comboBox1->SelectedItem == "Блок_Г") && (textBox1->Text!="")) {
		if (checkG >= 1) {
			for (int y = 0; y < sch7; y++) {
				if (textBox1->Text == listBox1->Items[y]->ToString()) {
					sch8++;
				}

			}
		}
		if (sch8 >= 1) {
			MessageBox::Show("Подблок с таким именем существует!!! Введите другое имя");
			sch8 = 0;
		}
		else {
			listBox1->Items->Add(textBox1->Text);
			sch7++;
		}
		 checkG++;
		
	}
	if ((comboBox1->SelectedItem == "Блок_Д") && (textBox1->Text!="")) {
		if (checkD >= 1) {
			for (int y = 0; y < sch9; y++) {
				if (textBox1->Text == listBox1->Items[y]->ToString()) {
					sch10++;
				}

			}
		}
		if (sch10 >= 1) {
			MessageBox::Show("Подблок с таким именем существует!!! Введите другое имя");
			sch10 = 0;
		}
		else {
			listBox1->Items->Add(textBox1->Text);
			sch9++;
		}
		checkD++;
	}
	
}

private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	check[j] = 1;                      //запись в массив выбранных марок
	marki += "1";                      //запись в строку
	i++;
	A[0] = 1;
	//checkBox1->Checked = false;
	checkBox1->Enabled = false;
	j++;
	k++;
	if (i == 2) {
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;
		checkBox10->Checked = false;
		checkBox11->Checked = false;
		checkBox12->Checked = false;
		checkBox13->Checked = false;
		checkBox14->Checked = false;
		checkBox15->Checked = false;
		checkBox1->Enabled = true;
		checkBox2->Enabled = true;
		checkBox3->Enabled = true;
		checkBox4->Enabled = true;
		checkBox5->Enabled = true;
		checkBox6->Enabled = true;
		checkBox7->Enabled = true;
		checkBox8->Enabled = true;
		checkBox9->Enabled = true;
		checkBox10->Enabled = true;
		checkBox11->Enabled = true;
		checkBox12->Enabled = true;
		checkBox13->Enabled = true;
		checkBox14->Enabled = true;
		checkBox15->Enabled = true;
		if (marki->Length == 6) {
			listBox2->Items->Add(marki[0] + "" + marki[1] + "-" + marki[2]);         //вывод в listBox
			str21 = marki[0] + "" + marki[1] + "-" + marki[2];
		}
		else {
			listBox2->Items->Add(marki[0] + "-" + marki[1]);
			str1 = marki[0] + "-" + marki[1];
		}
		//str1 = marki;
		marki = "";
		i = 0;
	
	}
}
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	check[j] = 2;
	marki += "2";
	i++;
	A[1] = 1;
	j++;
	//checkBox2->Checked = false;
	checkBox2->Enabled = false;
	k++;
	if (i == 2) {
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;
		checkBox10->Checked = false;
		checkBox11->Checked = false;
		checkBox12->Checked = false;
		checkBox13->Checked = false;
		checkBox14->Checked = false;
		checkBox15->Checked = false;
		checkBox1->Enabled = true;
		checkBox2->Enabled = true;
		checkBox3->Enabled = true;
		checkBox4->Enabled = true;
		checkBox5->Enabled = true;
		checkBox6->Enabled = true;
		checkBox7->Enabled = true;
		checkBox8->Enabled = true;
		checkBox9->Enabled = true;
		checkBox10->Enabled = true;
		checkBox11->Enabled = true;
		checkBox12->Enabled = true;
		checkBox13->Enabled = true;
		checkBox14->Enabled = true;
		checkBox15->Enabled = true;
		if (marki->Length == 6) {
			listBox2->Items->Add(marki[0] + "" + marki[1] + "-" + marki[2]);
			str22 = marki[0] + "" + marki[1] + "-" + marki[2];
		}
		else {
			listBox2->Items->Add(marki[0] + "-" + marki[1]);
			str2 = marki[0] + "-" + marki[1];
		}
		marki = "";
		i = 0;
	}
}
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	check[j] = 3;
	marki += "3";
	i++;
	A[2] = 1;
	checkBox3->Enabled = false;
	j++;
	k++;
	if (i == 2) {
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;
		checkBox10->Checked = false;
		checkBox11->Checked = false;
		checkBox12->Checked = false;
		checkBox13->Checked = false;
		checkBox14->Checked = false;
		checkBox15->Checked = false;
		checkBox1->Enabled = true;
		checkBox2->Enabled = true;
		checkBox3->Enabled = true;
		checkBox4->Enabled = true;
		checkBox5->Enabled = true;
		checkBox6->Enabled = true;
		checkBox7->Enabled = true;
		checkBox8->Enabled = true;
		checkBox9->Enabled = true;
		checkBox10->Enabled = true;
		checkBox11->Enabled = true;
		checkBox12->Enabled = true;
		checkBox13->Enabled = true;
		checkBox14->Enabled = true;
		checkBox15->Enabled = true;
		if (marki->Length == 6) {
			listBox2->Items->Add(marki[0] + "" + marki[1] + "-" + marki[2]);
			str23 = marki[0] + "" + marki[1] + "-" + marki[2];
		}
		else {
			listBox2->Items->Add(marki[0] + "-" + marki[1]);
			str3 = marki[0] + "-" + marki[1];
		}
	//	str3 = marki;
		marki = "";
		i = 0;
	}
}
private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	check[j] = 4;
	marki += "4";
	i++;
	A[3] = 1;
	//checkBox1->Checked = false;
	checkBox4->Enabled = false;
	j++;
	k++;
	if (i == 2) {
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;
		checkBox10->Checked = false;
		checkBox11->Checked = false;
		checkBox12->Checked = false;
		checkBox13->Checked = false;
		checkBox14->Checked = false;
		checkBox15->Checked = false;
		checkBox1->Enabled = true;
		checkBox2->Enabled = true;
		checkBox3->Enabled = true;
		checkBox4->Enabled = true;
		checkBox5->Enabled = true;
		checkBox6->Enabled = true;
		checkBox7->Enabled = true;
		checkBox8->Enabled = true;
		checkBox9->Enabled = true;
		checkBox10->Enabled = true;
		checkBox11->Enabled = true;
		checkBox12->Enabled = true;
		checkBox13->Enabled = true;
		checkBox14->Enabled = true;
		checkBox15->Enabled = true;
		if (marki->Length == 6) {
			listBox2->Items->Add(marki[0] + "" + marki[1] + "-" + marki[2]);
			str24 = marki[0] + "" + marki[1] + "-" + marki[2];
		}
		else {
			listBox2->Items->Add(marki[0] + "-" + marki[1]);
			str4 = marki[0] + "-" + marki[1];
		}
		//str4 = marki;
		marki = "";
		i = 0;
	}
}
private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	check[j] = 5;
	marki += "5";
	i++;
	A[4] = 1;
	//checkBox1->Checked = false;
	checkBox5->Enabled = false;
	j++;
	k++;
	if (i == 2) {
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;
		checkBox10->Checked = false;
		checkBox11->Checked = false;
		checkBox12->Checked = false;
		checkBox13->Checked = false;
		checkBox14->Checked = false;
		checkBox15->Checked = false;
		checkBox1->Enabled = true;
		checkBox2->Enabled = true;
		checkBox3->Enabled = true;
		checkBox4->Enabled = true;
		checkBox5->Enabled = true;
		checkBox6->Enabled = true;
		checkBox7->Enabled = true;
		checkBox8->Enabled = true;
		checkBox9->Enabled = true;
		checkBox10->Enabled = true;
		checkBox11->Enabled = true;
		checkBox12->Enabled = true;
		checkBox13->Enabled = true;
		checkBox14->Enabled = true;
		checkBox15->Enabled = true;
		if (marki->Length == 6) {
			listBox2->Items->Add(marki[0] + "" + marki[1] + "-" + marki[2]);
			str25 = marki[0] + "" + marki[1] + "-" + marki[2];
		}
		else {
			listBox2->Items->Add(marki[0] + "-" + marki[1]);
			str5 = marki[0] + "-" + marki[1];
		}
		//str5 = marki;
		marki = "";
		i = 0;
	}
}
private: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	check[j] = 6;
	marki += "6";
	i++;
	A[5] = 1;
	//checkBox1->Checked = false;
	checkBox6->Enabled = false;
	j++;
	k++;
	if (i == 2) {
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;
		checkBox10->Checked = false;
		checkBox11->Checked = false;
		checkBox12->Checked = false;
		checkBox13->Checked = false;
		checkBox14->Checked = false;
		checkBox15->Checked = false;
		checkBox1->Enabled = true;
		checkBox2->Enabled = true;
		checkBox3->Enabled = true;
		checkBox4->Enabled = true;
		checkBox5->Enabled = true;
		checkBox6->Enabled = true;
		checkBox7->Enabled = true;
		checkBox8->Enabled = true;
		checkBox9->Enabled = true;
		checkBox10->Enabled = true;
		checkBox11->Enabled = true;
		checkBox12->Enabled = true;
		checkBox13->Enabled = true;
		checkBox14->Enabled = true;
		checkBox15->Enabled = true;
		if (marki->Length == 6) {
			listBox2->Items->Add(marki[0] + "" + marki[1] + "-" + marki[2]);
			str26 = marki[0] + "" + marki[1] + "-" + marki[2];
		}
		else {
			listBox2->Items->Add(marki[0] + "-" + marki[1]);
			str6 = marki[0] + "-" + marki[1];
		}
		//str6 = marki;
		marki = "";
		i = 0;
	}
}
private: System::Void checkBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	check[j] = 7;
	marki += "7";
	i++;
	A[6] = 1;
	//checkBox1->Checked = false;
	checkBox7->Enabled = false;
	j++;
	k++;
	if (i == 2) {
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;
		checkBox10->Checked = false;
		checkBox11->Checked = false;
		checkBox12->Checked = false;
		checkBox13->Checked = false;
		checkBox14->Checked = false;
		checkBox15->Checked = false;
		checkBox1->Enabled = true;
		checkBox2->Enabled = true;
		checkBox3->Enabled = true;
		checkBox4->Enabled = true;
		checkBox5->Enabled = true;
		checkBox6->Enabled = true;
		checkBox7->Enabled = true;
		checkBox8->Enabled = true;
		checkBox9->Enabled = true;
		checkBox10->Enabled = true;
		checkBox11->Enabled = true;
		checkBox12->Enabled = true;
		checkBox13->Enabled = true;
		checkBox14->Enabled = true;
		checkBox15->Enabled = true;
		if (marki->Length == 6) {
			listBox2->Items->Add(marki[0] + "" + marki[1] + "-" + marki[2]);
			str27 = marki[0] + "" + marki[1] + "-" + marki[2];
		}
		else {
			listBox2->Items->Add(marki[0] + "-" + marki[1]);
			str7 = marki[0] + "-" + marki[1];
		}
	//	str7 = marki;
		marki = "";
		i = 0;
		
	}
}
private: System::Void checkBox8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	check[j] = 8;
	marki += "8";
	i++;
	A[7] = 1;
	checkBox8->Enabled = false;
	j++;
	k++;
	if (i == 2) {
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;
		checkBox10->Checked = false;
		checkBox11->Checked = false;
		checkBox12->Checked = false;
		checkBox13->Checked = false;
		checkBox14->Checked = false;
		checkBox15->Checked = false;
		checkBox1->Enabled = true;
		checkBox2->Enabled = true;
		checkBox3->Enabled = true;
		checkBox4->Enabled = true;
		checkBox5->Enabled = true;
		checkBox6->Enabled = true;
		checkBox7->Enabled = true;
		checkBox8->Enabled = true;
		checkBox9->Enabled = true;
		checkBox10->Enabled = true;
		checkBox11->Enabled = true;
		checkBox12->Enabled = true;
		checkBox13->Enabled = true;
		checkBox14->Enabled = true;
		checkBox15->Enabled = true;
		if (marki->Length == 6) {
			listBox2->Items->Add(marki[0] + "" + marki[1] + "-" + marki[2]);
			str28 = marki[0] + "" + marki[1] + "-" + marki[2];
		}
		else {
			listBox2->Items->Add(marki[0] + "-" + marki[1]);
			str8 = marki[0] + "-" + marki[1];
		}
		//str8 = marki;
		marki = "";
		i = 0;
	}
}
private: System::Void checkBox9_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	check[j] = 9;
	marki += "9";
	i++;
	A[8] = 1;
	//checkBox1->Checked = false;
	checkBox9->Enabled = false;
	j++;
	k++;
	if (i == 2) {
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;
		checkBox10->Checked = false;
		checkBox11->Checked = false;
		checkBox12->Checked = false;
		checkBox13->Checked = false;
		checkBox14->Checked = false;
		checkBox15->Checked = false;
		checkBox1->Enabled = true;
		checkBox2->Enabled = true;
		checkBox3->Enabled = true;
		checkBox4->Enabled = true;
		checkBox5->Enabled = true;
		checkBox6->Enabled = true;
		checkBox7->Enabled = true;
		checkBox8->Enabled = true;
		checkBox9->Enabled = true;
		checkBox10->Enabled = true;
		checkBox11->Enabled = true;
		checkBox12->Enabled = true;
		checkBox13->Enabled = true;
		checkBox14->Enabled = true;
		checkBox15->Enabled = true;
		//listBox3->Items->Add(marki->Length);
		if (marki->Length == 6) {
			listBox2->Items->Add(marki[0] + "" + marki[1] + "-" + marki[2]);
			str29 = marki[0] + "" + marki[1] + "-" + marki[2];
		}
		else {
			listBox2->Items->Add(marki[0] + "-" + marki[1]);
			str9 = marki[0] + "-" + marki[1];
		}
		//str9 = marki;
		marki = "";
		i = 0;
	}
}
private: System::Void checkBox10_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	check[j] = 10;
	marki += "10";
	i++;
	A[9] = 1;
	//checkBox1->Checked = false;
	checkBox10->Enabled = false;
	j++;
	k++;
	if (i == 2) {
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;
		checkBox10->Checked = false;
		checkBox11->Checked = false;
		checkBox12->Checked = false;
		checkBox13->Checked = false;
		checkBox14->Checked = false;
		checkBox15->Checked = false;
		checkBox1->Enabled = true;
		checkBox2->Enabled = true;
		checkBox3->Enabled = true;
		checkBox4->Enabled = true;
		checkBox5->Enabled = true;
		checkBox6->Enabled = true;
		checkBox7->Enabled = true;
		checkBox8->Enabled = true;
		checkBox9->Enabled = true;
		checkBox10->Enabled = true;
		checkBox11->Enabled = true;
		checkBox12->Enabled = true;
		checkBox13->Enabled = true;
		checkBox14->Enabled = true;
		checkBox15->Enabled = true;
		if (marki->Length == 8) {
			listBox2->Items->Add(marki[0] + "" + marki[1] + "-" + marki[2] + marki[3]);
			str30 = marki[0] + "" + marki[1] + "-" + marki[2] + marki[3];
		}
		else{
			listBox2->Items->Add(marki[0] + "-" + marki[1] + marki[2]);
			str10 = marki[0] + "-" + marki[1] + marki[2];
			
		}
		//str10 = marki;
		marki = "";
		i = 0;
	}
}
private: System::Void checkBox11_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	check[j] = 11;
	marki += "11";
	i++;
	A[10] = 1;
	//checkBox1->Checked = false;
	//listBox3->Items->Add(i);
	//listBox3->Items->Add(marki->Length);
	checkBox11->Enabled = false;
	j++;
	k++;
	if (i == 2) {
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;
		checkBox10->Checked = false;
		checkBox11->Checked = false;
		checkBox12->Checked = false;
		checkBox13->Checked = false;
		checkBox14->Checked = false;
		checkBox15->Checked = false;
		checkBox1->Enabled = true;
		checkBox2->Enabled = true;
		checkBox3->Enabled = true;
		checkBox4->Enabled = true;
		checkBox5->Enabled = true;
		checkBox6->Enabled = true;
		checkBox7->Enabled = true;
		checkBox8->Enabled = true;
		checkBox9->Enabled = true;
		checkBox10->Enabled = true;
		checkBox11->Enabled = true;
		checkBox12->Enabled = true;
		checkBox13->Enabled = true;
		checkBox14->Enabled = true;
		checkBox15->Enabled = true;
		
		if (marki->Length == 8) {
			listBox2->Items->Add(marki[0] + "" + marki[1] + "-" + marki[2] + marki[3]);
			str31 = marki[0] + "" + marki[1] + "-" + marki[2] + marki[3];
		}
		else {
			listBox2->Items->Add(marki[0] + "-" + marki[1] + marki[2]);
			str11 = marki[0] + "-" + marki[1] + marki[2];
		}
		marki = "";
		i = 0;
	}
}
private: System::Void checkBox12_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	check[j] = 12;
	marki += "12";
	i++;
	A[11] = 1;
	//checkBox1->Checked = false;
	
	//checkBox12->Checked = false;
	checkBox12->Enabled = false;
	j++;
	k++;
	if (i == 2) {
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;
		checkBox10->Checked = false;
		checkBox11->Checked = false;
		checkBox12->Checked = false;
		checkBox13->Checked = false;
		checkBox14->Checked = false;
		checkBox15->Checked = false;
		checkBox1->Enabled = true;
		checkBox2->Enabled = true;
		checkBox3->Enabled = true;
		checkBox4->Enabled = true;
		checkBox5->Enabled = true;
		checkBox6->Enabled = true;
		checkBox7->Enabled = true;
		checkBox8->Enabled = true;
		checkBox9->Enabled = true;
		checkBox10->Enabled = true;
		checkBox11->Enabled = true;
		checkBox12->Enabled = true;
		checkBox13->Enabled = true;
		checkBox14->Enabled = true;
		checkBox15->Enabled = true;
		if (marki->Length == 8) {
			listBox2->Items->Add(marki[0] + "" + marki[1] + "-" + marki[2] + marki[3]);
			str32 = marki[0] + "" + marki[1] + "-" + marki[2] + marki[3];
		}
		else {
			listBox2->Items->Add(marki[0] + "-" + marki[1] + marki[2]);
			str12 = marki[0] + "-" + marki[1] + marki[2];
		}
	//	str12 = marki;
		marki = "";
		i = 0;
	}
}
private: System::Void checkBox13_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	check[j] = 13;
	marki += "13";
	i++;
	A[12] = 1;
	//checkBox1->Checked = false;
	checkBox13->Enabled = false;
	j++;
	k++;
	if (i == 2) {
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;
		checkBox10->Checked = false;
		checkBox11->Checked = false;
		checkBox12->Checked = false;
		checkBox13->Checked = false;
		checkBox14->Checked = false;
		checkBox15->Checked = false;
		checkBox1->Enabled = true;
		checkBox2->Enabled = true;
		checkBox3->Enabled = true;
		checkBox4->Enabled = true;
		checkBox5->Enabled = true;
		checkBox6->Enabled = true;
		checkBox7->Enabled = true;
		checkBox8->Enabled = true;
		checkBox9->Enabled = true;
		checkBox10->Enabled = true;
		checkBox11->Enabled = true;
		checkBox12->Enabled = true;
		checkBox13->Enabled = true;
		checkBox14->Enabled = true;
		checkBox15->Enabled = true;
		if (marki->Length == 8) {
			listBox2->Items->Add(marki[0] + "" + marki[1] + "-" + marki[2] + marki[3]);
			str33 = marki[0] + "" + marki[1] + "-" + marki[2] + marki[3];
		}
		else {
			listBox2->Items->Add(marki[0] + "-" + marki[1] + marki[2]);
			str13 = marki[0] + "-" + marki[1] + marki[2];
		}
		//str13 = marki;
		marki = "";
		i = 0;
	}
}
private: System::Void checkBox14_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	check[j] = 14;
	marki += "14";
	i++;
	A[13] = 1;
	//checkBox1->Checked = false;
	checkBox14->Enabled = false;
	j++;
	k++;
	if (i == 2) {
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;
		checkBox10->Checked = false;
		checkBox11->Checked = false;
		checkBox12->Checked = false;
		checkBox13->Checked = false;
		checkBox14->Checked = false;
		checkBox15->Checked = false;
		checkBox1->Enabled = true;
		checkBox2->Enabled = true;
		checkBox3->Enabled = true;
		checkBox4->Enabled = true;
		checkBox5->Enabled = true;
		checkBox6->Enabled = true;
		checkBox7->Enabled = true;
		checkBox8->Enabled = true;
		checkBox9->Enabled = true;
		checkBox10->Enabled = true;
		checkBox11->Enabled = true;
		checkBox12->Enabled = true;
		checkBox13->Enabled = true;
		checkBox14->Enabled = true;
		checkBox15->Enabled = true;
		if (marki->Length == 8) {
			listBox2->Items->Add(marki[0] + "" + marki[1] + "-" + marki[2] + marki[3]);
			str34 = marki[0] + "" + marki[1] + "-" + marki[2] + marki[3];
		}
		else {
			listBox2->Items->Add(marki[0] + "-" + marki[1] + marki[2]);
			str14 = marki[0] + "-" + marki[1] + marki[2];
		}
		//str14 = marki;
		marki = "";
		i = 0;
	}
}
private: System::Void checkBox15_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	check[j] = 15;
	marki += "15";
	i++;
	A[14] = 1;
	//checkBox1->Checked = false;
	checkBox15->Enabled = false;
	j++;
	k++;
	if (i == 2) {
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		checkBox7->Checked = false;
		checkBox8->Checked = false;
		checkBox9->Checked = false;
		checkBox10->Checked = false;
		checkBox11->Checked = false;
		checkBox12->Checked = false;
		checkBox13->Checked = false;
		checkBox14->Checked = false;
		checkBox15->Checked = false;
		checkBox1->Enabled = true;
		checkBox2->Enabled = true;
		checkBox3->Enabled = true;
		checkBox4->Enabled = true;
		checkBox5->Enabled = true;
		checkBox6->Enabled = true;
		checkBox7->Enabled = true;
		checkBox8->Enabled = true;
		checkBox9->Enabled = true;
		checkBox10->Enabled = true;
		checkBox11->Enabled = true;
		checkBox12->Enabled = true;
		checkBox13->Enabled = true;
		checkBox14->Enabled = true;
		checkBox15->Enabled = true;
		if (marki->Length == 8) {
			listBox2->Items->Add(marki[0] + "" + marki[1] + "-" + marki[2] + marki[3]);
			str35 = marki[0] + "" + marki[1] + "-" + marki[2] + marki[3];
		}
		else {
			listBox2->Items->Add(marki[0] + "-" + marki[1] + marki[2]);
			str15 = marki[0] + "-" + marki[1] + marki[2];
		}
		//str15 = marki;
		marki = "";
		i = 0;
	}
}
public: double func(double M1, double mpr)
{
return M1 * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * mpr;
}
		 double *Mpr = new double[100];
		 double *alphaPr = new double[100];
		 double Mpr1 = 0;
		 double Mpr2 = 0;
		 double Mpr3 = 0;
		 double Mpr4 = 0;
		 double Mpr5 = 0;
		 double Mpr6 = 0;
		 double Mpr7 = 0;
		 double Mpr8 = 0;
		 double Mpr9 = 0;
		 double Mpr10 = 0;
		 double Mpr11 = 0;
		 double Mpr12 = 0;
		 double Mpr13 = 0;
		 double Mpr14 = 0;
		 double Mpr15 = 0;
		 double Mpr16 = 0;
		 double Mpr17 = 0;
		 double Mpr18 = 0;
		 double Mpr19 = 0;
		 double Mpr20 = 0;
		 double Mpr21 = 0;
		 double Mpr22 = 0;
		 double Mpr23 = 0;
		 double Mpr24 = 0;
		 double Mpr25 = 0;
		 double Mpr26 = 0;
		 double Mpr27 = 0;
		 double Mpr28 = 0;
		 double Mpr29 = 0;
		 double Mpr30 = 0;
		 //int s3 = 0;
		 double alphaPr1 = 0;
		 double alphaPr2 = 0;
		 double alphaPr3 = 0;
		 double alphaPr4 = 0;
		 double alphaPr5 = 0;
		 double alphaPr6 = 0;
		 double alphaPr7 = 0;
		 double alphaPr8 = 0;
		 double alphaPr9 = 0;
		 double alphaPr10 = 0;
		 double alphaPr11 = 0;
		 double alphaPr12 = 0;
		 double alphaPr13 = 0;
		 double alphaPr14 = 0;
		 double alphaPr15 = 0;
		 double alphaPr16 = 0;
		 double alphaPr17 = 0;
		 double alphaPr18 = 0;
		 double alphaPr19 = 0;
		 double alphaPr20 = 0;
		 double alphaPr21 = 0;
		 double alphaPr22 = 0;
		 double alphaPr23 = 0;
		 double alphaPr24 = 0;
		 double alphaPr25 = 0;
		 double alphaPr26 = 0;
		 double alphaPr27 = 0;
		 double alphaPr28 = 0;
		 double alphaPr29 = 0;
		 double alphaPr30 = 0;
private: System::Void listBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) { //вычисление модуля М и А выбранных связей
	listBox7->Enabled = true;
	String ^ curItem = listBox2->SelectedItem->ToString();
	if (curItem == str1) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();
		int s1;
		int s2;
		if (str1->Length == 3) {
			s1 = Convert::ToInt32(str1[0]) - 48;
			s2 = Convert::ToInt32(str1[2]) - 48;
		}
		
			sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
		
		for (int r = 0; r < dataGridView5->RowCount; r++) {
			double S = 0;
			double Sminu = 0;
			double Splus = 0;
			double V = 0;
			for (int col = 0; col < 2; col++) {
				if (col == 0) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
				}
				if (col == 1) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
				}
			}
			M1plus[r] = sqrt(Splus);
			M1minu[r] = sqrt(Sminu);
			M1[r] = sqrt(S);
			A1[r] = acos(V / (M1[0] * M1[r]));
			A1[0] = 0;
			sumPr = sumPr + M1[r];
			sumPrAlpha = sumPrAlpha + A1[r];
			chart1->Series[0]->Points->AddXY(M1[r], A1[r]);
			chart1->Series[1]->Points->AddXY(M1[r], A1[r]);
			chart2->Series[0]->Points->AddXY(M1[r], A1[r]);
			chart3->Series[0]->Points->AddXY(M1minu[r], A1[r]);
			chart3->Series[1]->Points->AddXY(M1[r], A1[r]);
			chart3->Series[2]->Points->AddXY(M1plus[r], A1[r]);
			listBox3->Items->Add(M1[r]);
			listBox5->Items->Add(A1[r]);
				sw->WriteLine(Convert::ToString(M1[r]) + " " + Convert::ToString(A1[r]));
			
			
		}
		
		sredn = sumPr / dataGridView5->RowCount;
		srednAlpha = sumPrAlpha / dataGridView5->RowCount;
		Mpr[0] = M1[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
		alphaPr[0] = A1[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
		for (int i = 1; i < dataGridView5->RowCount; i++) {
			Mpr[i] = func(M1[i], Mpr[i - 1]);
			alphaPr[i] = func(A1[i], alphaPr[i - 1]);
		}
		Mpr1 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
		alphaPr1 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
		chart2->Series[1]->Points->AddXY(Mpr1, alphaPr1);
		chart2->Series[0]->Points->AddXY(Mpr1, alphaPr1);
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_"+curItem+"_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		//str1 = "";
		//str21 = "";
	}
	if (curItem == str21) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		double srednAlpha = 0;
		listBox3->Items->Clear();
		listBox5->Items->Clear();
		
			int s1 = (Convert::ToInt32(str21[0]) - 48) * 10 + Convert::ToInt32(str21[1]) - 48;
			int s2 = Convert::ToInt32(str21[3]) - 48;
			sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
		for (int r = 0; r < dataGridView5->RowCount; r++) {
			double S = 0;
			double Sminu = 0;
			double Splus = 0;
			double V = 0;
			for (int col = 0; col < 2; col++) {
				if (col == 0) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
				}
				if (col == 1) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
				}
			}
			M21plus[r] = sqrt(Splus);
			M21minu[r] = sqrt(Sminu);
			M21[r] = sqrt(S);
			A21[r] = acos(V / (M21[0] * M21[r]));
			A21[0] = 0;
			sumPr = sumPr + M21[r];
			sumPrAlpha = sumPrAlpha + A21[r];
			chart1->Series[0]->Points->AddXY(M21[r], A21[r]);
			chart1->Series[1]->Points->AddXY(M21[r], A21[r]);
			chart2->Series[0]->Points->AddXY(M21[r], A21[r]);
			chart3->Series[0]->Points->AddXY(M21minu[r], A21[r]);
			chart3->Series[1]->Points->AddXY(M21[r], A21[r]);
			chart3->Series[2]->Points->AddXY(M21plus[r], A21[r]);
			listBox3->Items->Add(M21[r]);
			listBox5->Items->Add(A21[r]);
			sw->WriteLine(Convert::ToString(M21[r]) + " " + Convert::ToString(A21[r]));
		}
		sredn = sumPr / dataGridView5->RowCount;
		srednAlpha = sumPrAlpha / dataGridView5->RowCount;
		Mpr[0] = M21[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
		alphaPr[0] = A21[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
		for (int i = 1; i < dataGridView5->RowCount; i++) {
			Mpr[i] = func(M21[i], Mpr[i - 1]);
			alphaPr[i] = func(A21[i], alphaPr[i - 1]);
		}
		Mpr2 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
		alphaPr2 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
		chart2->Series[0]->Points->AddXY(Mpr2, alphaPr2);
		chart2->Series[1]->Points->AddXY(Mpr2, alphaPr2);
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		//str1 = "";
		//str21 = "";
	
	}
	if (curItem == str2) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();
		if (str2->Length == 3) {
			int s1 = Convert::ToInt32(str2[0]) - 48;
			int s2 = Convert::ToInt32(str2[2]) - 48;
			sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
			for (int r = 0; r < dataGridView5->RowCount; r++) {
				double S = 0;
				double Sminu = 0;
				double Splus = 0;
				double V = 0;
				for (int col = 0; col < 2; col++) {
					if (col == 0) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					}
					if (col == 1) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					}
				}
				M2plus[r] = sqrt(Splus);
				M2minu[r] = sqrt(Sminu);
				M2[r] = sqrt(S);
				A2[r] = acos(V / (M2[0] * M2[r]));
				A2[0] = 0;
				sumPr = sumPr + M2[r];
				sumPrAlpha = sumPrAlpha + A2[r];
				chart1->Series[0]->Points->AddXY(M2[r], A2[r]);
				chart1->Series[1]->Points->AddXY(M2[r], A2[r]);
				chart2->Series[0]->Points->AddXY(M2[r], A2[r]);
				chart3->Series[0]->Points->AddXY(M2minu[r], A2[r]);
				chart3->Series[1]->Points->AddXY(M2[r], A2[r]);
				chart3->Series[2]->Points->AddXY(M2plus[r], A2[r]);
				listBox3->Items->Add(M2[r]);
				listBox5->Items->Add(A2[r]);
				sw->WriteLine(Convert::ToString(M2[r]) + " " + Convert::ToString(A2[r]));
			}
			sredn = sumPr / dataGridView5->RowCount;
			srednAlpha = sumPrAlpha / dataGridView5->RowCount;
			Mpr[0] = M2[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
			alphaPr[0] = A2[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
			for (int i = 1; i < dataGridView5->RowCount; i++) {
				Mpr[i] = func(M2[i], Mpr[i - 1]);
				alphaPr[i] = func(A2[i], alphaPr[i - 1]);
			}
			Mpr3 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
			alphaPr3 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
			chart2->Series[0]->Points->AddXY(Mpr3, alphaPr3);
			chart2->Series[1]->Points->AddXY(Mpr3, alphaPr3);
		}
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
	}
	if (curItem == str22) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		double srednAlpha = 0;
		listBox3->Items->Clear();
		listBox5->Items->Clear();

		int s1 = (Convert::ToInt32(str22[0]) - 48) * 10 + Convert::ToInt32(str22[1]) - 48;
		int s2 = Convert::ToInt32(str22[3]) - 48;
		sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
		for (int r = 0; r < dataGridView5->RowCount; r++) {
			double S = 0;
			double Sminu = 0;
			double Splus = 0;
			double V = 0;
			for (int col = 0; col < 2; col++) {
				if (col == 0) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
				}
				if (col == 1) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
				}
			}
			M22plus[r] = sqrt(Splus);
			M22minu[r] = sqrt(Sminu);
			M22[r] = sqrt(S);
			A22[r] = acos(V / (M22[0] * M22[r]));
			A22[0] = 0;
			sumPr = sumPr + M22[r];
			sumPrAlpha = sumPrAlpha + A22[r];
			chart1->Series[0]->Points->AddXY(M22[r], A22[r]);
			chart1->Series[1]->Points->AddXY(M22[r], A22[r]);
			chart2->Series[0]->Points->AddXY(M22[r], A22[r]);
			chart3->Series[0]->Points->AddXY(M22minu[r], A22[r]);
			chart3->Series[1]->Points->AddXY(M22[r], A22[r]);
			chart3->Series[2]->Points->AddXY(M22plus[r], A22[r]);
			listBox3->Items->Add(M22[r]);
			listBox5->Items->Add(A22[r]);
			sw->WriteLine(Convert::ToString(M22[r]) + " " + Convert::ToString(A22[r]));
		}
		sredn = sumPr / dataGridView5->RowCount;
		srednAlpha = sumPrAlpha / dataGridView5->RowCount;
		Mpr[0] = M22[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
		alphaPr[0] = A22[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
		for (int i = 1; i < dataGridView5->RowCount; i++) {
			Mpr[i] = func(M22[i], Mpr[i - 1]);
			alphaPr[i] = func(A22[i], alphaPr[i - 1]);
		}
		Mpr4 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
		alphaPr4 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
		chart2->Series[0]->Points->AddXY(Mpr4, alphaPr4);
		chart2->Series[1]->Points->AddXY(Mpr4, alphaPr4);
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);

	}
	if (curItem == str3) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();
		if (str3->Length == 3) {
			int s1 = Convert::ToInt32(str3[0]) - 48;
			int s2 = Convert::ToInt32(str3[2]) - 48;
			sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
			for (int r = 0; r < dataGridView5->RowCount; r++) {
				double S = 0;
				double Sminu = 0;
				double Splus = 0;
				double V = 0;
				for (int col = 0; col < 2; col++) {
					if (col == 0) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					}
					if (col == 1) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					}
				}
				M3plus[r] = sqrt(Splus);
				M3minu[r] = sqrt(Sminu);
				M3[r] = sqrt(S);
				A3[r] = acos(V / (M3[0] * M3[r]));
				A3[0] = 0;
				sumPr = sumPr + M3[r];
				sumPrAlpha = sumPrAlpha + A3[r];
				chart1->Series[0]->Points->AddXY(M3[r], A3[r]);
				chart1->Series[1]->Points->AddXY(M3[r], A3[r]);
				chart2->Series[0]->Points->AddXY(M3[r], A3[r]);
				chart3->Series[0]->Points->AddXY(M3minu[r], A3[r]);
				chart3->Series[1]->Points->AddXY(M3[r], A3[r]);
				chart3->Series[2]->Points->AddXY(M3plus[r], A3[r]);
				listBox3->Items->Add(M3[r]);
				listBox5->Items->Add(A3[r]);
				sw->WriteLine(Convert::ToString(M3[r]) + " " + Convert::ToString(A3[r]));
			}
			sredn = sumPr / dataGridView5->RowCount;
			srednAlpha = sumPrAlpha / dataGridView5->RowCount;
			Mpr[0] = M3[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
			alphaPr[0] = A3[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
			for (int i = 1; i < dataGridView5->RowCount; i++) {
				Mpr[i] = func(M3[i], Mpr[i - 1]);
				alphaPr[i] = func(A3[i], alphaPr[i - 1]);
			}
			Mpr5 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
			alphaPr5 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
			chart2->Series[0]->Points->AddXY(Mpr5, alphaPr5);
			chart2->Series[1]->Points->AddXY(Mpr5, alphaPr5);
		}
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
	}
	if (curItem == str23) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		double srednAlpha = 0;
		listBox3->Items->Clear();
		listBox5->Items->Clear();

		int s1 = (Convert::ToInt32(str23[0]) - 48) * 10 + Convert::ToInt32(str23[1]) - 48;
		int s2 = Convert::ToInt32(str23[3]) - 48;
		sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
		for (int r = 0; r < dataGridView5->RowCount; r++) {
			double S = 0;
			double Sminu = 0;
			double Splus = 0;
			double V = 0;
			for (int col = 0; col < 2; col++) {
				if (col == 0) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
				}
				if (col == 1) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
				}
			}
			M23plus[r] = sqrt(Splus);
			M23minu[r] = sqrt(Sminu);
			M23[r] = sqrt(S);
			A23[r] = acos(V / (M23[0] * M23[r]));
			A23[0] = 0;
			sumPr = sumPr + M23[r];
			sumPrAlpha = sumPrAlpha + A23[r];
			chart1->Series[0]->Points->AddXY(M23[r], A23[r]);
			chart1->Series[1]->Points->AddXY(M23[r], A23[r]);
			chart2->Series[0]->Points->AddXY(M23[r], A23[r]);
			chart3->Series[0]->Points->AddXY(M23minu[r], A23[r]);
			chart3->Series[1]->Points->AddXY(M23[r], A23[r]);
			chart3->Series[2]->Points->AddXY(M23plus[r], A23[r]);
			listBox3->Items->Add(M23[r]);
			listBox5->Items->Add(A23[r]);
			sw->WriteLine(Convert::ToString(M23[r]) + " " + Convert::ToString(A23[r]));
		}
		sredn = sumPr / dataGridView5->RowCount;
		srednAlpha = sumPrAlpha / dataGridView5->RowCount;
		Mpr[0] = M23[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
		alphaPr[0] = A23[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
		for (int i = 1; i < dataGridView5->RowCount; i++) {
			Mpr[i] = func(M23[i], Mpr[i - 1]);
			alphaPr[i] = func(A23[i], alphaPr[i - 1]);
		}
		Mpr6 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
		alphaPr6 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
		chart2->Series[0]->Points->AddXY(Mpr6, alphaPr6);
		chart2->Series[1]->Points->AddXY(Mpr6, alphaPr6);
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		//str1 = "";
		//str21 = "";

	}
	if (curItem == str4) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();
		if (str4->Length == 3) {
			int s1 = Convert::ToInt32(str4[0]) - 48;
			int s2 = Convert::ToInt32(str4[2]) - 48;
			sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
			for (int r = 0; r < dataGridView5->RowCount; r++) {
				double S = 0;
				double Sminu = 0;
				double Splus = 0;
				double V = 0;
				for (int col = 0; col < 2; col++) {
					if (col == 0) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					}
					if (col == 1) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					}
				}
				M4plus[r] = sqrt(Splus);
				M4minu[r] = sqrt(Sminu);
				M4[r] = sqrt(S);
				A4[r] = acos(V / (M4[0] * M4[r]));
				A4[0] = 0;
				sumPr = sumPr + M4[r];
				sumPrAlpha = sumPrAlpha + A4[r];
				chart1->Series[0]->Points->AddXY(M4[r], A4[r]);
				chart1->Series[1]->Points->AddXY(M4[r], A4[r]);
				chart2->Series[0]->Points->AddXY(M4[r], A4[r]);
				chart3->Series[0]->Points->AddXY(M4minu[r], A4[r]);
				chart3->Series[1]->Points->AddXY(M4[r], A4[r]);
				chart3->Series[2]->Points->AddXY(M4plus[r], A4[r]);
				listBox3->Items->Add(M4[r]);
				listBox5->Items->Add(A4[r]);
				sw->WriteLine(Convert::ToString(M4[r]) + " " + Convert::ToString(A4[r]));
			}
			sredn = sumPr / dataGridView5->RowCount;
			srednAlpha = sumPrAlpha / dataGridView5->RowCount;
			Mpr[0] = M4[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
			alphaPr[0] = A4[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
			for (int i = 1; i < dataGridView5->RowCount; i++) {
				Mpr[i] = func(M4[i], Mpr[i - 1]);
				alphaPr[i] = func(A4[i], alphaPr[i - 1]);
			}
			Mpr7 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
			alphaPr7 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
			chart2->Series[0]->Points->AddXY(Mpr7, alphaPr7);
			chart2->Series[1]->Points->AddXY(Mpr7, alphaPr7);
		}
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
	}
	if (curItem == str24) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();

		int s1 = (Convert::ToInt32(str24[0]) - 48) * 10 + Convert::ToInt32(str24[1]) - 48;
		int s2 = Convert::ToInt32(str24[3]) - 48;
		sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
		for (int r = 0; r < dataGridView5->RowCount; r++) {
			double S = 0;
			double Sminu = 0;
			double Splus = 0;
			double V = 0;
			for (int col = 0; col < 2; col++) {
				if (col == 0) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
				}
				if (col == 1) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
				}
			}
			M24plus[r] = sqrt(Splus);
			M24minu[r] = sqrt(Sminu);
			M24[r] = sqrt(S);
			A24[r] = acos(V / (M24[0] * M24[r]));
			A24[0] = 0;
			sumPr = sumPr + M24[r];
			sumPrAlpha = sumPrAlpha + A24[r];
			chart1->Series[0]->Points->AddXY(M24[r], A24[r]);
			chart1->Series[1]->Points->AddXY(M24[r], A24[r]);
			chart2->Series[0]->Points->AddXY(M24[r], A24[r]);
			chart3->Series[0]->Points->AddXY(M24minu[r], A24[r]);
			chart3->Series[1]->Points->AddXY(M24[r], A24[r]);
			chart3->Series[2]->Points->AddXY(M24plus[r], A24[r]);
			listBox3->Items->Add(M24[r]);
			listBox5->Items->Add(A24[r]);
			sw->WriteLine(Convert::ToString(M24[r]) + " " + Convert::ToString(A24[r]));
		}
		sredn = sumPr / dataGridView5->RowCount;
		srednAlpha = sumPrAlpha / dataGridView5->RowCount;
		Mpr[0] = M24[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
		alphaPr[0] = A24[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
		for (int i = 1; i < dataGridView5->RowCount; i++) {
			Mpr[i] = func(M24[i], Mpr[i - 1]);
			alphaPr[i] = func(A24[i], alphaPr[i - 1]);
		}
		Mpr8 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
		alphaPr8 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
		chart2->Series[0]->Points->AddXY(Mpr8, alphaPr8);
		chart2->Series[1]->Points->AddXY(Mpr8, alphaPr8);
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		//str1 = "";
		//str21 = "";

	}
	if (curItem == str5) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();
		if (str5->Length == 3) {
			int s1 = Convert::ToInt32(str5[0]) - 48;
			int s2 = Convert::ToInt32(str5[2]) - 48;
			sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
			for (int r = 0; r < dataGridView5->RowCount; r++) {
				double S = 0;
				double Sminu = 0;
				double Splus = 0;
				double V = 0;
				for (int col = 0; col < 2; col++) {
					if (col == 0) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					}
					if (col == 1) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					}
				}
				M5plus[r] = sqrt(Splus);
				M5minu[r] = sqrt(Sminu);
				M5[r] = sqrt(S);
				A5[r] = acos(V / (M5[0] * M5[r]));
				A5[0] = 0;
				sumPr = sumPr + M5[r];
				sumPrAlpha = sumPrAlpha + A5[r];
				chart1->Series[0]->Points->AddXY(M5[r], A5[r]);
				chart1->Series[1]->Points->AddXY(M5[r], A5[r]);
				chart2->Series[0]->Points->AddXY(M5[r], A5[r]);
				chart3->Series[0]->Points->AddXY(M5minu[r], A5[r]);
				chart3->Series[1]->Points->AddXY(M5[r], A5[r]);
				chart3->Series[2]->Points->AddXY(M5plus[r], A5[r]);
				listBox3->Items->Add(M5[r]);
				listBox5->Items->Add(A5[r]);
				sw->WriteLine(Convert::ToString(M5[r]) + " " + Convert::ToString(A5[r]));
			}
			sredn = sumPr / dataGridView5->RowCount;
			srednAlpha = sumPrAlpha / dataGridView5->RowCount;
			Mpr[0] = M5[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
			alphaPr[0] = A5[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
			for (int i = 1; i < dataGridView5->RowCount; i++) {
				Mpr[i] = func(M5[i], Mpr[i - 1]);
				alphaPr[i] = func(A5[i], alphaPr[i - 1]);
			}
			Mpr9 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
			alphaPr9 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
			chart2->Series[0]->Points->AddXY(Mpr9, alphaPr9);
			chart2->Series[1]->Points->AddXY(Mpr9, alphaPr9);
		}
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
	}
	if (curItem == str25) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();

		int s1 = (Convert::ToInt32(str25[0]) - 48) * 10 + Convert::ToInt32(str25[1]) - 48;
		int s2 = Convert::ToInt32(str25[3]) - 48;
		sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
		for (int r = 0; r < dataGridView5->RowCount; r++) {
			double S = 0;
			double Sminu = 0;
			double Splus = 0;
			double V = 0;
			for (int col = 0; col < 2; col++) {
				if (col == 0) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
				}
				if (col == 1) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
				}
			}
			M25plus[r] = sqrt(Splus);
			M25minu[r] = sqrt(Sminu);
			M25[r] = sqrt(S);
			A25[r] = acos(V / (M25[0] * M25[r]));
			A25[0] = 0;
			sumPr = sumPr + M25[r];
			sumPrAlpha = sumPrAlpha + A25[r];
			chart1->Series[0]->Points->AddXY(M25[r], A25[r]);
			chart1->Series[1]->Points->AddXY(M25[r], A25[r]);
			chart2->Series[0]->Points->AddXY(M25[r], A25[r]);
			chart3->Series[0]->Points->AddXY(M25minu[r], A25[r]);
			chart3->Series[1]->Points->AddXY(M25[r], A25[r]);
			chart3->Series[2]->Points->AddXY(M25plus[r], A25[r]);
			listBox3->Items->Add(M25[r]);
			listBox5->Items->Add(A25[r]);
			sw->WriteLine(Convert::ToString(M25[r]) + " " + Convert::ToString(A25[r]));
		}
		sredn = sumPr / dataGridView5->RowCount;
		srednAlpha = sumPrAlpha / dataGridView5->RowCount;
		Mpr[0] = M25[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
		alphaPr[0] = A25[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
		for (int i = 1; i < dataGridView5->RowCount; i++) {
			Mpr[i] = func(M25[i], Mpr[i - 1]);
			alphaPr[i] = func(A25[i], alphaPr[i - 1]);
		}
		Mpr10 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
		alphaPr10 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
		chart2->Series[0]->Points->AddXY(Mpr10, alphaPr10);
		chart2->Series[1]->Points->AddXY(Mpr10, alphaPr10);
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		//str1 = "";
		//str21 = "";

	}
	if (curItem == str6) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();
		if (str6->Length == 3) {
			int s1 = Convert::ToInt32(str6[0]) - 48;
			int s2 = Convert::ToInt32(str6[2]) - 48;
			sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
			for (int r = 0; r < dataGridView5->RowCount; r++) {
				double S = 0;
				double Sminu = 0;
				double Splus = 0;
				double V = 0;
				for (int col = 0; col < 2; col++) {
					if (col == 0) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					}
					if (col == 1) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					}
				}
				M6plus[r] = sqrt(Splus);
				M6minu[r] = sqrt(Sminu);
				M6[r] = sqrt(S);
				A6[r] = acos(V / (M6[0] * M6[r]));
				A6[0] = 0;
				sumPr = sumPr + M6[r];
				sumPrAlpha = sumPrAlpha + A6[r];
				chart1->Series[0]->Points->AddXY(M6[r], A6[r]);
				chart1->Series[1]->Points->AddXY(M6[r], A6[r]);
				chart2->Series[0]->Points->AddXY(M6[r], A6[r]);
				chart3->Series[0]->Points->AddXY(M6minu[r], A6[r]);
				chart3->Series[1]->Points->AddXY(M6[r], A6[r]);
				chart3->Series[2]->Points->AddXY(M6plus[r], A6[r]);
				listBox3->Items->Add(M6[r]);
				listBox5->Items->Add(A6[r]);
				sw->WriteLine(Convert::ToString(M6[r]) + " " + Convert::ToString(A6[r]));
			}
			sredn = sumPr / dataGridView5->RowCount;
			srednAlpha = sumPrAlpha / dataGridView5->RowCount;
			Mpr[0] = M6[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
			alphaPr[0] = A6[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
			for (int i = 1; i < dataGridView5->RowCount; i++) {
				Mpr[i] = func(M6[i], Mpr[i - 1]);
				alphaPr[i] = func(A6[i], alphaPr[i - 1]);
			}
			Mpr11 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
			alphaPr11 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
			chart2->Series[0]->Points->AddXY(Mpr11, alphaPr11);
			chart2->Series[1]->Points->AddXY(Mpr11, alphaPr11);
		}
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
	}
	if (curItem == str26) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();

		int s1 = (Convert::ToInt32(str26[0]) - 48) * 10 + Convert::ToInt32(str26[1]) - 48;
		int s2 = Convert::ToInt32(str26[3]) - 48;
		sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
		for (int r = 0; r < dataGridView5->RowCount; r++) {
			double S = 0;
			double Sminu = 0;
			double Splus = 0;
			double V = 0;
			for (int col = 0; col < 2; col++) {
				if (col == 0) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
				}
				if (col == 1) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
				}
			}
			M26plus[r] = sqrt(Splus);
			M26minu[r] = sqrt(Sminu);
			M26[r] = sqrt(S);
			A26[r] = acos(V / (M26[0] * M26[r]));
			A26[0] = 0;
			sumPr = sumPr + M26[r];
			sumPrAlpha = sumPrAlpha + A26[r];
			chart1->Series[0]->Points->AddXY(M26[r], A26[r]);
			chart1->Series[1]->Points->AddXY(M26[r], A26[r]);
			chart2->Series[0]->Points->AddXY(M26[r], A26[r]);
			chart3->Series[0]->Points->AddXY(M26minu[r], A26[r]);
			chart3->Series[1]->Points->AddXY(M26[r], A26[r]);
			chart3->Series[2]->Points->AddXY(M26plus[r], A26[r]);
			listBox3->Items->Add(M26[r]);
			listBox5->Items->Add(A26[r]);
			sw->WriteLine(Convert::ToString(M26[r]) + " " + Convert::ToString(A26[r]));
		}
		sredn = sumPr / dataGridView5->RowCount;
		srednAlpha = sumPrAlpha / dataGridView5->RowCount;
		Mpr[0] = M26[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
		alphaPr[0] = A26[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
		for (int i = 1; i < dataGridView5->RowCount; i++) {
			Mpr[i] = func(M26[i], Mpr[i - 1]);
			alphaPr[i] = func(A26[i], alphaPr[i - 1]);
		}
		Mpr12 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
		alphaPr12 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
		chart2->Series[0]->Points->AddXY(Mpr12, alphaPr12);
		chart2->Series[1]->Points->AddXY(Mpr12, alphaPr12);
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		//str1 = "";
		//str21 = "";

	}
	if (curItem == str7) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();
		if (str7->Length == 3) {
			int s1 = Convert::ToInt32(str7[0]) - 48;
			int s2 = Convert::ToInt32(str7[2]) - 48;
			sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
			for (int r = 0; r < dataGridView5->RowCount; r++) {
				double S = 0;
				double Sminu = 0;
				double Splus = 0;
				double V = 0;
				for (int col = 0; col < 2; col++) {
					if (col == 0) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					}
					if (col == 1) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					}
				}
				M7plus[r] = sqrt(Splus);
				M7minu[r] = sqrt(Sminu);
				M7[r] = sqrt(S);
				A7[r] = acos(V / (M7[0] * M7[r]));
				A7[0] = 0;
				sumPr = sumPr + M7[r];
				sumPrAlpha = sumPrAlpha + A7[r];
				chart1->Series[0]->Points->AddXY(M7[r], A7[r]);
				chart1->Series[1]->Points->AddXY(M7[r], A7[r]);
				chart2->Series[0]->Points->AddXY(M7[r], A7[r]);
				chart3->Series[0]->Points->AddXY(M7minu[r], A7[r]);
				chart3->Series[1]->Points->AddXY(M7[r], A7[r]);
				chart3->Series[2]->Points->AddXY(M7plus[r], A7[r]);
				listBox3->Items->Add(M7[r]);
				listBox5->Items->Add(A7[r]);
				sw->WriteLine(Convert::ToString(M7[r]) + " " + Convert::ToString(A7[r]));
			}
			sredn = sumPr / dataGridView5->RowCount;
			srednAlpha = sumPrAlpha / dataGridView5->RowCount;
			Mpr[0] = M7[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
			alphaPr[0] = A7[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
			for (int i = 1; i < dataGridView5->RowCount; i++) {
				Mpr[i] = func(M7[i], Mpr[i - 1]);
				alphaPr[i] = func(A7[i], alphaPr[i - 1]);
			}
			Mpr13 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
			alphaPr13 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
			chart2->Series[0]->Points->AddXY(Mpr13, alphaPr13);
			chart2->Series[1]->Points->AddXY(Mpr13, alphaPr13);
		}
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
	}
	if (curItem == str27) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();

		int s1 = (Convert::ToInt32(str27[0]) - 48) * 10 + Convert::ToInt32(str27[1]) - 48;
		int s2 = Convert::ToInt32(str27[3]) - 48;
		sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
		for (int r = 0; r < dataGridView5->RowCount; r++) {
			double S = 0;
			double Sminu = 0;
			double Splus = 0;
			double V = 0;
			for (int col = 0; col < 2; col++) {
				if (col == 0) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
				}
				if (col == 1) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
				}
			}
			M27plus[r] = sqrt(Splus);
			M27minu[r] = sqrt(Sminu);
			M27[r] = sqrt(S);
			A27[r] = acos(V / (M27[0] * M27[r]));
			A27[0] = 0;
			sumPr = sumPr + M27[r];
			sumPrAlpha = sumPrAlpha + A27[r];
			chart1->Series[0]->Points->AddXY(M27[r], A27[r]);
			chart1->Series[1]->Points->AddXY(M27[r], A27[r]);
			chart2->Series[0]->Points->AddXY(M27[r], A27[r]);
			chart3->Series[0]->Points->AddXY(M27minu[r], A27[r]);
			chart3->Series[1]->Points->AddXY(M27[r], A27[r]);
			chart3->Series[2]->Points->AddXY(M27plus[r], A27[r]);
			listBox3->Items->Add(M27[r]);
			listBox5->Items->Add(A27[r]);
			sw->WriteLine(Convert::ToString(M27[r]) + " " + Convert::ToString(A27[r]));
		}
		sredn = sumPr / dataGridView5->RowCount;
		srednAlpha = sumPrAlpha / dataGridView5->RowCount;
		Mpr[0] = M27[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
		alphaPr[0] = A27[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
		for (int i = 1; i < dataGridView5->RowCount; i++) {
			Mpr[i] = func(M27[i], Mpr[i - 1]);
			alphaPr[i] = func(A27[i], alphaPr[i - 1]);
		}
		Mpr14 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
		alphaPr14 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
		chart2->Series[0]->Points->AddXY(Mpr14, alphaPr14);
		chart2->Series[1]->Points->AddXY(Mpr14, alphaPr14);
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		//str1 = "";
		//str21 = "";

	}
	if (curItem == str8) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();
		if (str8->Length == 3) {
			int s1 = Convert::ToInt32(str8[0]) - 48;
			int s2 = Convert::ToInt32(str8[2]) - 48;
			sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
			for (int r = 0; r < dataGridView5->RowCount; r++) {
				double S = 0;
				double Sminu = 0;
				double Splus = 0;
				double V = 0;
				for (int col = 0; col < 2; col++) {
					if (col == 0) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					}
					if (col == 1) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					}
				}
				M8plus[r] = sqrt(Splus);
				M8minu[r] = sqrt(Sminu);
				M8[r] = sqrt(S);
				A8[r] = acos(V / (M8[0] * M8[r]));
				A8[0] = 0;
				sumPr = sumPr + M8[r];
				sumPrAlpha = sumPrAlpha + A8[r];
				chart1->Series[0]->Points->AddXY(M8[r], A8[r]);
				chart1->Series[1]->Points->AddXY(M8[r], A8[r]);
				chart2->Series[0]->Points->AddXY(M8[r], A8[r]);
				chart3->Series[0]->Points->AddXY(M8minu[r], A8[r]);
				chart3->Series[1]->Points->AddXY(M8[r], A8[r]);
				chart3->Series[2]->Points->AddXY(M8plus[r], A8[r]);
				listBox3->Items->Add(M8[r]);
				listBox5->Items->Add(A8[r]);
				sw->WriteLine(Convert::ToString(M8[r]) + " " + Convert::ToString(A8[r]));
			}
			sredn = sumPr / dataGridView5->RowCount;
			srednAlpha = sumPrAlpha / dataGridView5->RowCount;
			Mpr[0] = M8[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
			alphaPr[0] = A8[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
			for (int i = 1; i < dataGridView5->RowCount; i++) {
				Mpr[i] = func(M8[i], Mpr[i - 1]);
				alphaPr[i] = func(A8[i], alphaPr[i - 1]);
			}
			Mpr15 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
			alphaPr15 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
			chart2->Series[0]->Points->AddXY(Mpr15, alphaPr15);
			chart2->Series[1]->Points->AddXY(Mpr15, alphaPr15);
		}
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
	}
	if (curItem == str28) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();

		int s1 = (Convert::ToInt32(str28[0]) - 48) * 10 + Convert::ToInt32(str28[1]) - 48;
		int s2 = Convert::ToInt32(str28[3]) - 48;
		sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
		for (int r = 0; r < dataGridView5->RowCount; r++) {
			double S = 0;
			double Sminu = 0;
			double Splus = 0;
			double V = 0;
			for (int col = 0; col < 2; col++) {
				if (col == 0) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
				}
				if (col == 1) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
				}
			}
			M28plus[r] = sqrt(Splus);
			M28minu[r] = sqrt(Sminu);
			M28[r] = sqrt(S);
			A28[r] = acos(V / (M28[0] * M28[r]));
			A28[0] = 0;
			sumPr = sumPr + M28[r];
			sumPrAlpha = sumPrAlpha + A28[r];
			chart1->Series[0]->Points->AddXY(M28[r], A28[r]);
			chart1->Series[1]->Points->AddXY(M28[r], A28[r]);
			chart2->Series[0]->Points->AddXY(M28[r], A28[r]);
			chart3->Series[0]->Points->AddXY(M28minu[r], A28[r]);
			chart3->Series[1]->Points->AddXY(M28[r], A28[r]);
			chart3->Series[2]->Points->AddXY(M28plus[r], A28[r]);
			listBox3->Items->Add(M28[r]);
			listBox5->Items->Add(A28[r]);
			sw->WriteLine(Convert::ToString(M28[r]) + " " + Convert::ToString(A28[r]));
		}
		sredn = sumPr / dataGridView5->RowCount;
		srednAlpha = sumPrAlpha / dataGridView5->RowCount;
		Mpr[0] = M28[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
		alphaPr[0] = A28[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
		for (int i = 1; i < dataGridView5->RowCount; i++) {
			Mpr[i] = func(M28[i], Mpr[i - 1]);
			alphaPr[i] = func(A28[i], alphaPr[i - 1]);
		}
		Mpr16 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
		alphaPr16 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
		chart2->Series[0]->Points->AddXY(Mpr16, alphaPr16);
		chart2->Series[1]->Points->AddXY(Mpr16, alphaPr16);
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);

	}
	if (curItem == str9) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();
		if (str9->Length == 3) {
			int s1 = Convert::ToInt32(str9[0]) - 48;
			int s2 = Convert::ToInt32(str9[2]) - 48;
			sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
			for (int r = 0; r < dataGridView5->RowCount; r++) {
				double S = 0;
				double Sminu = 0;
				double Splus = 0;
				double V = 0;
				for (int col = 0; col < 2; col++) {
					if (col == 0) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					}
					if (col == 1) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					}
				}
				M9plus[r] = sqrt(Splus);
				M9minu[r] = sqrt(Sminu);
				M9[r] = sqrt(S);
				A9[r] = acos(V / (M9[0] * M9[r]));
				A9[0] = 0;
				sumPr = sumPr + M9[r];
				sumPrAlpha = sumPrAlpha + A9[r];
				chart1->Series[0]->Points->AddXY(M9[r], A9[r]);
				chart1->Series[1]->Points->AddXY(M9[r], A9[r]);
				chart2->Series[0]->Points->AddXY(M9[r], A9[r]);
				chart3->Series[0]->Points->AddXY(M9minu[r], A9[r]);
				chart3->Series[1]->Points->AddXY(M9[r], A9[r]);
				chart3->Series[2]->Points->AddXY(M9plus[r], A9[r]);
				listBox3->Items->Add(M9[r]);
				listBox5->Items->Add(A9[r]);
				sw->WriteLine(Convert::ToString(M9[r]) + " " + Convert::ToString(A9[r]));
			}
			sredn = sumPr / dataGridView5->RowCount;
			srednAlpha = sumPrAlpha / dataGridView5->RowCount;
			Mpr[0] = M9[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
			alphaPr[0] = A9[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
			for (int i = 1; i < dataGridView5->RowCount; i++) {
				Mpr[i] = func(M9[i], Mpr[i - 1]);
				alphaPr[i] = func(A9[i], alphaPr[i - 1]);
			}
			Mpr17 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
			alphaPr17 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
			chart2->Series[0]->Points->AddXY(Mpr17, alphaPr17);
			chart2->Series[1]->Points->AddXY(Mpr17, alphaPr17);
		}
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
	}
	if (curItem == str29) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();

		int s1 = (Convert::ToInt32(str29[0]) - 48) * 10 + Convert::ToInt32(str29[1]) - 48;
		int s2 = Convert::ToInt32(str29[3]) - 48;
		sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
		for (int r = 0; r < dataGridView5->RowCount; r++) {
			double S = 0;
			double Sminu = 0;
			double Splus = 0;
			double V = 0;
			for (int col = 0; col < 2; col++) {
				if (col == 0) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
				}
				if (col == 1) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
				}
			}
			M29plus[r] = sqrt(Splus);
			M29minu[r] = sqrt(Sminu);
			M29[r] = sqrt(S);
			A29[r] = acos(V / (M29[0] * M29[r]));
			A29[0] = 0;
			sumPr = sumPr + M29[r];
			sumPrAlpha = sumPrAlpha + A29[r];
			chart1->Series[0]->Points->AddXY(M29[r], A29[r]);
			chart1->Series[1]->Points->AddXY(M29[r], A29[r]);
			chart2->Series[0]->Points->AddXY(M29[r], A29[r]);
			chart3->Series[0]->Points->AddXY(M29minu[r], A29[r]);
			chart3->Series[1]->Points->AddXY(M29[r], A29[r]);
			chart3->Series[2]->Points->AddXY(M29plus[r], A29[r]);
			listBox3->Items->Add(M29[r]);
			listBox5->Items->Add(A29[r]);
			sw->WriteLine(Convert::ToString(M29[r]) + " " + Convert::ToString(A29[r]));
		}
		sredn = sumPr / dataGridView5->RowCount;
		srednAlpha = sumPrAlpha / dataGridView5->RowCount;
		Mpr[0] = M29[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
		alphaPr[0] = A29[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
		for (int i = 1; i < dataGridView5->RowCount; i++) {
			Mpr[i] = func(M29[i], Mpr[i - 1]);
			alphaPr[i] = func(A29[i], alphaPr[i - 1]);
		}
		Mpr18 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
		alphaPr18 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
		chart2->Series[0]->Points->AddXY(Mpr18, alphaPr18);
		chart2->Series[1]->Points->AddXY(Mpr18, alphaPr18);
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		//str1 = "";
		//str21 = "";

	}
	if (curItem == str10) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();
		if (str10->Length == 4) {
			int s1 = Convert::ToInt32(str10[0]) - 48;
			int s2 = (Convert::ToInt32(str10[2]) - 48)*10 + Convert::ToInt32(str10[3])-48;
			sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
			for (int r = 0; r < dataGridView5->RowCount; r++) {
				double S = 0;
				double Sminu = 0;
				double Splus = 0;
				double V = 0;
				for (int col = 0; col < 2; col++) {
					if (col == 0) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					}
					if (col == 1) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					}
				}
				M10plus[r] = sqrt(Splus);
				M10minu[r] = sqrt(Sminu);
				M10[r] = sqrt(S);
				A10[r] = acos(V / (M10[0] * M10[r]));
				A10[0] = 0;
				sumPr = sumPr + M10[r];
				sumPrAlpha = sumPrAlpha + A10[r];
				chart1->Series[0]->Points->AddXY(M10[r], A10[r]);
				chart1->Series[1]->Points->AddXY(M10[r], A10[r]);
				chart2->Series[0]->Points->AddXY(M10[r], A10[r]);
				chart3->Series[0]->Points->AddXY(M10minu[r], A10[r]);
				chart3->Series[1]->Points->AddXY(M10[r], A10[r]);
				chart3->Series[2]->Points->AddXY(M10plus[r], A10[r]);
				listBox3->Items->Add(M10[r]);
				listBox5->Items->Add(A10[r]);
				sw->WriteLine(Convert::ToString(M10[r]) + " " + Convert::ToString(A10[r]));
			}
			sredn = sumPr / dataGridView5->RowCount;
			srednAlpha = sumPrAlpha / dataGridView5->RowCount;
			Mpr[0] = M10[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
			alphaPr[0] = A10[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
			for (int i = 1; i < dataGridView5->RowCount; i++) {
				Mpr[i] = func(M10[i], Mpr[i - 1]);
				alphaPr[i] = func(A10[i], alphaPr[i - 1]);
			}
			Mpr19 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
			alphaPr19 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
			chart2->Series[0]->Points->AddXY(Mpr19, alphaPr19);
			chart2->Series[1]->Points->AddXY(Mpr19, alphaPr19);
		}
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
	}
	if (curItem == str30) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();

		int s1 = (Convert::ToInt32(str30[0]) - 48) * 10 + Convert::ToInt32(str30[1]) - 48;
		int s2 = (Convert::ToInt32(str30[3]) - 48) * 10 + Convert::ToInt32(str30[4]) - 48;
		sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
		for (int r = 0; r < dataGridView5->RowCount; r++) {
			double S = 0;
			double Sminu = 0;
			double Splus = 0;
			double V = 0;
			for (int col = 0; col < 2; col++) {
				if (col == 0) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
				}
				if (col == 1) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
				}
			}
			M30plus[r] = sqrt(Splus);
			M30minu[r] = sqrt(Sminu);
			M30[r] = sqrt(S);
			A30[r] = acos(V / (M30[0] * M30[r]));
			A30[0] = 0;
			sumPr = sumPr + M30[r];
			sumPrAlpha = sumPrAlpha + A30[r];
			chart1->Series[0]->Points->AddXY(M30[r], A30[r]);
			chart1->Series[1]->Points->AddXY(M30[r], A30[r]);
			chart2->Series[0]->Points->AddXY(M30[r], A30[r]);
			chart3->Series[0]->Points->AddXY(M30minu[r], A30[r]);
			chart3->Series[1]->Points->AddXY(M30[r], A30[r]);
			chart3->Series[2]->Points->AddXY(M30plus[r], A30[r]);
			listBox3->Items->Add(M30[r]);
			listBox5->Items->Add(A30[r]);
			sw->WriteLine(Convert::ToString(M30[r]) + " " + Convert::ToString(A30[r]));
		}
		sredn = sumPr / dataGridView5->RowCount;
		srednAlpha = sumPrAlpha / dataGridView5->RowCount;
		Mpr[0] = M30[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
		alphaPr[0] = A30[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
		for (int i = 1; i < dataGridView5->RowCount; i++) {
			Mpr[i] = func(M30[i], Mpr[i - 1]);
			alphaPr[i] = func(A30[i], alphaPr[i - 1]);
		}
		Mpr20 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
		alphaPr20 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
		chart2->Series[0]->Points->AddXY(Mpr20, alphaPr20);
		chart2->Series[1]->Points->AddXY(Mpr20, alphaPr20);
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		//str1 = "";
		//str21 = "";

	}
	if (curItem == str11) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();
		if (str11->Length == 4) {
			int s1 = Convert::ToInt32(str11[0]) - 48;
			int s2 = (Convert::ToInt32(str11[2]) - 48) * 10 + Convert::ToInt32(str11[3]) - 48;
			sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
			for (int r = 0; r < dataGridView5->RowCount; r++) {
				double S = 0;
				double Sminu = 0;
				double Splus = 0;
				double V = 0;
				for (int col = 0; col < 2; col++) {
					if (col == 0) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					}
					if (col == 1) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					}
				}
				M11plus[r] = sqrt(Splus);
				M11minu[r] = sqrt(Sminu);
				M11[r] = sqrt(S);
				A11[r] = acos(V / (M11[0] * M11[r]));
				A11[0] = 0;
				sumPr = sumPr + M11[r];
				sumPrAlpha = sumPrAlpha + A11[r];
				chart1->Series[0]->Points->AddXY(M11[r], A11[r]);
				chart1->Series[1]->Points->AddXY(M11[r], A11[r]);
				chart2->Series[0]->Points->AddXY(M11[r], A11[r]);
				chart3->Series[0]->Points->AddXY(M11minu[r], A11[r]);
				chart3->Series[1]->Points->AddXY(M11[r], A11[r]);
				chart3->Series[2]->Points->AddXY(M11plus[r], A11[r]);
				listBox3->Items->Add(M11[r]);
				listBox5->Items->Add(A11[r]);
				sw->WriteLine(Convert::ToString(M11[r]) + " " + Convert::ToString(A11[r]));
			}
			sredn = sumPr / dataGridView5->RowCount;
			srednAlpha = sumPrAlpha / dataGridView5->RowCount;
			Mpr[0] = M11[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
			alphaPr[0] = A11[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
			for (int i = 1; i < dataGridView5->RowCount; i++) {
				Mpr[i] = func(M11[i], Mpr[i - 1]);
				alphaPr[i] = func(A11[i], alphaPr[i - 1]);
			}
			Mpr21 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
			alphaPr21 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
			chart2->Series[0]->Points->AddXY(Mpr21, alphaPr21);
			chart2->Series[1]->Points->AddXY(Mpr21, alphaPr21);
		}
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
	}
	if (curItem == str31) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();

		int s1 = (Convert::ToInt32(str31[0]) - 48) * 10 + Convert::ToInt32(str31[1]) - 48;
		int s2 = (Convert::ToInt32(str31[3]) - 48) * 10 + Convert::ToInt32(str31[4]) - 48;
		sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
		for (int r = 0; r < dataGridView5->RowCount; r++) {
			double S = 0;
			double Sminu = 0;
			double Splus = 0;
			double V = 0;
			for (int col = 0; col < 2; col++) {
				if (col == 0) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
				}
				if (col == 1) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
				}
			}
			M31plus[r] = sqrt(Splus);
			M31minu[r] = sqrt(Sminu);
			M31[r] = sqrt(S);
			A31[r] = acos(V / (M31[0] * M31[r]));
			A31[0] = 0;
			sumPr = sumPr + M31[r];
			sumPrAlpha = sumPrAlpha + A31[r];
			chart1->Series[0]->Points->AddXY(M31[r], A31[r]);
			chart1->Series[1]->Points->AddXY(M31[r], A31[r]);
			chart2->Series[0]->Points->AddXY(M31[r], A31[r]);
			chart3->Series[0]->Points->AddXY(M31minu[r], A31[r]);
			chart3->Series[1]->Points->AddXY(M31[r], A31[r]);
			chart3->Series[2]->Points->AddXY(M31plus[r], A31[r]);
			listBox3->Items->Add(M31[r]);
			listBox5->Items->Add(A31[r]);
			sw->WriteLine(Convert::ToString(M31[r]) + " " + Convert::ToString(A31[r]));
		}
		sredn = sumPr / dataGridView5->RowCount;
		srednAlpha = sumPrAlpha / dataGridView5->RowCount;
		Mpr[0] = M31[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
		alphaPr[0] = A31[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
		for (int i = 1; i < dataGridView5->RowCount; i++) {
			Mpr[i] = func(M31[i], Mpr[i - 1]);
			alphaPr[i] = func(A31[i], alphaPr[i - 1]);
		}
		Mpr22 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
		alphaPr22 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
		chart2->Series[0]->Points->AddXY(Mpr22, alphaPr22);
		chart2->Series[1]->Points->AddXY(Mpr22, alphaPr22);
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		//str1 = "";
		//str21 = "";

	}
	if (curItem == str12) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();
		if (str12->Length == 4) {
			int s1 = Convert::ToInt32(str12[0]) - 48;
			int s2 = (Convert::ToInt32(str12[2]) - 48) * 10 + Convert::ToInt32(str12[3]) - 48;
			sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
			for (int r = 0; r < dataGridView5->RowCount; r++) {
				double S = 0;
				double Sminu = 0;
				double Splus = 0;
				double V = 0;
				for (int col = 0; col < 2; col++) {
					if (col == 0) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					}
					if (col == 1) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					}
				}
				M12plus[r] = sqrt(Splus);
				M12minu[r] = sqrt(Sminu);
				M12[r] = sqrt(S);
				A12[r] = acos(V / (M12[0] * M12[r]));
				A12[0] = 0;
				sumPr = sumPr + M12[r];
				sumPrAlpha = sumPrAlpha + A12[r];
				chart1->Series[0]->Points->AddXY(M12[r], A12[r]);
				chart1->Series[1]->Points->AddXY(M12[r], A12[r]);
				chart2->Series[0]->Points->AddXY(M12[r], A12[r]);
				chart3->Series[0]->Points->AddXY(M12minu[r], A12[r]);
				chart3->Series[1]->Points->AddXY(M12[r], A12[r]);
				chart3->Series[2]->Points->AddXY(M12plus[r], A12[r]);
				listBox3->Items->Add(M12[r]);
				listBox5->Items->Add(A12[r]);
				sw->WriteLine(Convert::ToString(M12[r]) + " " + Convert::ToString(A12[r]));
			}
			sredn = sumPr / dataGridView5->RowCount;
			srednAlpha = sumPrAlpha / dataGridView5->RowCount;
			Mpr[0] = M12[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
			alphaPr[0] = A12[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
			for (int i = 1; i < dataGridView5->RowCount; i++) {
				Mpr[i] = func(M12[i], Mpr[i - 1]);
				alphaPr[i] = func(A12[i], alphaPr[i - 1]);
			}
			Mpr23 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
			alphaPr23 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
			chart2->Series[0]->Points->AddXY(Mpr23, alphaPr23);
			chart2->Series[1]->Points->AddXY(Mpr23, alphaPr23);
		}
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
	}
	if (curItem == str32) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();

		int s1 = (Convert::ToInt32(str32[0]) - 48) * 10 + Convert::ToInt32(str32[1]) - 48;
		int s2 = (Convert::ToInt32(str32[3]) - 48) * 10 + Convert::ToInt32(str32[4]) - 48;
		sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
		for (int r = 0; r < dataGridView5->RowCount; r++) {
			double S = 0;
			double Sminu = 0;
			double Splus = 0;
			double V = 0;
			for (int col = 0; col < 2; col++) {
				if (col == 0) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
				}
				if (col == 1) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
				}
			}
			M32plus[r] = sqrt(Splus);
			M32minu[r] = sqrt(Sminu);
			M32[r] = sqrt(S);
			A32[r] = acos(V / (M32[0] * M32[r]));
			A32[0] = 0;
			sumPr = sumPr + M32[r];
			sumPrAlpha = sumPrAlpha + A32[r];
			chart1->Series[0]->Points->AddXY(M32[r], A32[r]);
			chart1->Series[1]->Points->AddXY(M32[r], A32[r]);
			chart2->Series[0]->Points->AddXY(M32[r], A32[r]);
			chart3->Series[0]->Points->AddXY(M32minu[r], A32[r]);
			chart3->Series[1]->Points->AddXY(M32[r], A32[r]);
			chart3->Series[2]->Points->AddXY(M32plus[r], A32[r]);
			listBox3->Items->Add(M32[r]);
			listBox5->Items->Add(A32[r]);
			sw->WriteLine(Convert::ToString(M32[r]) + " " + Convert::ToString(A32[r]));
		}
		sredn = sumPr / dataGridView5->RowCount;
		srednAlpha = sumPrAlpha / dataGridView5->RowCount;
		Mpr[0] = M32[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
		alphaPr[0] = A32[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
		for (int i = 1; i < dataGridView5->RowCount; i++) {
			Mpr[i] = func(M32[i], Mpr[i - 1]);
			alphaPr[i] = func(A32[i], alphaPr[i - 1]);
		}
		Mpr24 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
		alphaPr24 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
		chart2->Series[0]->Points->AddXY(Mpr24, alphaPr24);
		chart2->Series[1]->Points->AddXY(Mpr24, alphaPr24);
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		//str1 = "";
		//str21 = "";

	}
	if (curItem == str13) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();
		if (str13->Length == 4) {
			int s1 = Convert::ToInt32(str13[0]) - 48;
			int s2 = (Convert::ToInt32(str13[2]) - 48) * 10 + Convert::ToInt32(str13[3]) - 48;
			sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
			for (int r = 0; r < dataGridView5->RowCount; r++) {
				double S = 0;
				double Sminu = 0;
				double Splus = 0;
				double V = 0;
				for (int col = 0; col < 2; col++) {
					if (col == 0) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					}
					if (col == 1) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					}
				}
				M13plus[r] = sqrt(Splus);
				M13minu[r] = sqrt(Sminu);
				M13[r] = sqrt(S);
				A13[r] = acos(V / (M13[0] * M13[r]));
				A13[0] = 0;
				sumPr = sumPr + M13[r];
				sumPrAlpha = sumPrAlpha + A13[r];
				chart1->Series[0]->Points->AddXY(M13[r], A13[r]);
				chart1->Series[1]->Points->AddXY(M13[r], A13[r]);
				chart2->Series[0]->Points->AddXY(M13[r], A13[r]);
				chart3->Series[0]->Points->AddXY(M13minu[r], A13[r]);
				chart3->Series[1]->Points->AddXY(M13[r], A13[r]);
				chart3->Series[2]->Points->AddXY(M13plus[r], A13[r]);
				listBox3->Items->Add(M13[r]);
				listBox5->Items->Add(A13[r]);
				sw->WriteLine(Convert::ToString(M13[r]) + " " + Convert::ToString(A13[r]));
			}
			sredn = sumPr / dataGridView5->RowCount;
			srednAlpha = sumPrAlpha / dataGridView5->RowCount;
			Mpr[0] = M13[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
			alphaPr[0] = A13[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
			for (int i = 1; i < dataGridView5->RowCount; i++) {
				Mpr[i] = func(M13[i], Mpr[i - 1]);
				alphaPr[i] = func(A13[i], alphaPr[i - 1]);
			}
			Mpr25 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
			alphaPr25 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
			chart2->Series[0]->Points->AddXY(Mpr25, alphaPr25);
			chart2->Series[1]->Points->AddXY(Mpr25, alphaPr25);
		}
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);

	}
	if (curItem == str33) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();

		int s1 = (Convert::ToInt32(str33[0]) - 48) * 10 + Convert::ToInt32(str33[1]) - 48;
		int s2 = (Convert::ToInt32(str33[3]) - 48) * 10 + Convert::ToInt32(str33[4]) - 48;
		sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
		for (int r = 0; r < dataGridView5->RowCount; r++) {
			double S = 0;
			double Sminu = 0;
			double Splus = 0;
			double V = 0;
			for (int col = 0; col < 2; col++) {
				if (col == 0) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
				}
				if (col == 1) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
				}
			}
			M33plus[r] = sqrt(Splus);
			M33minu[r] = sqrt(Sminu);
			M33[r] = sqrt(S);
			A33[r] = acos(V / (M33[0] * M33[r]));
			A33[0] = 0;
			sumPr = sumPr + M33[r];
			sumPrAlpha = sumPrAlpha + A33[r];
			chart1->Series[0]->Points->AddXY(M33[r], A33[r]);
			chart1->Series[1]->Points->AddXY(M33[r], A33[r]);
			chart2->Series[0]->Points->AddXY(M33[r], A33[r]);
			chart3->Series[0]->Points->AddXY(M33minu[r], A33[r]);
			chart3->Series[1]->Points->AddXY(M33[r], A33[r]);
			chart3->Series[2]->Points->AddXY(M33plus[r], A33[r]);
			listBox3->Items->Add(M33[r]);
			listBox5->Items->Add(A33[r]);
			sw->WriteLine(Convert::ToString(M33[r]) + " " + Convert::ToString(A33[r]));
		}
		sredn = sumPr / dataGridView5->RowCount;
		srednAlpha = sumPrAlpha / dataGridView5->RowCount;
		Mpr[0] = M33[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
		alphaPr[0] = A33[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
		for (int i = 1; i < dataGridView5->RowCount; i++) {
			Mpr[i] = func(M33[i], Mpr[i - 1]);
			alphaPr[i] = func(A33[i], alphaPr[i - 1]);
		}
		Mpr26 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
		alphaPr26 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
		chart2->Series[0]->Points->AddXY(Mpr26, alphaPr26);
		chart2->Series[1]->Points->AddXY(Mpr26, alphaPr26);
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		//str1 = "";
		//str21 = "";

	}
	if (curItem == str14) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();
		if (str14->Length == 4) {
			int s1 = Convert::ToInt32(str14[0]) - 48;
			int s2 = (Convert::ToInt32(str14[2]) - 48) * 10 + Convert::ToInt32(str14[3]) - 48;
			sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
			for (int r = 0; r < dataGridView5->RowCount; r++) {
				double S = 0;
				double Sminu = 0;
				double Splus = 0;
				double V = 0;
				for (int col = 0; col < 2; col++) {
					if (col == 0) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					}
					if (col == 1) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					}
				}
				M14plus[r] = sqrt(Splus);
				M14minu[r] = sqrt(Sminu);
				M14[r] = sqrt(S);
				A14[r] = acos(V / (M14[0] * M14[r]));
				A14[0] = 0;
				sumPr = sumPr + M14[r];
				sumPrAlpha = sumPrAlpha + A14[r];
				chart1->Series[0]->Points->AddXY(M14[r], A14[r]);
				chart1->Series[1]->Points->AddXY(M14[r], A14[r]);
				chart2->Series[0]->Points->AddXY(M14[r], A14[r]);
				chart3->Series[0]->Points->AddXY(M14minu[r], A14[r]);
				chart3->Series[1]->Points->AddXY(M14[r], A14[r]);
				chart3->Series[2]->Points->AddXY(M14plus[r], A14[r]);
				listBox3->Items->Add(M14[r]);
				listBox5->Items->Add(A14[r]);
				sw->WriteLine(Convert::ToString(M14[r]) + " " + Convert::ToString(A14[r]));
			}
			sredn = sumPr / dataGridView5->RowCount;
			srednAlpha = sumPrAlpha / dataGridView5->RowCount;
			Mpr[0] = M14[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
			alphaPr[0] = A14[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
			for (int i = 1; i < dataGridView5->RowCount; i++) {
				Mpr[i] = func(M14[i], Mpr[i - 1]);
				alphaPr[i] = func(A14[i], alphaPr[i - 1]);
			}
			Mpr27 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
			alphaPr27 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
			chart2->Series[0]->Points->AddXY(Mpr27, alphaPr27);
			chart2->Series[1]->Points->AddXY(Mpr27, alphaPr27);
		}
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
	}
	if (curItem == str34) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();

		int s1 = (Convert::ToInt32(str34[0]) - 48) * 10 + Convert::ToInt32(str34[1]) - 48;
		int s2 = (Convert::ToInt32(str34[3]) - 48) * 10 + Convert::ToInt32(str34[4]) - 48;
		sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
		for (int r = 0; r < dataGridView5->RowCount; r++) {
			double S = 0;
			double Sminu = 0;
			double Splus = 0;
			double V = 0;
			for (int col = 0; col < 2; col++) {
				if (col == 0) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
				}
				if (col == 1) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
				}
			}
			M34plus[r] = sqrt(Splus);
			M34minu[r] = sqrt(Sminu);
			M34[r] = sqrt(S);
			A34[r] = acos(V / (M34[0] * M34[r]));
			A34[0] = 0;
			sumPr = sumPr + M34[r];
			sumPrAlpha = sumPrAlpha + A34[r];
			chart1->Series[0]->Points->AddXY(M34[r], A34[r]);
			chart1->Series[1]->Points->AddXY(M34[r], A34[r]);
			chart2->Series[0]->Points->AddXY(M34[r], A34[r]);
			chart3->Series[0]->Points->AddXY(M34minu[r], A34[r]);
			chart3->Series[1]->Points->AddXY(M34[r], A34[r]);
			chart3->Series[2]->Points->AddXY(M34plus[r], A34[r]);
			listBox3->Items->Add(M34[r]);
			listBox5->Items->Add(A34[r]);
			sw->WriteLine(Convert::ToString(M34[r]) + " " + Convert::ToString(A34[r]));
		}
		sredn = sumPr / dataGridView5->RowCount;
		srednAlpha = sumPrAlpha / dataGridView5->RowCount;
		Mpr[0] = M34[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
		alphaPr[0] = A34[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
		for (int i = 1; i < dataGridView5->RowCount; i++) {
			Mpr[i] = func(M34[i], Mpr[i - 1]);
			alphaPr[i] = func(A34[i], alphaPr[i - 1]);
		}
		Mpr28 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
		alphaPr28 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
		chart2->Series[0]->Points->AddXY(Mpr28, alphaPr28);
		chart2->Series[1]->Points->AddXY(Mpr28, alphaPr28);
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		//str1 = "";
		//str21 = "";

	}
	if (curItem == str15) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();
		if (str15->Length == 4) {
			int s1 = Convert::ToInt32(str15[0]) - 48;
			int s2 = (Convert::ToInt32(str15[2]) - 48) * 10 + Convert::ToInt32(str15[3]) - 48;
			sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
			for (int r = 0; r < dataGridView5->RowCount; r++) {
				double S = 0;
				double Sminu = 0;
				double Splus = 0;
				double V = 0;
				for (int col = 0; col < 2; col++) {
					if (col == 0) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					}
					if (col == 1) {
						S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
						Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
						Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
						V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					}
				}
				M15plus[r] = sqrt(Splus);
				M15minu[r] = sqrt(Sminu);
				M15[r] = sqrt(S);
				A15[r] = acos(V / (M15[0] * M15[r]));
				A15[0] = 0;
				sumPr = sumPr + M15[r];
				sumPrAlpha = sumPrAlpha + A15[r];
				chart1->Series[0]->Points->AddXY(M15[r], A15[r]);
				chart1->Series[1]->Points->AddXY(M15[r], A15[r]);
				chart2->Series[0]->Points->AddXY(M15[r], A15[r]);
				chart3->Series[0]->Points->AddXY(M15minu[r], A15[r]);
				chart3->Series[1]->Points->AddXY(M15[r], A15[r]);
				chart3->Series[2]->Points->AddXY(M15plus[r], A15[r]);
				listBox3->Items->Add(M15[r]);
				listBox5->Items->Add(A15[r]);
				sw->WriteLine(Convert::ToString(M15[r]) + " " + Convert::ToString(A15[r]));
			}
			sredn = sumPr / dataGridView5->RowCount;
			srednAlpha = sumPrAlpha / dataGridView5->RowCount;
			Mpr[0] = M15[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
			alphaPr[0] = A15[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
			for (int i = 1; i < dataGridView5->RowCount; i++) {
				Mpr[i] = func(M15[i], Mpr[i - 1]);
				alphaPr[i] = func(A15[i], alphaPr[i - 1]);
			}
			Mpr29 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
			alphaPr29 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
			chart2->Series[0]->Points->AddXY(Mpr29, alphaPr29);
			chart2->Series[1]->Points->AddXY(Mpr29, alphaPr29);
		}
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
	}
	if (curItem == str35) {
		double sumPr = 0;
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		double sumPrAlpha = 0;
		chart2->Series[0]->Points->Clear();
		double sredn = 0;
		chart2->Series[1]->Points->Clear();
		double srednAlpha = 0;
		chart3->Series[0]->Points->Clear();
		chart3->Series[1]->Points->Clear();
		chart3->Series[2]->Points->Clear();
		listBox3->Items->Clear();
		listBox5->Items->Clear();

		int s1 = (Convert::ToInt32(str35[0]) - 48) * 10 + Convert::ToInt32(str35[1]) - 48;
		int s2 = (Convert::ToInt32(str35[3]) - 48) * 10 + Convert::ToInt32(str35[4]) - 48;
		sw->WriteLine("Вычисления модуля М и модуля А для связи - " + curItem);
		for (int r = 0; r < dataGridView5->RowCount; r++) {
			double S = 0;
			double Sminu = 0;
			double Splus = 0;
			double V = 0;
			for (int col = 0; col < 2; col++) {
				if (col == 0) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s1]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s1]->Value);
				}
				if (col == 1) {
					S = S + Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
					Splus = Splus + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) + Convert::ToDouble(d5));
					Sminu = Sminu + (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5)) * (Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value) - Convert::ToDouble(d5));
					V = V + Convert::ToDouble(dataGridView5->Rows[0]->Cells[s2]->Value) * Convert::ToDouble(dataGridView5->Rows[r]->Cells[s2]->Value);
				}
			}
			M35plus[r] = sqrt(Splus);
			M35minu[r] = sqrt(Sminu);
			M35[r] = sqrt(S);
			A35[r] = acos(V / (M35[0] * M35[r]));
			A35[0] = 0;
			sumPr = sumPr + M35[r];
			sumPrAlpha = sumPrAlpha + A35[r];
			chart1->Series[0]->Points->AddXY(M35[r], A35[r]);
			chart1->Series[1]->Points->AddXY(M35[r], A35[r]);
			chart2->Series[0]->Points->AddXY(M35[r], A35[r]);
			chart3->Series[0]->Points->AddXY(M35minu[r], A35[r]);
			chart3->Series[1]->Points->AddXY(M35[r], A35[r]);
			chart3->Series[2]->Points->AddXY(M35plus[r], A35[r]);
			listBox3->Items->Add(M35[r]);
			listBox5->Items->Add(A35[r]);
			sw->WriteLine(Convert::ToString(M35[r]) + " " + Convert::ToString(A35[r]));
		}
		sredn = sumPr / dataGridView5->RowCount;
		srednAlpha = sumPrAlpha / dataGridView5->RowCount;
		Mpr[0] = M35[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * sredn;
		alphaPr[0] = A35[0] * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text)) * srednAlpha;
		for (int i = 1; i < dataGridView5->RowCount; i++) {
			Mpr[i] = func(M35[i], Mpr[i - 1]);
			alphaPr[i] = func(A35[i], alphaPr[i - 1]);
		}
		Mpr30 = sredn * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*Mpr[dataGridView5->RowCount - 1];
		alphaPr30 = srednAlpha * Convert::ToDouble(textBox5->Text) + (1 - Convert::ToDouble(textBox5->Text))*alphaPr[dataGridView5->RowCount - 1];
		chart2->Series[0]->Points->AddXY(Mpr30, alphaPr30);
		chart2->Series[1]->Points->AddXY(Mpr30, alphaPr30);
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_fazovoi_traektorii_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart2->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoy_tochki_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		chart3->SaveImage("..\\Reports\\_bmp\\" + "Grafik_dopustimyx_otkloneniy_ot_normy_dlya_svyazi_" + curItem + "_3_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		//str1 = "";
		//str21 = "";

	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Form7 ^ f7 = gcnew Form7(dataGridView5);
	f7->Show();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Form8 ^ f8 = gcnew Form8(dataGridView5);
	f8->Show();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Form9 ^ f9 = gcnew Form9(dataGridView5);
	f9->Show();
}
private: System::Void listBox7_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		listBox3->SelectedIndex = listBox7->SelectedIndex;
		listBox5->SelectedIndex = listBox7->SelectedIndex;
}
};
}
