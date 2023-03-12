// Write a program that calculates the greatest common divisor (GCD) of given two numbers. Hint: you can use the Euclidean algorithm.
//The two integer numbers will be entered on a single line from the console, separated by a single space.
//Findand print their GCD.

using namespace std;
#include <iostream>


int main()   
{
    int a, b;
    cin >> a >> b;
    int currentA = a;
    int currentB = b;

    while (currentA != 0 || currentB != 0)     
    {
        int div = currentA / currentB;       
        int remain = currentA % currentB;    

        currentA = currentB;   
        currentB = remain;

        if (currentB == 0)
        {
            break;
        }
    }

    int gcd = 0;

    if (currentA == 0)
    {
        gcd = currentB;
    }
    else if (currentB == 0)
    {
        gcd = currentA;
    }

    cout << gcd << endl;

    return 0;

}
