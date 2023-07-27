#include <iostream>
using namespace std;

int main ()
{
	double grade;
	
	cout << " Please enter your grade ";
	cin >> grade;
	
	if ( (grade >= 98) && (grade < 100) )
	{
		cout << " your letter grade is: " << "A";
	}
	else if ( (grade >= 94) && (grade < 98) )
	{
		cout << " Your letter grade is: " << "B+";
	}
	else if ( (grade >= 90) && (grade < 94) )
	{
		cout << "Your letter grade is: " << "B";
	}
	else if ( (grade >= 86) && (grade < 90) )
	{
		cout << "Your letter grade is: " << "C+";
	}
	else if ( (grade >= 82) && (grade < 86) )
	{
		cout << "Your letter grade is: " << "C";
	}
	else if ( (grade >= 78) && (grade < 82) )
	{
		cout << "Your letter grade is: " << "D+";
	}
	else if ( (grade >= 75) && (grade < 78) )
	{
		cout << "Your letter grade is: " << "D";
	}
	else if ( (grade >= 0) && (grade <75) )
	{
		cout << "Your letter grade is: " << "F";
	}
	else
	{
		cout << "Please input grade!";
	}
	
	return 0;
}