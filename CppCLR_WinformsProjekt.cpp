#include "stdafx.h"
#include "Form1.h"
#include "Form2.h"
#include "Form3.h"
#include <string>
using namespace System;
using namespace System::Windows::Forms;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace System::Drawing;
using namespace CppCLR_WinformsProjekt1;

[STAThread]
int main() {
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLR_WinformsProjekt1::Form1()); 
	return 0;
}