#include<iostream>
#include<Windows.h>
//#include "exit.h"
#include "header.h"
using namespace std;
//void exit(char & userChar);
int main() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); // HANDLE FOR TEXT COLOR. OS SPECIFIC!! 
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY); //text color FORGROUND_XXX
	char userChar = '?';
	cout << "Hello world!\n";
	rootTable();
	char user;
	exit(user);
	return 0;
}