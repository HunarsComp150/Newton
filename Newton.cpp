/*
***************************************************
*** Program:                                    ***
***         Newton                              ***
***************************************************
*** Program Purpose:                                                    ***
***         Approximate the square root of a    ***
***         value                               ***
***************************************************
*** Author:                                                                     ***
***        Hunar Roop Singh Kahlon                          ***
***************************************************
*/

#include <iostream>
#include <iomanip>

using namespace std;

//Program Initialized
int main()
{
	// All variable initialized
	double x0, x1, y, looparound = 1;
	const int epsilon = 0.00001;

	// Program Info
	cout << "***************************************************" << endl;
	cout << "*** Program:                                    ***" << endl;
	cout << "***         Newton                              ***" << endl;
	cout << "***************************************************" << endl;
	cout << "*** Program Purpose:                            ***" << endl;
	cout << "***         Approximate the square root of a    ***" << endl;
	cout << "***************************************************" << endl;
	cout << "*** Author:                                     ***" << endl;
	cout << "***        Hunar Roop Singh Kahlon              ***" << endl;
	cout << "***************************************************\n\n\n" << endl;

	// User Input
	cout << "**************************************************" << endl;
	cout << "*** Square Root Approximation                  ***" << endl;
	cout << "**************************************************" << endl;
	cout << "Please enter the number you would like to find the" << endl;
	cout << "square root of:" << endl;
	cin >> y;
	cout << "**************************************************\n\n\n" << endl;

	// User Verification
	if (y <= 0)
	{
		cout << "**************************************************" << endl;
		cout << "**************************************************" << endl;
		cout << "*** Error                                      ***" << endl;
		cout << "**************************************************" << endl;
		cout << "**************************************************" << endl;
		cout << "I am sorry but you have entered zero or negative" << endl;
		cout << "value. Please enter any value bigger than zero" << endl;
		cout << "For example: 0.1, 2, 1.5 or 6" << endl;
		cout << "**************************************************" << endl;
		cout << "**************************************************" << endl;

		//End Program
		return 0;
	}

	//Approximation of Square Root
	cout << "**************************************************" << endl;
	cout << "Square Root Approximation                      ***" << endl;
	cout << "**************************************************" << endl;
	x0 = y / 4.0;
	do
	{
		if (looparound == 1)
		{
			x1 = (x0 + (y / x0)) / 2;
			cout << "x0=" << x0 << endl;
			cout << "x1=" << x1 << endl;
			cout << "y=" << y << endl;
			cout << "Difference between x1 and x0 is " << setprecision(3) << x1 - x0 << endl;
			--looparound;
		}
		if (looparound != 1)
		{
			x0 = x1;
			x1 = (x0 + (y / x0)) / 2;
			cout << "x0=" << x0 << endl;
			cout << "x1=" << x1 << endl;
			cout << "y=" << y << endl;
			cout << "Difference between x1 and x0 is " << setprecision(3) << x1 - x0 << endl;
		}
	} while (!(x1 - x0 <= epsilon && x1 - x0 >= -epsilon));
	cout << "**************************************************\n\n\n" << endl;
	
	cout << "**************************************************" << endl;
	cout << "Square Root of " << y << "is approximately "<< setprecision(3) << x1;
	cout << "**************************************************" << endl;
}
