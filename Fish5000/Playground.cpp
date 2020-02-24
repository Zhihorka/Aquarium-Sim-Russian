#include "Playground.h"

#include <fstream>
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(cli::array<String^>^ arg) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Fish5000::Playground form;
	Application::Run(% form);
}
