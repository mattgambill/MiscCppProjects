#include<iostream>
#include"Header.h"
using namespace std;

void outPut();
 
int main() {
	outPut();
	magi();
	return 0;
}
void outPut() {
	int a, b;
	cout << "Enter a and b ";
	cin >> a >> b;
	while ((a < 2) || (b < 2)) {
		cout << "a and b must be greater than 2 and a less than b " << endl;
		cout << "Enter a and b ";
		cin >> a >> b;
	}
	while (a > b) {
	cout << "a and b must be greater than 2 and a less than b " << endl;
	cout << "Enter a and b ";
	cin >> a >> b;
	}
	
}