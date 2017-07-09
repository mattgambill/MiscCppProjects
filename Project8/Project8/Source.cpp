#include<iostream>
#include "Windows.h"
#include<string>
using namespace std;

int main() {
	string fileName;
	cout << "Welcome!\nPlease Enter the name of the program." << endl;
	cin >> fileName;
	ShellExecute(NULL, "open",
		"c:\\Users\\Matthew\\Desktop\\gamessTest\\rungms.bat", // program to launch
		NULL,              // parms (will be %1 and %2 in the batch file)
		"c:\\Users\\Matthew\\Desktop\\gamessTest",        // default dir for the batch
		SW_SHOWNORMAL
		);
	system("pause");
	return 0;
}