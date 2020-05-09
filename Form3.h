#pragma once
#include "Form2.h"
#include "Form3.h"
//#include "Form5.h"
#include <stdlib.h>
#include <math.h>

//#include <array>
namespace CppCLR_WinformsProjekt1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::IO;
	using namespace System::Text;

	/// <summary>
	/// Сводка для Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
		Form3^ f3;
		//Form5 ^ f5;
		//public: double M[1];
	public: System::Data::OleDb::OleDbConnection^ connect1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	public:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;


	public:  System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	public:  System::Windows::Forms::ListBox^ listBox2;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::GroupBox^ groupBox3;



	private: System::Windows::Forms::ListBox^ listBox3;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::GroupBox^ groupBox4;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ListBox^ listBox9;
	private: System::Windows::Forms::ListBox^ listBox8;
	private: System::Windows::Forms::ListBox^ listBox7;
	private: System::Windows::Forms::ListBox^ listBox6;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::ListBox^ listBox10;


		   //	 double M[100];

			   // std::array<double, 100> M;
	public: int n1;
	private: System::Windows::Forms::Label^ label11;
	public:
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;

	private:

	public:


	public:
	public: int y1 = 0;
		  //	System::Data::OleDb::OleDbConnection^ connect1 = gcnew System::Data::OleDb::OleDbConnection;
	public:
		Form3(System::Data::OleDb::OleDbConnection^ connect, int n, int y)
		{
			InitializeComponent();
			connect1 = connect;
			n1 = n;
			y1 = y;
			//TODO: добавьте код конструктора
			//
		}
		/*	Form3()
			{
				//InitializeComponent();
				Hide();
				//std::array<double,100> M;
							//
				//TODO: добавьте код конструктора
				//
			}*/
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				//double M;
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^ dataGridView3;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Date;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N15;
	public: System::Data::OleDb::OleDbDataReader^ oledbRead;
	public: System::Windows::Forms::TextBox^ textBox1;
	public:

	protected:

	public:

	protected:

	public:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->N1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->N2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->N3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->N4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->N5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->N6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->N7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->N8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->N9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->N10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->N11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->N12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->N13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->N14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->N15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox10 = (gcnew System::Windows::Forms::ListBox());
			this->listBox9 = (gcnew System::Windows::Forms::ListBox());
			this->listBox8 = (gcnew System::Windows::Forms::ListBox());
			this->listBox7 = (gcnew System::Windows::Forms::ListBox());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(16) {
				this->Date, this->N1,
					this->N2, this->N3, this->N4, this->N5, this->N6, this->N7, this->N8, this->N9, this->N10, this->N11, this->N12, this->N13, this->N14,
					this->N15
			});
			this->dataGridView3->Location = System::Drawing::Point(138, 124);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 15;
			this->dataGridView3->Size = System::Drawing::Size(268, 246);
			this->dataGridView3->TabIndex = 6;
			// 
			// Date
			// 
			this->Date->HeaderText = L"Date";
			this->Date->Name = L"Date";
			this->Date->Width = 70;
			// 
			// N1
			// 
			this->N1->HeaderText = L"N1";
			this->N1->Name = L"N1";
			this->N1->Width = 70;
			// 
			// N2
			// 
			this->N2->HeaderText = L"N2";
			this->N2->Name = L"N2";
			this->N2->Width = 70;
			// 
			// N3
			// 
			this->N3->HeaderText = L"N3";
			this->N3->Name = L"N3";
			this->N3->Width = 70;
			// 
			// N4
			// 
			this->N4->HeaderText = L"N4";
			this->N4->Name = L"N4";
			this->N4->Width = 70;
			// 
			// N5
			// 
			this->N5->HeaderText = L"N5";
			this->N5->Name = L"N5";
			this->N5->Width = 70;
			// 
			// N6
			// 
			this->N6->HeaderText = L"N6";
			this->N6->Name = L"N6";
			this->N6->Width = 70;
			// 
			// N7
			// 
			this->N7->HeaderText = L"N7";
			this->N7->Name = L"N7";
			this->N7->Width = 70;
			// 
			// N8
			// 
			this->N8->HeaderText = L"N8";
			this->N8->Name = L"N8";
			this->N8->Width = 70;
			// 
			// N9
			// 
			this->N9->HeaderText = L"N9";
			this->N9->Name = L"N9";
			this->N9->Width = 70;
			// 
			// N10
			// 
			this->N10->HeaderText = L"N10";
			this->N10->Name = L"N10";
			this->N10->Width = 70;
			// 
			// N11
			// 
			this->N11->HeaderText = L"N11";
			this->N11->Name = L"N11";
			this->N11->Width = 70;
			// 
			// N12
			// 
			this->N12->HeaderText = L"N12";
			this->N12->Name = L"N12";
			this->N12->Width = 70;
			// 
			// N13
			// 
			this->N13->HeaderText = L"N13";
			this->N13->Name = L"N13";
			this->N13->Width = 70;
			// 
			// N14
			// 
			this->N14->HeaderText = L"N14";
			this->N14->Name = L"N14";
			this->N14->Width = 70;
			// 
			// N15
			// 
			this->N15->HeaderText = L"N15";
			this->N15->Name = L"N15";
			this->N15->Width = 70;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(34, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(86, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(156, 106);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(34, 80);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(86, 20);
			this->textBox2->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Коэффициент сглаживания";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Требуемая точность";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(41, 124);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 38);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Произвести декомпозицию";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(8, 34);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(109, 147);
			this->listBox1->TabIndex = 14;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->listBox10);
			this->groupBox2->Controls->Add(this->listBox9);
			this->groupBox2->Controls->Add(this->listBox8);
			this->groupBox2->Controls->Add(this->listBox7);
			this->groupBox2->Controls->Add(this->listBox6);
			this->groupBox2->Controls->Add(this->listBox4);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->listBox2);
			this->groupBox2->Controls->Add(this->listBox1);
			this->groupBox2->Location = System::Drawing::Point(169, 417);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1013, 183);
			this->groupBox2->TabIndex = 15;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Значения";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(935, 18);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(40, 13);
			this->label11->TabIndex = 28;
			this->label11->Text = L"|Mi-M0|";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(813, 18);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(47, 13);
			this->label10->TabIndex = 27;
			this->label10->Text = L"|M+ - M-|";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(677, 18);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(17, 13);
			this->label9->TabIndex = 26;
			this->label9->Text = L"A-";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(547, 18);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 13);
			this->label8->TabIndex = 25;
			this->label8->Text = L"A+";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(294, 18);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 13);
			this->label6->TabIndex = 24;
			this->label6->Text = L"M-";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(163, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 13);
			this->label5->TabIndex = 23;
			this->label5->Text = L"M+";
			// 
			// listBox10
			// 
			this->listBox10->FormatString = L"N6";
			this->listBox10->FormattingEnabled = true;
			this->listBox10->Location = System::Drawing::Point(902, 34);
			this->listBox10->Name = L"listBox10";
			this->listBox10->Size = System::Drawing::Size(105, 147);
			this->listBox10->TabIndex = 22;
			// 
			// listBox9
			// 
			this->listBox9->FormatString = L"N6";
			this->listBox9->FormattingEnabled = true;
			this->listBox9->Location = System::Drawing::Point(770, 34);
			this->listBox9->Name = L"listBox9";
			this->listBox9->Size = System::Drawing::Size(126, 147);
			this->listBox9->TabIndex = 21;
			// 
			// listBox8
			// 
			this->listBox8->FormatString = L"N6";
			this->listBox8->FormattingEnabled = true;
			this->listBox8->Location = System::Drawing::Point(638, 34);
			this->listBox8->Name = L"listBox8";
			this->listBox8->Size = System::Drawing::Size(126, 147);
			this->listBox8->TabIndex = 20;
			// 
			// listBox7
			// 
			this->listBox7->FormatString = L"N6";
			this->listBox7->FormattingEnabled = true;
			this->listBox7->Location = System::Drawing::Point(506, 34);
			this->listBox7->Name = L"listBox7";
			this->listBox7->Size = System::Drawing::Size(126, 147);
			this->listBox7->TabIndex = 19;
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->Location = System::Drawing::Point(250, 34);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(118, 147);
			this->listBox6->TabIndex = 18;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(123, 34);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(121, 147);
			this->listBox4->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(429, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"A";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(54, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"M";
			// 
			// listBox2
			// 
			this->listBox2->FormatString = L"N6";
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(374, 34);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(126, 147);
			this->listBox2->TabIndex = 15;
			// 
			// chart2
			// 
			chartArea2->AxisX->Title = L"M";
			chartArea2->AxisY->Title = L"A";
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(849, 8);
			this->chart2->Name = L"chart2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"M,A";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Legend = L"Legend1";
			series4->Name = L"M-, A-";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Legend = L"Legend1";
			series5->Name = L"M+,A+";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series6->Legend = L"Legend1";
			series6->Name = L" ";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series7->Legend = L"Legend1";
			series7->Name = L"  ";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series8->Legend = L"Legend1";
			series8->Name = L"   ";
			this->chart2->Series->Add(series3);
			this->chart2->Series->Add(series4);
			this->chart2->Series->Add(series5);
			this->chart2->Series->Add(series6);
			this->chart2->Series->Add(series7);
			this->chart2->Series->Add(series8);
			this->chart2->Size = System::Drawing::Size(485, 401);
			this->chart2->TabIndex = 18;
			this->chart2->Text = L"chart2";
			title2->Name = L"Title1";
			title2->Text = L"График допустимых отклонений от нормы";
			this->chart2->Titles->Add(title2);
			this->chart2->Click += gcnew System::EventHandler(this, &Form3::chart2_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->listBox3);
			this->groupBox3->Location = System::Drawing::Point(1188, 423);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(146, 171);
			this->groupBox3->TabIndex = 19;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Контроль устойчивости";
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(15, 19);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(125, 147);
			this->listBox3->TabIndex = 20;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(41, 179);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(91, 38);
			this->button5->TabIndex = 21;
			this->button5->Text = L"Закрыть";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form3::button5_Click);
			// 
			// listBox5
			// 
			this->listBox5->Enabled = false;
			this->listBox5->FormattingEnabled = true;
			this->listBox5->Location = System::Drawing::Point(9, 18);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(136, 147);
			this->listBox5->TabIndex = 22;
			this->listBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &Form3::listBox5_SelectedIndexChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->listBox5);
			this->groupBox4->Location = System::Drawing::Point(12, 429);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(151, 171);
			this->groupBox4->TabIndex = 23;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Дата измерения";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(223, 8);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 25;
			// 
			// chart1
			// 
			chartArea1->AxisX->Title = L"M";
			chartArea1->AxisY->Title = L"A";
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(391, 8);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Траектория";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series2->Legend = L"Legend1";
			series2->Name = L"Координаты";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series9->Legend = L"Legend1";
			series9->Name = L"Прогнозируемая тр";
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series10->Legend = L"Legend1";
			series10->Name = L"Прогнозная точка";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series9);
			this->chart1->Series->Add(series10);
			this->chart1->Size = System::Drawing::Size(452, 401);
			this->chart1->TabIndex = 17;
			this->chart1->Text = L"chart1";
			title1->Name = L"Title1";
			title1->Text = L"График фазовой траектории";
			this->chart1->Titles->Add(title1);
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1346, 613);
			this->ControlBox = false;
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView3);
			this->Name = L"Form3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"1 декомпозиция";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		double E = 0.017;
		double Kc = 0.2;
		//	int n3 = 0;
