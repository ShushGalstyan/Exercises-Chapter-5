//(Find the Smallest Integer) Write a program that uses a for statement to find the smallest of several integers. Assume that the first value read specifies the number of values remaining.
#include <iostream>
using namespace std;
int main()
{
	int smallest_int,  value, number;
	cout << "Enter the number of integers to be processed: ";	
	cin>>number;
	cout<<"Enter an integer: ";
	cin>>smallest_int;
	for(int i =2 ; i<=number; ++i)
	{
		cout<<"Enter next integer: ";
		cin>>value;
		if( value<smallest_int )
			smallest_int = value;
	}
	cout<<"Smallest number is: "<< smallest_int << endl;
	return 0;

}
