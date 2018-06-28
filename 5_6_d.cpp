//(Averaging Integers) Write a program that uses a for statement to calculate the average of several integers. Assume the last value read is the sentinel 9999 . For example, the sequence 10 8 11 7 9 9999 indicates that the program should calculate the average of all the values preceding 9999 .
#include <iostream>
using namespace std;

int main()
{	
	int count =0, total = 0, value;
	cout<<"Enter an integer(9999 to end): ";
	cin>>value;
	while(value != 9999)
	{	
		total += value;
		++count;
		cout<<"Enter next integer(9999 to end): ";
		cin>> value; 
	}
	if(count != 0)
		cout<<"\nThe average is: "<< static_cast<double> (total)/count<<endl;
	else
		cout<<"No values were entered."<<endl;
	return 0;
}

