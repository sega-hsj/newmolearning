#include "MyForm.h"

using namespace Project2;
using namespace System ::IO;
[STAThread]
int main(array<System::String ^>^args)
{
	Application::EnableVisualStyles();
	Application::Run(gcnew MyForm());

	return 0;
}

