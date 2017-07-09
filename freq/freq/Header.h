#pragma once
#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;
//function protypes/calss definition
class numVowels {
public:
	void init_vectors(vector<char> & vowels, vector<int> & frequencies);
	string read_text(const string & prompt);
	bool is_alphabetic(const char character);
	void create_list(const string & str_text, vector<char> & vec_text);
	bool is_member(const vector<char> & list, char character);
	int find_index(const vector<char> & list, char character);
	int compute_vowel_freqs(const vector<char> & text, const vector<char> & vowels, vector<int> & freqs);
	void display_characters(const vector<char> & characters, const int colwidth);
	void display_freqs(const vector<int> & freqs, const int colwidth);

};
#endif