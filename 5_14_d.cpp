//(Compound Interest Calculation) Modify Fig. 5.6 so it uses only integers to calculate the compound interest. [Hint: Treat all monetary amounts as numbers of pennies. Then “break” the result into its dollar and cents portions by using the division and modulus operations. Insert a period.]
#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>
int main()
{
	int amount, principal = 1000, dollars, cents;
	double rate = .05;
	cout << "Year" << setw( 24 ) << "Amount on deposit\n";
	for ( int year = 1; year <= 10; ++year ) {
		amount = principal * pow( 1.0 + rate, year );
		cents = amount % 100;
		dollars = amount; // assignment truncates decimal places
		cout << setw( 4 ) << year << setw( 21 ) << dollars << '.';
		if ( cents < 10 )
			cout << '0' << cents << endl;
		else	
			cout << cents << endl;
	}
	return 0;
}

	
	
