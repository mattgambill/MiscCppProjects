#include <iostream>
#include "header.h"
using namespace std;
void exit(char & userChar) {
	while (userChar != 'q') {
		cout << "enter q to quit: ";
		cin >> userChar;
	}
}