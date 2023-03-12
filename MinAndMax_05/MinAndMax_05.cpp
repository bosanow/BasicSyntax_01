/*Write a program that reads an integer number N, then reads a line of N integers, and prints the minimum and maximum of those integers.
*/
using namespace std;
#include <iostream>
#include <cmath> // needed for MIN and MAX values

int main()
{
    int n;
    cin >> n;
    int max = INT_MIN; //max value
    int min = INT_MAX; //min value
    int currentMax = 0;
    int currentMin = 0;
    int input = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> input;

        if (max < input)   //if max is smaller than the input new max value will be set
        {
            max = input;
            currentMax = input;
        }
        if (min > input)   //if min is bigger than the input new min value will be set
        {
            min = input;
            currentMin = input;
        }
        
    }
    cout << currentMin << ' ' << currentMax << endl; //printing min max values

}

