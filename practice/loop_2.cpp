#include<iostream>
using namespace std;

/*
Sum of following series: 
1-2+3-4+5...nth term
*/

int serSum(int n){
    int s = 0, a = 1;
    for (int i = 1; i < (n+1); i++)
    {
        s += i*a;
        a *= -1;
    }
    return s;
}

/*
printing first n factorial numbers
*/

void factNum(int n){
    int f = 1;
    for (int i = 1; i < (n+1); i++)
    {
        f *= i;
        cout<<i<<"! = "<<f<<endl;
    }
    
}

int main() {
    // cout<<serSum(2)<<endl;
    factNum(10);
    return 0;
}