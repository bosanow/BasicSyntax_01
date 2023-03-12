/*Write a program that enters the coefficients a, b, and c of a quadratic equation a*x2 + b*x + c = 0 and calculates and prints its real roots. Note that quadratic equations may have 0, 1, or 2 real roots. You can check your program against this: https://www.mathsisfun.com/quadratic-equation-solver.html
The numbers a, b, and c will be entered on a single line from the console, separated by spaces.
If the quadratic equation has no real roots (e.g. if the Discriminant is less than 0), print "no roots", if it has one real root print it, if it has two roots, print them on a single line, separated by a single space


*/

#include <cmath>
#include <iostream>
using namespace std;


int main()
{
	double a, b, c;
	cin >> a >> b >> c;

	//a*x2 + b*x + c = 0        

	//(b2 - 4ac) - discriminant
	if ((pow(b, 2)) - (4 * a * c) < 0) 
	{
		cout << "no roots" << endl;
		return 0;
	}

	double sum = (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2*a);
	double sum2 = (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2*a);

	if (sum != sum2)
	{
		cout << sum << " " << sum2 << endl;
	}
	if (sum == sum2)
	{
		cout << sum << endl;
	}

	return 0;
}