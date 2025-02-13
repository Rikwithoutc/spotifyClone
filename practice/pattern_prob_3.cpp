#include<iostream>
using namespace std;


/*
print a numerical square pattern of n rows.

    1 2 3 4
    2 3 4 1
    3 4 1 2
    4 1 2 3
*/

void pattern(int n){
    for (int i = 1; i < (n+1); i++)
    {
        for (int j = i; j < (n+1); j++){
            cout<<" "<<j;
        }
        for (int k = 1; k < i; k++){
            cout<<" "<<k;
        }
        cout<<endl;
    }
    
}
int main() {
    
    pattern(7);
    return 0;
}