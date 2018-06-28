//(Product of Odd Integers) Write a program that uses a for statement to calculate and print the product of the odd integers from 1 to 15.'
#include <iostream>
using namespace std;
int main()
{
	int product=1;
	for(long i = 1; i<=15;++i)
		if(i % 2 == 1)
			product *= i;
	cout<< "Product of the integers from 1 to 15 is : " << product<<endl;
	return 0;

}
