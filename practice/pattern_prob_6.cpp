#include<iostream>
using namespace std;

/*
printing a '+' pattern:
n = 5;

          *
          *
        *****
          *
          *
*/


void pattern(int n)
{   
    int m = (n-1)/2;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
        
    }
    for (int l = 0; l < n; l++)
    {
        cout<<"*";
    }
    cout<<endl;
    for (int k = 0; k < m; k++)
    {
        for (int p = 0; p < m; p++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
        
    }
    
}
int main() {

    pattern(6);
    return 0;
}