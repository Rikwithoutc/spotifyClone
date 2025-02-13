
#include<iostream>
using namespace std;

//Count digits of a given number
int countDigits(long long int n){
    int c = 0;
    while (n > 0)
    {
        n = (n/10);
        // cout<<n;
        c++;
    }
    return c; 
}

//sum of digits
int sumDigit(long long int n){
    int s = 0;
    while (n>0)
    {
        s += n%10;
        n /= 10;
    }
    return s;
}



//reversing a number


int power(int base, int exponent){
    int p = 1;
    for (int i = 0; i<exponent; i++){
        p *= base;
    }
    return p;
}
int reverseNum(long long int n){
    int m = 0;
    int x = countDigits(n);
    int d = power(10, (x-1));
    while (n > 0){
        m += (n%10)*d;
        d /= 10;
        n /= 10;
    }
    return m;
}
int main() {
    long long int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"No. of digits: "<<countDigits(n)<<endl;
    cout<<"Sum of digits: "<<sumDigit(n)<<endl;
    cout<<"Reversing digits: "<<reverseNum(n)<<endl;
    return 0;
}