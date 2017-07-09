#include<cstdlib>
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
string x;
  ifstream fin;
  fin.open("hello.txt",ios::in);
  if(!fin.is_open()){
    cerr<<"Unable to open file hellofile.txt"<<endl;
	cin.get();
    exit(1);
  }
getline(fin,x);
 
while(!fin.fail()){
cout<<x<<endl;
getline(fin,x);
}
  fin.close();
  cin.get();
  return 0;
}