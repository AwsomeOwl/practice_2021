// practice_2021.cpp : main project file.

#include "stdafx.h"
#include "StartWindow.h"
#include <vector>
#include "Client.cpp"
using namespace std;
using namespace practice_2021;
[STAThreadAttribute]

int main()
{
	vector<Client^> ClientVector = {};
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew StartWindow());
	return 0;
}
