// converting binary to decimal 

#include<iostream>
#include<cmath>

using namespace std;

int binToDec(int b){

    int c = 0;
    int t = 1;
    while (b>0){
        c += (b%10)*t;
        b = floor(b/10);
        t *= 2;
    }

    return c;

}
int main() {
    
    cout<<binToDec(101010)<<endl;
    return 0;
}