#include "MyForm.h"
#include <ctime>
//#include <MyForm1.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	srand(time(NULL));
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Practick::MyForm form;
	Application::Run(% form);
}