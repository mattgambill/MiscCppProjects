/*
File: split.cpp
Name: Matt Gambill
Date: 11/13/2015
Instructor Dr. Mirzaei
Synopsis:
*/
#include<iostream>
#include <cstdlib>
using namespace std;

//Function Prototypes
//count counts the number of of evens odds and zeros
int count(int userArray[], int numElements,int &numEvens, int& numOdds);

//split split main array into two arrays containing ether odd or even values
void split(const int userArray[], int evens[], int odds[], const int numElements, const int numEvens, const int numOdds);

//print list prints an array when called
void print_list(int array[], const int arraySize);

int main(){

  int *userArray;
  int *evens;
  int *odds;
  int numEvens(0),numOdds(0),numZeros(0);
  int numElements;
  
  //prompt user 
  cout<<"Enter Number of elements: ";
  cin>>numElements;

  //allocate memory
  userArray = new int[numElements];
  
  //Fill array
  cout<<"Enter list:"<<endl;
  for(int i =0; i < numElements; i++){
    cin>>userArray[i];
  }

  //count number of evens odds and zeros
  numZeros = count(userArray, numElements, numEvens, numOdds);

  //allocate memory for evens array
  evens = new int[numEvens];

  //allocate memory for odds array
  odds = new int[numOdds];

   //split array
  split(userArray, evens, odds, numElements, numEvens, numOdds);

  //print values

  cout<<"Even elements:"<<endl;
  print_list(evens, numEvens);
  cout<<"Odd elements:"<<endl;
  print_list(odds,numOdds);
  cout<<"There were "<<numZeros<<" zero(s) in the list."<<endl;

  //dealocate memory
  delete[]userArray;
  delete[]evens;
  delete[]odds;

  return 0;
}


//Function Definitions:

/*
count counts the number of of evens odds and zeros
userArray is the array the user filled with integers
numElements is the Size of userArray
numEvens is used as a counter varible for the number of evens
numOdds is used as a counter varible for the number of odds
*/
int count(int userArray[], int numElements,int &numEvens, int& numOdds){
	int numZeros(0);  
	for(int i = 0; i < numElements; i++){
		if((userArray[i] % 2 == 0) && userArray[i] != 0){
		numEvens++;	  
    }
    else if(userArray[i] == 0){
		numZeros++;	  
    }
    else{ 
		numOdds++;	  
    }
  }
  return numZeros;
}
/*
split split main array into two arrays containing ether odd or even values
userArray is the array the user input their integers in, with size numElements
evens is the array that contains the even values of userArray, it has size numEvens 
odds is the array that contains the odd values of userArray, it has size numOdds 
*/
void split(const int userArray[], int evens[], int odds[], const int numElements, const int numEvens, const int numOdds){
  //initialize indices for evens and odds arrays.
  int j(0),k(0);

  for(int i =0; i < numElements; i++){
	if((userArray[i] % 2 == 0) && userArray[i]!=0){
		evens[j] = userArray[i];
	  	 j++;
	}
  else if((userArray[i] != 0) && k<=numOdds){
		odds[k] = userArray[i];	
		k++;		
     }  
  }

  if (j > numEvens || k > numOdds) {
	  cerr << "Number of evens or odds does not equal array size" << endl;
	  exit(1);
  }
}

/*
print list prints an array when called
array is an integer array with size arraySize
*/
  void print_list(int array[], const int arraySize){
	for(int i =0; i < arraySize; i++){
      cout<<" "<<array[i];
    }
    cout<<endl;
  }
