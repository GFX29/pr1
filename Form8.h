#pragma once

namespace CppCLR_WinformsProjekt1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form8
	/// </summary>
	public ref class Form8 : public System::Windows::Forms::Form
	{
	public: DataGridView ^ dataGridView12;
	public:
		Form8(DataGridView ^ dataGridView5)
		{
			dataGridView12 = dataGridView5;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form8()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
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
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(684, 403);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title1->Name = L"Title1";
			title1->Text = L"График осадок";
			this->chart1->Titles->Add(title1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(649, 443);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form8::button1_Click);
			// 
			// Form8
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(736, 478);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Name = L"Form8";
			this->Text = L"График средних осадок";
			this->Load += gcnew System::EventHandler(this, &Form8::Form8_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form8_Load(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Double *MarkSum = new Double[100];
		Double *AvPros = new Double[100];
		for (int i = 1; i < dataGridView12->ColumnCount; i++)
		{
			MarkSum[i] = 0;
			for (int j = 0; j < dataGridView12->RowCount; j++)
			{
				for (int k = 1; k < dataGridView12->RowCount; k++)
				{
					MarkSum[i] = MarkSum[i] + (Convert::ToDouble(dataGridView12->Rows[j]->Cells[i]->Value) - Convert::ToDouble(dataGridView12->Rows[k]->Cells[i]->Value));
				}
				AvPros[j] = MarkSum[i] / dataGridView12->RowCount;
			}
		}
		chart1->Series[0]->Points->Clear();
		for (int i = 0; i < dataGridView12->RowCount; i++)
		{
			chart1->Series[0]->Points->AddXY((i + 1), AvPros[i]);
		}

		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_srednix_osadkov.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
		
	}
	};
}
