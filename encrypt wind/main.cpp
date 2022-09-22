#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <tuple>
#include <cmath>
#include <msclr\marshal_cppstd.h>

#include "MyForm.h"

using namespace std;

using namespace System::Windows::Forms;


using namespace System;
using namespace msclr::interop;


[STAThreadAttribute]
int main()
{
	setlocale(0, "");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	encrypt::MyForm form;
	Application::Run(% form);
}