#pragma endregion
		double d1 = 0;
	private: System::Void Form3_Load(System::Object^ sender, System::EventArgs^ e) {
		int	i = 0;
		if (n1 == 0)
		{
			MessageBox::Show("Выберите базу данных!");
			button1->Enabled = false;
		}
		else {
			connect1->Open();
			String^ command1 = gcnew String("SELECT * FROM Variant7");
			System::Data::OleDb::OleDbCommand^ command = gcnew System::Data::OleDb::OleDbCommand(command1, this->connect1);
			System::Data::OleDb::OleDbDataReader^ oledbRead = command->ExecuteReader();
			while (oledbRead->Read()) {                            // чтение и вывод в dataGridView
				dataGridView3->Rows->Add();
				dataGridView3->Rows[i]->Cells[0]->Value = oledbRead["Дата (месяц)"];
				dataGridView3->Rows[i]->Cells[1]->Value = oledbRead["1"];
				dataGridView3->Rows[i]->Cells[2]->Value = oledbRead["2"];
				dataGridView3->Rows[i]->Cells[3]->Value = oledbRead["3"];
				dataGridView3->Rows[i]->Cells[4]->Value = oledbRead["4"];
				dataGridView3->Rows[i]->Cells[5]->Value = oledbRead["5"];
				dataGridView3->Rows[i]->Cells[6]->Value = oledbRead["6"];
				dataGridView3->Rows[i]->Cells[7]->Value = oledbRead["7"];
				dataGridView3->Rows[i]->Cells[8]->Value = oledbRead["8"];
				dataGridView3->Rows[i]->Cells[9]->Value = oledbRead["9"];
				dataGridView3->Rows[i]->Cells[10]->Value = oledbRead["10"];
				dataGridView3->Rows[i]->Cells[11]->Value = oledbRead["11"];
				dataGridView3->Rows[i]->Cells[12]->Value = oledbRead["12"];
				dataGridView3->Rows[i]->Cells[13]->Value = oledbRead["13"];
				dataGridView3->Rows[i]->Cells[14]->Value = oledbRead["14"];
				dataGridView3->Rows[i++]->Cells[15]->Value = oledbRead["15"];
				if (i == 15)
					break;
			}
			n1 = 0;
			oledbRead->Close();
			connect1->Close();
			//dataGridView3->Rows->RemoveAt(dataGridView3->RowCount - 1);
		}
		textBox1->Text = Convert::ToString(E);
		textBox2->Text = Convert::ToString(Kc);

	}

	public:  int n3;
		  double Mprog1 = 0;
		  double alphaProg1 = 0;
		  StreamWriter^ sw = gcnew StreamWriter("..\\Reports\\_ini\\" + "Osn_vychisleniya.ini", false, Encoding::Unicode, 1);  //для записи в файл о основных вычислениях
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		listBox5->Enabled = true;
		E = Convert::ToDouble(textBox1->Text);
		Kc = Convert::ToDouble(textBox2->Text);
		double M[100];                         // расчет модуля М
		double V[100];
		double A[100];                         // расчет модуля А
		double Mmax = 0;
		double Mmin = 9999999;
		double Amax = 0;
		double Amin = 0;
		double Splus = 0;
		double Sminu = 0;
		double Mplus[100];
		double Mminu[100];
		double Vplus[100];
		double Vminu[100];
		double Aplus[100];
		double Aminu[100];
		double Mmod1[100];
		double Mmod2[100];
		n3 = dataGridView3->RowCount;
		sw->WriteLine("Вычисления модуля М, 1 декомпозиция:");
		listBox1->Items->Clear();
		listBox2->Items->Clear();
		listBox3->Items->Clear();
		listBox4->Items->Clear();
		listBox6->Items->Clear();
		listBox7->Items->Clear();
		listBox8->Items->Clear();
		listBox9->Items->Clear();
		listBox10->Items->Clear();
		for (int i = 0; i < dataGridView3->RowCount; i++)
		{
			double H = 0;
			double Hplus = 0;
			double Hminu = 0;
			for (int j = 1; j < 16; j++)
			{
				H = H + Convert::ToDouble(dataGridView3->Rows[i]->Cells[j]->Value) * Convert::ToDouble(dataGridView3->Rows[i]->Cells[j]->Value);
				Hplus = Hplus + (Convert::ToDouble(dataGridView3->Rows[i]->Cells[j]->Value) + Convert::ToDouble(E)) * (Convert::ToDouble(dataGridView3->Rows[i]->Cells[j]->Value) + Convert::ToDouble(E));
				Hminu = Hminu + (Convert::ToDouble(dataGridView3->Rows[i]->Cells[j]->Value) - Convert::ToDouble(E)) * (Convert::ToDouble(dataGridView3->Rows[i]->Cells[j]->Value) - Convert::ToDouble(E));
			}
			M[i] = sqrt(H);
			Mplus[i] = sqrt(Hplus);
			listBox4->Items->Add(Mplus[i]);
			Mminu[i] = sqrt(Hminu);
			listBox6->Items->Add(Mminu[i]);
			Mmod1[i] = fabs(Mplus[i] - Mminu[i]);
			listBox9->Items->Add(Mmod1[i]);
			Mmod2[i] = fabs(M[i] - M[0]);
			listBox10->Items->Add(Mmod2[i]);
			if ((fabs(Mplus[i] - Mminu[i]) <= (M[i] - M[0]))) {
				listBox3->Items->Add("В допуске");
			}
			else {
				listBox3->Items->Add("Вне допуска");
				MessageBox::Show("Объект неустойчив. Требуется дальнейшее рассмотрение системы");
			}
			if (Mmin > M[i])
			{
				Mmin = M[i];
			}
			if (Mmax < M[i]) {
				Mmax = M[i];
			}
			listBox1->Items->Add(M[i]);				  //вывод в listBox1
			sw->WriteLine(Convert::ToString(M[i]));   //запись в файл информации о вычислении модуля М
		}

		sw->WriteLine("Вычисления модуля А, 1 декомпозиция:");
		for (int i = 0; i < dataGridView3->RowCount; i++)
		{
			V[i] = 0;
			Vplus[i] = 0;
			Vminu[i] = 0;
			for (int j = 1; j < 16; j++)
			{
				V[i] = V[i] + Convert::ToDouble(dataGridView3->Rows[0]->Cells[j]->Value) * Convert::ToDouble(dataGridView3->Rows[i]->Cells[j]->Value);
				Vplus[i] = Vplus[i] + (Convert::ToDouble(dataGridView3->Rows[0]->Cells[j]->Value) + Convert::ToDouble(E)) * (Convert::ToDouble(dataGridView3->Rows[i]->Cells[j]->Value) + Convert::ToDouble(E));
				Vminu[i] = Vminu[i] + (Convert::ToDouble(dataGridView3->Rows[0]->Cells[j]->Value) - Convert::ToDouble(E)) * (Convert::ToDouble(dataGridView3->Rows[i]->Cells[j]->Value) - Convert::ToDouble(E));
			}
		}

		for (int i = 0; i < dataGridView3->RowCount; i++)
		{
			A[i] = acos(V[i] / (M[0] * M[i]));							//вычисление модуля А
			Aplus[i] = acos(Vplus[i] / (Mplus[0] * Mplus[i]));
			listBox7->Items->Add(Aplus[i]);
			Aminu[i] = acos(Vminu[i] / (Mminu[0] * Mminu[i]));
			listBox8->Items->Add(Aminu[i]);
			if (isnan(A[i])) {
				A[i] = 0;
			}
			if (isnan(Aminu[i])) {
				Aminu[i] = 0;
			}
			if (isnan(Aplus[i])) {
				Aplus[i] = 0;
			}

			listBox2->Items->Add(A[i]);
			sw->WriteLine(Convert::ToString(A[i]));          //запись в файл информации о вычислении модуля А
		}
		
		
		double Mprog[100];
		double alphaProg[100];
		double sumProg = 0;
		double sumProgAlpha = 0;
		double sredn = 0;
		double srednAlpha = 0;
		for (int i = 0; i < dataGridView3->RowCount; i++) {
			sumProg = sumProg + M[i];
		}
		sredn = sumProg / dataGridView3->RowCount;
		Mprog[0] = M[0] * Convert::ToDouble(Kc) + (1 - Convert::ToDouble(Kc)) * sredn;
		for (int i = 1; i < dataGridView3->RowCount; i++) {
			Mprog[i] = M[i] * Convert::ToDouble(Kc) + (1 - Convert::ToDouble(Kc)) * Mprog[i - 1];
		}
		Mprog1 = sredn * Convert::ToDouble(Kc) + (1 - Convert::ToDouble(Kc)) * Mprog[dataGridView3->RowCount - 1];

		for (int i = 0; i < dataGridView3->RowCount; i++) {
			sumProgAlpha = sumProgAlpha + A[i];
		}
		srednAlpha = sumProgAlpha / dataGridView3->RowCount;
		alphaProg[0] = A[0] * Convert::ToDouble(Kc) + (1 - Convert::ToDouble(Kc)) * srednAlpha;
		for (int i = 1; i < dataGridView3->RowCount; i++) {
			alphaProg[i] = A[i] * Convert::ToDouble(Kc) + (1 - Convert::ToDouble(Kc)) * alphaProg[i - 1];
		}
		alphaProg1 = srednAlpha * Convert::ToDouble(Kc) + (1 - Convert::ToDouble(Kc)) * alphaProg[dataGridView3->RowCount - 1];
		listBox5->Items->Clear();
		for (int i1 = 0; i1 < dataGridView3->RowCount; i1++) {
			listBox5->Items->Add(dataGridView3->Rows[i1]->Cells[0]->Value);
		}
		chart1->Series[0]->Points->Clear();
		chart1->Series[1]->Points->Clear();
		chart1->Series[2]->Points->Clear();
		chart1->Series[3]->Points->Clear();
		chart2->Series[1]->Points->Clear();
		chart2->Series[0]->Points->Clear();
		chart2->Series[2]->Points->Clear();
		chart2->Series[3]->Points->Clear();
		chart2->Series[4]->Points->Clear();
		chart2->Series[5]->Points->Clear();
		for (int i = 0; i < dataGridView3->RowCount; i++)
		{
			chart2->Series[1]->Points->AddXY(Mminu[i], A[i]);                 //вывод в chart
			chart2->Series[0]->Points->AddXY(M[i], A[i]);
			chart2->Series[2]->Points->AddXY(Mplus[i], A[i]);
			chart2->Series[4]->Points->AddXY(Mminu[i], A[i]);
			chart2->Series[3]->Points->AddXY(M[i], A[i]);
			chart2->Series[5]->Points->AddXY(Mplus[i], A[i]);
			chart1->Series[0]->Color = Color::Black;
			chart1->Series[0]->Points->AddXY(M[i], A[i]);
			chart1->Series[1]->Points->AddXY(M[i], A[i]);
			

		}
		for (int i = 0; i < Convert::ToInt32(n3); i++)
					{
						chart1->Series[2]->Points->AddXY(listBox1->Items[i], listBox2->Items[i]);
					}
					chart1->Series[2]->Color = Color::Green;
					chart1->Series[3]->Color = Color::Red;
					chart1->Series[2]->Points->AddXY(Mprog1, alphaProg1);
					chart1->Series[3]->Points->AddXY(Mprog1, alphaProg1);
			}



		   //private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {     //переход в следующую форму Form4
			   //Form4^ f4 = gcnew Form4(listBox1,listBox2,Mpr1,alphaPr1,n3);
			   //f4->Show();
		   //}
	private: System::Void chart2_Click(System::Object^ sender, System::EventArgs^ e) {   //Zoom по Y
		//chart2->ChartAreas[0]->AxisY->ScaleView->Zoom(0.0000, 0.0003);
	}

		   //private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {   //переход в следующую форму Form4
			   //Form5 ^ f5 = gcnew Form5(dataGridView3,textBox2,d,sw);
			   //f5->Show();
		   //}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		sw->Close();
	}
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
		//	chart1->ChartAreas[0]->AxisY->ScaleView->Zoom(-0.0002, 0.0003);
	}
	private: System::Void listBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		listBox1->SelectedIndex = listBox5->SelectedIndex;
		listBox2->SelectedIndex = listBox5->SelectedIndex;
		listBox3->SelectedIndex = listBox5->SelectedIndex;
		listBox4->SelectedIndex = listBox5->SelectedIndex;
		listBox6->SelectedIndex = listBox5->SelectedIndex;
		listBox7->SelectedIndex = listBox5->SelectedIndex;
		listBox8->SelectedIndex = listBox5->SelectedIndex;
		listBox9->SelectedIndex = listBox5->SelectedIndex;
		listBox10->SelectedIndex = listBox5->SelectedIndex;
	}





};

}