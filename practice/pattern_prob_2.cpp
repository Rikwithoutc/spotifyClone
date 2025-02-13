#include<iostream>
using namespace std;

/*
printing a triangular pattern of n-lines
*/

void pattern(int n){
    for (int i = 1; i < (n+1); i++)
    {
        for (int j = 0; j<i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
int main() {
    
    pattern(5);
    return 0;
}