#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int count = 0;
	double  a0, a, v1, v2, k,j=0, purity, epsilon,extracted_i,extraacted_tot=0;

	cout << "Enter total mass of solute: ";
	cin >> a;
	cout << "Enter volume organic solvent (mL): ";
	cin >> v1;
	cout << "Enter volume water (mL): ";
	cin >> v2;
	cout << "Enter K: ";
	cin >> k;
	cout << "Enter purity of product (0-0.9999999)\n **Note do not enter 1**\n ";
	cin >> purity;
	epsilon = 1 - purity;
	a0 = a;
	if (epsilon > 0) {
		while (abs(1-j)>=epsilon) {
			count++;
			extracted_i = (a0*k*v1) / (k*v1 + v2);
			extraacted_tot += extracted_i;
			j = extraacted_tot / a;
			a0 = a0 - extraacted_tot;
		}
	}
	else
	{
		cout << "***ERROR INVALID ENTRY FOR PURITY***\n***Exiting***\n";
	}


	cout << "It would take " << count << " times to acheive the purity you desire.";



	//exit 
	char us('?');
	while (us != 'q')
	{
		cout << "enter q to quit: ";
		cin >> us;

	}
	return 0;
}
