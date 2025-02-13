//Compute x^n using binary exponentiation

#include<iostream>
using namespace std;

//time complexity: O(n)
int yourDouble(int x, int n){
    int ans = 1;
    for(int i = 0; i < n; i++){
        ans *= x;
    }

    return ans;
}
/*
If a number has n digits, its binary form has atmost (log_2(n)+1) digits:

Dec         Bin
8           1000


*/
//Time complexity: O(logn)
int myDouble(int x, int n){

    int ans = 1;

    if (n < 0){
        x = (1/x);
        n = -n;
    }
    while(n > 0){
        if (n%2 == 1){
            ans *= x;
        }
        x *= x;
        n /= 2;
    }

    return ans;
}
int main() {
    
    cout<<yourDouble(5,4)<<endl;
    cout<<myDouble(0,0)<<endl;

    return 0;
}