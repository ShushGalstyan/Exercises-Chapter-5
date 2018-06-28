//(Bar Chart) One interesting application of computers is drawing graphs and bar charts.Write a program that reads five numbers (each between 1 and 30). Assume that the user enters onlyExercises valid values. For each number that is read, your program should print a line containing that number of adjacent asterisks. For example, if your program reads the number 7, it should print ******* .
#include <iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Enter 5 numbers between 1 and 30: ";
	for (int i =1; i<=5; ++i)
	{
		cin>>number;
		for(int j =1; j<=number; ++j)
			cout<< "*";
		cout<<endl;
	}
	return 0;
}
