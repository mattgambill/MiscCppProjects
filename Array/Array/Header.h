#pragma once
#ifndef HEADER_H
#define HEADER_H
#include<iostream>
#include<vector>
using namespace std;

const int VECTOR_SIZE(20);

class functions {
public:
	

	//read list
	void read_list(vector<int>&, int& array_length);
	//print vector
	void print_array(vector<int>&, int array_length);
	//find_max
	int find_max(vector<int>&, int array_length);
	//array_add
	void array_add(int x, vector<int>&, int array_length);
private:
	int max = 0;
	int i; //index variable
	int j = -1; //j is what the user inputs 

};
#endif