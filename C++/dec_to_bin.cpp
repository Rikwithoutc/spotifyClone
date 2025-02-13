// converting decimal to binary

#include<iostream>
using namespace std;

int decToBin(int d) {

    int c = 0;
    int t = 1;
    int d_ = d;
    while (d_ > 0){
        c += (d_% 2)*t;
        d_ = d_/2;
        t *= 10;
    }
    return c;
}
int main() {
    
    cout<<decToBin(42)<<endl;
    return 0;
}