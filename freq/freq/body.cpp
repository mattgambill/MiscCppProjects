#include "Header.h"

void numVowels::init_vectors(vector<char>& vowels, vector<int>& frequencies)
{
	vowels = { 'a','e','i','o','u','y' };
	for (int i = 0; i < 6; i++) {
		frequencies.push_back(0);
	}
}

string numVowels::read_text(const string & prompt)
{
	cout << prompt;
	string userInput;
	getline(cin, userInput);
	return userInput;
}

bool numVowels::is_alphabetic(const char character)
{
	if (((character >= 65) && (character <= 90)) || ((character >= 97) && (character <= 122))) {
		return true;
	}
	else {
		return false;
	}
}

void numVowels::create_list(const string & str_text, vector<char>& vec_text)
{
	for (int i = 0; i < str_text.size(); i++) {
		if (is_alphabetic(str_text.at(i))) {
			vec_text.push_back(str_text.at(i));
		}
	}
}

bool numVowels::is_member(const vector<char>& list, char character)
{
	for (int i = 0; i < list.size(); i++) {
		if (list.at(i) == character) {
			return true;
		}
	}
	return false;
}

int numVowels::find_index(const vector<char>& list, char character)
{
	for (int i = 0; i < list.size(); i++) {
		if (list.at(i) == character) {
			return i;
		}
	}
	return -1;
}

int numVowels::compute_vowel_freqs(const vector<char>& text, const vector<char>& vowels, vector<int>& freqs)
{
	int index, numConsonants(0);
	for (int i = 0; i < text.size(); i++) {
		if (is_member(vowels, tolower(text.at(i)))) {
			index = find_index(vowels, tolower(text.at(i)));
			freqs.at(index)++;
		}
		else {
			numConsonants++;
		}
	}
	return numConsonants;
}

void numVowels::display_characters(const vector<char>& characters, const int colwidth)
{
	cout << " ";
	for (int i = 0; i < characters.size(); i++) {
		if (i < characters.size() - 1) {
			cout << characters.at(i) << "," << setw(colwidth);
		}
		else {
			cout << characters.at(i);
		}
	}
	cout << endl;
}

void numVowels::display_freqs(const vector<int>& freqs, const int colwidth)
{
	cout << " ";
	for (int i = 0; i < freqs.size(); i++) {
		if (i < freqs.size() - 1) {
			cout << freqs.at(i) << "," << setw(colwidth);
		}
		else {
			cout << freqs.at(i);
		}
	}
	cout << endl;
}