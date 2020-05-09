#pragma once

namespace CppCLR_WinformsProjekt1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form7
	/// </summary>
	public ref class Form7 : public System::Windows::Forms::Form
	{
	public: DataGridView ^ dataGridView10;
	public:
		Form7(DataGridView ^ dataGridView5)
		{
			dataGridView10 = dataGridView5;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  button1;

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
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15"
			});
			this->listBox1->Location = System::Drawing::Point(12, 26);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(131, 147);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form7::listBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(55, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Марки";
			// 
			// chart1
			// 
			chartArea1->AxisX->Title = L"t";
			chartArea1->AxisY->Title = L"H";
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(228, 26);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Series2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Series3";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Legend = L"Legend1";
			series4->Name = L"Series4";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Legend = L"Legend1";
			series5->Name = L"Series5";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series6->Legend = L"Legend1";
			series6->Name = L"Series6";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series7->Legend = L"Legend1";
			series7->Name = L"Series7";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series8->Legend = L"Legend1";
			series8->Name = L"Series8";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series9->Legend = L"Legend1";
			series9->Name = L"Series9";
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series10->Legend = L"Legend1";
			series10->Name = L"Series10";
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series11->Legend = L"Legend1";
			series11->Name = L"Series11";
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series12->Legend = L"Legend1";
			series12->Name = L"Series12";
			series13->ChartArea = L"ChartArea1";
			series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series13->Legend = L"Legend1";
			series13->Name = L"Series13";
			series14->ChartArea = L"ChartArea1";
			series14->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series14->Legend = L"Legend1";
			series14->Name = L"Series14";
			series15->ChartArea = L"ChartArea1";
			series15->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series15->Legend = L"Legend1";
			series15->Name = L"Series15";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Series->Add(series5);
			this->chart1->Series->Add(series6);
			this->chart1->Series->Add(series7);
			this->chart1->Series->Add(series8);
			this->chart1->Series->Add(series9);
			this->chart1->Series->Add(series10);
			this->chart1->Series->Add(series11);
			this->chart1->Series->Add(series12);
			this->chart1->Series->Add(series13);
			this->chart1->Series->Add(series14);
			this->chart1->Series->Add(series15);
			this->chart1->Size = System::Drawing::Size(502, 392);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(745, 451);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Закрыть";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form7::button1_Click);
			// 
			// Form7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(832, 486);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Name = L"Form7";
			this->Text = L"Построение по точкам";
			this->Load += gcnew System::EventHandler(this, &Form7::Form7_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form7_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		String ^ curItem = listBox1->SelectedItem->ToString();
		chart1->ChartAreas[0]->AxisY->ScaleView->Zoom(23.3200, 23.3990);     //интервал
		if (curItem == "1") {
			chart1->Series[0]->Points->Clear();
			for (int i = 0; i < dataGridView10->RowCount; i++) {
				chart1->Series[0]->Points->AddXY(i+1, dataGridView10->Rows[i]->Cells[1]->Value);   //вывод в chart
			}
		}
		if (curItem == "2") {
			chart1->Series[1]->Points->Clear();
			for (int i = 0; i < dataGridView10->RowCount; i++) {
				chart1->Series[1]->Points->AddXY(i + 1, dataGridView10->Rows[i]->Cells[2]->Value);
			}
		}
		if (curItem == "3") {
			chart1->Series[2]->Points->Clear();
			for (int i = 0; i < dataGridView10->RowCount; i++) {
				chart1->Series[2]->Points->AddXY(i + 1, dataGridView10->Rows[i]->Cells[3]->Value);
			}
		}
		if (curItem == "4") {
			chart1->Series[3]->Points->Clear();
			for (int i = 0; i < dataGridView10->RowCount; i++) {
				chart1->Series[3]->Points->AddXY(i + 1, dataGridView10->Rows[i]->Cells[4]->Value);
			}
		}
		if (curItem == "5") {
			chart1->Series[4]->Points->Clear();
			for (int i = 0; i < dataGridView10->RowCount; i++) {
				chart1->Series[4]->Points->AddXY(i + 1, dataGridView10->Rows[i]->Cells[5]->Value);
			}
		}
		if (curItem == "6") {
			chart1->Series[5]->Points->Clear();
			for (int i = 0; i < dataGridView10->RowCount; i++) {
				chart1->Series[5]->Points->AddXY(i + 1, dataGridView10->Rows[i]->Cells[6]->Value);
			}
		}
		if (curItem == "7") {
			chart1->Series[6]->Points->Clear();
			for (int i = 0; i < dataGridView10->RowCount; i++) {
				chart1->Series[6]->Points->AddXY(i + 1, dataGridView10->Rows[i]->Cells[7]->Value);
			}
		}
		if (curItem == "8") {
			chart1->Series[7]->Points->Clear();
			for (int i = 0; i < dataGridView10->RowCount; i++) {
				chart1->Series[7]->Points->AddXY(i + 1, dataGridView10->Rows[i]->Cells[8]->Value);
			}
		}
		if (curItem == "9") {
			chart1->Series[8]->Points->Clear();
			for (int i = 0; i < dataGridView10->RowCount; i++) {
				chart1->Series[8]->Points->AddXY(i + 1, dataGridView10->Rows[i]->Cells[9]->Value);
			}
		}
		if (curItem == "10") {
			chart1->Series[9]->Points->Clear();
			for (int i = 0; i < dataGridView10->RowCount; i++) {
				chart1->Series[9]->Points->AddXY(i + 1, dataGridView10->Rows[i]->Cells[10]->Value);
			}
		}
		if (curItem == "11") {
			chart1->Series[10]->Points->Clear();
			for (int i = 0; i < dataGridView10->RowCount; i++) {
				chart1->Series[10]->Points->AddXY(i + 1, dataGridView10->Rows[i]->Cells[11]->Value);
			}
		}
		if (curItem == "12") {
			chart1->Series[11]->Points->Clear();
			for (int i = 0; i < dataGridView10->RowCount; i++) {
				chart1->Series[11]->Points->AddXY(i + 1, dataGridView10->Rows[i]->Cells[12]->Value);
			}
		}
		if (curItem == "13") {
			chart1->Series[12]->Points->Clear();
			for (int i = 0; i < dataGridView10->RowCount; i++) {
				chart1->Series[12]->Points->AddXY(i + 1, dataGridView10->Rows[i]->Cells[13]->Value);
			}
		}
		if (curItem == "14") {
			chart1->Series[13]->Points->Clear();
			for (int i = 0; i < dataGridView10->RowCount; i++) {
				chart1->Series[13]->Points->AddXY(i + 1, dataGridView10->Rows[i]->Cells[14]->Value);
			}
		}
		if (curItem == "15") {
			chart1->Series[14]->Points->Clear();
			for (int i = 0; i < dataGridView10->RowCount; i++) {
				chart1->Series[14]->Points->AddXY(i + 1, dataGridView10->Rows[i]->Cells[15]->Value);
			}
		}
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_po_tochkam.bmp", System::Drawing::Imaging::ImageFormat::Bmp);  //сохранение
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();    //закрытие
}
};
}
