/* clock example: frequency of primes */
#include <stdio.h>      /* printf */
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
#include <math.h>       /* sqrt */
#include<iostream>
using namespace std;

int main()
{
	clock_t t;
	int f(0);
	t = clock();
	/*printf("Calculating...\n");
	f = frequency_of_primes(99999);
	printf("The number of primes lower than 100,000 is: %d\n", f);*/
	while (float(t) / CLOCKS_PER_SEC < 1)
	{
		f++;
		t -= clock();
		cout << f << endl;
	}

	printf("It took me %d clicks (%f seconds).\n", t, ((float)t) / CLOCKS_PER_SEC);
	system("pause");
	return 0;
}
