#pragma once
#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
//function prototypes
class ReadData {
public:

	void data(const int, vector<double>&);

private:
	const int NUM_ELEM = 93;
	string userElement;
	bool foundElement;
	int i, j, k;
	
};
#endif
