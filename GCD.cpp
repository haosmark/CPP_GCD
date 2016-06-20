// GCD.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int gcd(int A, int B)
{
    while (B != 0)
    {
        int temp = B;
        B = A % temp;
        A = temp;
    }
    return A;
}

int main()
{
    cout << gcd(6, 9) << " is 3" << endl;
    cout << gcd(1, 2) << " is 1" << endl;
    cout << gcd(2, 0) << " is 2" << endl;
    cout << gcd(4, 4) << " is 4" << endl;
    cout << gcd(672, 114) << " is 6" << endl;
    return 0;
}

