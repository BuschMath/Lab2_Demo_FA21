/* Name
   class etc...
   
  */

#include <iostream>

using namespace std;

int main()
{
	// Output schedule to screen
	const string m = "Monday";
	const string w = "Wednesday";
	const string fct = "9:00";	// fct = first class time
	const string fcn = "Computer Science 101"; // fcn = first class name
	cout << m << "\t\t" << fct << "\t" << fcn << endl;
	cout << w << "\t" << fct << "\t" << fcn << endl;

	return 0;
}