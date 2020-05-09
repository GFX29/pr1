#pragma once

namespace CppCLR_WinformsProjekt1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form9
	/// </summary>
	public ref class Form9 : public System::Windows::Forms::Form
	{
	public: DataGridView ^ dataGridView21;
	public:
		Form9(DataGridView ^ dataGridView5)
		{
			dataGridView21 = dataGridView5;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form9()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(677, 471);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form9::button1_Click);
			// 
			// chart1
			// 
			chartArea2->AxisX->Title = L"M";
			chartArea2->AxisY->Title = L"A";
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Enabled = false;
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(667, 417);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			title2->Name = L"Title1";
			title2->Text = L"График неравномерных осадков";
			this->chart1->Titles->Add(title2);
			// 
			// Form9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(764, 506);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button1);
			this->Name = L"Form9";
			this->Text = L"График неравномерных осадков";
			this->Load += gcnew System::EventHandler(this, &Form9::Form9_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form9_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Double *MarkSum = new Double[100];
		for (int i = 1; i < dataGridView21->ColumnCount; i++)
		{
			MarkSum[i] = 0;
			for (int j = 0; j < dataGridView21->RowCount; j++)
			{
				for (int k = 1; k < dataGridView21->RowCount; k++)
				{
					MarkSum[i] = MarkSum[i] + (Convert::ToDouble(dataGridView21->Rows[j]->Cells[i]->Value) - Convert::ToDouble(dataGridView21->Rows[k]->Cells[i]->Value));
				}
			}
		}
		chart1->Series[0]->Points->Clear();
		for (int i = 1; i < dataGridView21->ColumnCount; i++)
		{
			chart1->Series[0]->Points->AddXY((i), MarkSum[i]);
		}
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_neravnomernyx_osadkov.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
	}
	};
}
