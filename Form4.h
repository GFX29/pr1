#pragma once
#include "Form2.h"
#include "Form3.h"
#include "Form4.h"
#include <array>
namespace CppCLR_WinformsProjekt1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public: System::Windows::Forms::ListBox^  listBox3;
	public: System::Windows::Forms::ListBox^  listBox5;
	public: System::Windows::Forms::ListBox^  listBox7;
	public: double ^ Mpr3;
	public: double ^ alphaPr3;
	public: int ^ kol;
	public:

		Form ^ f3;
		Form4(System::Windows::Forms::ListBox^  listBox1, System::Windows::Forms::ListBox^  listBox2, double^ Mpr1, double ^ alphaPr1, int ^ n3)
		{
			InitializeComponent();
			listBox5 = listBox1;
			listBox7 = listBox2;
			Mpr3 = Mpr1;
			alphaPr3 = alphaPr1;
			kol = n3;
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox4;
	protected:

	protected:

	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::GroupBox^  groupBox1;

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
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(6, 17);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(222, 160);
			this->listBox3->TabIndex = 0;
			// 
			// listBox4
			// 
			this->listBox4->FormatString = L"N6";
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(295, 17);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(224, 160);
			this->listBox4->TabIndex = 1;
			// 
			// chart1
			// 
			chartArea1->AxisX->Title = L"M";
			chartArea1->AxisY->Title = L"A";
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Траектория";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series2->Legend = L"Legend1";
			series2->Name = L"Прогн-ая точка";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(525, 290);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			title1->Name = L"Title1";
			title1->Text = L"График прогнозной точки";
			this->chart1->Titles->Add(title1);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->listBox3);
			this->groupBox1->Controls->Add(this->listBox4);
			this->groupBox1->Location = System::Drawing::Point(12, 319);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(525, 183);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Прогнозные значения";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form4::groupBox1_Enter);
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(549, 514);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart1);
			this->Name = L"Form4";
			this->Text = L"Прогнозное значение";
			this->Load += gcnew System::EventHandler(this, &Form4::Form4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form4_Load(System::Object^  sender, System::EventArgs^  e) {
		for (int i = 0; i < Convert::ToInt32(kol); i++)
		{
			listBox3->Items->Add(listBox5->Items[i]);
			listBox4->Items->Add(listBox7->Items[i]);
		}
		listBox3->Items->Add("Mпр "+Mpr3);
		listBox4->Items->Add("Alphaпр " + alphaPr3);
		for (int i = 0; i < Convert::ToInt32(kol); i++)
		{
			chart1->Series[0]->Points->AddXY(listBox5->Items[i], listBox7->Items[i]);
		}
		chart1->Series[1]->Color = Color::Red;
		chart1->Series[1]->Points->AddXY(Mpr3, alphaPr3);  
		chart1->Series[0]->Points->AddXY(Mpr3, alphaPr3);
		chart1->SaveImage("..\\Reports\\_bmp\\" + "Grafik_prognoznoi_tochki_1_dekompoziciya.bmp", System::Drawing::Imaging::ImageFormat::Bmp);
	}
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
