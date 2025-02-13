#include<iostream>
using namespace std;

/*
print a rect of stars with m rows and n columns
*/


void pattern(int n, int m){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
int main() {

    pattern(7,3);
    return 0;
}