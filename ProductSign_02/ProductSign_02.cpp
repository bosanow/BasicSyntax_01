/*Write a program that shows the sign (+ or -) of the product of three real numbers without calculating it.
The program should read 3 real numbers from the console (on a single line, separated by spaces) and should print the sign of their product (i.e. the sign of the number resulting from the multiplication of the 3 numbers). If the product is 0, print +.

*/

#include <iostream>
using namespace std;

int main()
{
	double num1, num2, num3;
	cin >> num1 >> num2 >> num3;

	if (num1 == 0 || num2 == 0 || num3 == 0)
	{
		cout << "+" << endl;
	}
	double sum = num1 * num2 * num3;

	if (sum > 0) 
	{
		cout << "+" << endl;
	}
	else if (sum < 0) 
	{
		cout << "-" << endl;
	}

}