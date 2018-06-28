//(Drawing Patterns with Nested for Loops) Write a program that uses for statements to print the following patterns separately, one below the other. Use for loops to generate the patterns.All asterisks ( * ) should be printed by a single statement of the form cout << '*'; (this causes the asterisks to print side by side). [Hint: The last two patterns require that each line begin with an appropriate number of blanks. Extra credit: Combine your code from the four separate problems into a single program that prints all four patterns side by side by making clever use of nested for loops.]
#include <iostream>
using namespace std;
int main()
{
	int row, col;
	for(row=1;row<=10;++row)
	{
		for(col=1;col<=row;++col)
			cout<<'*';
		cout<<endl;
	}
	cout<<"\n"<<endl;
	for(row=10;row>=1;--row)
        {
                for(col=1;col<=row;++col)
                        cout<<'*';
                cout<<endl;
        }
        cout<<"\n"<<endl;
	for(row=10;row>=1;--row)
	{
		for(int space =1; space<=10-row; ++space)
			cout<< " ";
		for(col =1;col<=row; ++col)
			cout<< "*";
		cout<<endl;
	}
	cout<< "\n"<<endl;

	for(row=1;row<=10;++row)
        {
                for(int space =1; space <=10-row; ++space)
                        cout<< " ";
                for(col =1;col<=row; ++col)
                        cout<< "*";
                cout<<endl;
        }

}
