// A number which is the sum of cube of it's own digits...
// like 153= (1)^3 + (5)^3 + (3)3^3;

#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

bool findArmstrong(int a)
{
    int s, t, b;
    b = a;
    s = 0;
    while (a != 0)
    {
        t = a % 10;
        s = s + pow(t, 3);
        a = floor(a / 10);
    }
    if (s == b)
    {
        return true;
    }
    else
    {
        // cout<<b<<endl;
        // cout<<s<<endl;
        return false;
    }
}
int main()
{
    int x;
    cout << "Enter any number: " << endl;
    cin >> x;
    if (findArmstrong(x) == true)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}