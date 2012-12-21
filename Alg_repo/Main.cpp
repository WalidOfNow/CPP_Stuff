#include "MainForm.h"
#using<system.dll>
using namespace System;
using namespace System::IO;
using namespace Alg_repo;

[STAThreadAttribute]
int main(array<System::String ^> ^args)

{

	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew MainForm());
	return 0;
}