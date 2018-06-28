//(Summing Integers) Write a program that uses a for statement to sum a sequence of integers. Assume that the first integer read specifies the number of values remaining to be entered. Your program should read only one value per input statement. A typical input sequence might be
//5 100 200 300 400 500
//where the 5 indicates that the subsequent 5 values are to be summed.
#include <iostream>
using namespace std;

int main()
{
	int value, number, sum =0 ;
	cout<< "Enter the number of value to be processed: ";
	cin>> number;
	for(int i=1; i<=number ; ++i)
	{
		cout<< "Enter a value: ";
		cin>> value;
		sum +=value;
	}
	cout << "Sum of the " << number << " value is " << sum<<endl;
	return 0;

}
