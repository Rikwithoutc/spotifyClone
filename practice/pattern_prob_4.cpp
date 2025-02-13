#include<iostream>
using namespace std;

/*
print a numerical triangle problem:

        1
    1   2   1
1   2   3   2   1

*/

void pattern(int n){
    for (int i = 1; i < (n+1); i++)
    {
        for (int j = 0; j<(n-i); j++){              //first set of space
            cout<<" ";
        }
        for (int k = 1; k < (i+1); k++)             //ascending series of numbers
        {
            cout<<k;
        }
        for (int l = i-1; l > 0; l--)               //descending series of numbers
        {
            cout<<l;
        }
        for (int m = 0; m < (n-1); m++){            //second set of spaces
            cout<<" ";
        }
        cout<<endl;
    }
    
}
int main() {
    pattern(5);
    return 0;
}