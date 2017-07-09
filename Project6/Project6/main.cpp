#include <iostream>
#include <vector>
#include <string>

using namespace std;
//functions
double gradeVals(int NumClasses, string & userGrade);

int main() {
	int numClasses = 0;
	int sum(0);
	int hours;
	double points(0);
	string userGrade;

	cout << "Welcome to The GPA Calculator! \nPlease enter the number of classes you are taking: ";
	cin >> int(numClasses);
	vector<int> gradeValues(numClasses);
	vector<double> gVal(numClasses);
	for (int i = 0; i < numClasses; i++) {
		cout << "Enter Hours for Class " << i + 1 << ": ";
		cin >> hours;
		gradeValues.at(i) = hours;
		sum += hours;
		cout << endl;
	}
	for (int i = 0; i < numClasses; i++){
		cout << "Enter grade for class" << i + 1 << ": ";
		cin >> userGrade;
		gVal.at(i) = gradeVals(numClasses, userGrade);
	}
	for (int i = 0; i < numClasses; i++) {
		points += (gVal.at(i) * gradeValues.at(i));
	}
	double GPA = points / double(sum);
	cout << "Your GPA is: " << GPA << endl;
	
	
	
//exit
	char str1('?');
	while (str1 != 'q') {
		cout << "...ENTER  'q' TO EXIT...\n";
		cin >> str1;
	}
	return 0;
}

//Function Definitions
double gradeVals(int NumClasses, string & userGrade) {
	double gradeVal = 0;

		if (userGrade == "A" || userGrade == "a") {
			gradeVal = 4.0;
		}
		else if (userGrade == "A-"|| userGrade=="a-"){
			gradeVal = 3.7;
		}
		else if (userGrade == "B+" ||userGrade == "b+") {
			gradeVal = 3.3;
		}
		else if (userGrade == "B" || userGrade == "b") {
			gradeVal = 3.0;
		}
		else if (userGrade == "B-" || userGrade == "b-") {
			gradeVal = 2.7;
		}
		else if (userGrade == "C+" || userGrade == "c+") {
			gradeVal = 2.3;
		}
		else if (userGrade == "C" || userGrade == "c") {
			gradeVal = 2.0;
		}
		else if (userGrade == "C-" || userGrade == "c-") {
			gradeVal = 1.7;
		}
		else if (userGrade == "D+" || userGrade == "d+") {
			gradeVal = 1.3;
		}
		else if (userGrade == "D" || userGrade == "d") {
			gradeVal = 1.0;
		}
		else if (userGrade == "E") {
			gradeVal = 0;
		}
		else{
			cout << "Grade cannot be found" << endl;
		}
		return gradeVal;
	
	
}
