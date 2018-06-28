//( GradeBook Modification) Modify the GradeBook program of Fig. 5.9–Fig. 5.11 to calculate the grade-point average. A grade of A is worth 4 points, B is worth 3 points, and so on.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int grade, gradeTotal = 0, gradeCount, aCount = 0,bCount = 0, cCount = 0, dCount = 0, fCount = 0;
	cout << "Enter the letter grades."<< "\nEnter the EOF character to end input.\n"<< setiosflags(ios::fixed | ios::showpoint);
	while ( ( grade = cin.get() ) != EOF ) {
		switch ( grade ) {
			case 'A': case 'a':
				gradeTotal += 4;
				++aCount;
				break;
			case 'B': case 'b':
				gradeTotal += 3;
				++bCount;
				break;
			case 'C': case 'c':
				gradeTotal += 2;
				++cCount;
				break;
			case 'D': case 'd':
				++gradeTotal;
				++dCount;
				break;
			case 'F': case 'f':
				++fCount;
				break;
			case ' ': case '\n':
				break;
			default:
				cout << "Incorrect letter grade entered."<< " Enter a new grade.\n";
			break;
		}
	}
	gradeCount = aCount + bCount + cCount + dCount + fCount;
	if ( gradeCount != 0 )
		cout << "\nThe class average is: " << setprecision( 1 )<< static_cast< double > ( gradeTotal ) / gradeCount<< endl;
	return 0;

