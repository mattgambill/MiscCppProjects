#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "Header.h"
using namespace std;

int main()
{
	// Define local variables and constants
	vector<char> vowels;
	vector<int> freqs;
	string input;
	vector<char> text;
	int consonants(0);

	const int COLUMNWIDTH = 2;
	numVowels v;
	// Initialize the list of vowels and vowel frequencies.
	// Call function init_vectors with variables vowels and freqs
	v.init_vectors(vowels, freqs);

	// Prompt the user for the input text by calling function read_text	
	input = v.read_text("Enter your text: ");

	// Copy the characters (ignoring non-alphabetic characters) in the input string to the vector of characters in variable text
	// Call function create_list to do this
	v.create_list(input, text);

	// Compute the frequencies of vowels and consonants from the input text containing only alphabetic letters
	// Call function compute_vowel_freqs to do this
	consonants = v.compute_vowel_freqs(text, vowels, freqs);

	// Display the vowels and their frequencies
	// Call functions display_characters and display_freqs
	v.display_characters(vowels, COLUMNWIDTH);
	v.display_freqs(freqs, COLUMNWIDTH);

	// Display the number of consonants. No function calls here.
	cout << "There are " << consonants << " consonants." << endl;

	//exit
	cout << "Press ENTER To Exit... ";
	cin.get();
	return 0;
}