#include<iostream>
using namespace std;


void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapPointers(int*a, int*b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapRefernceVar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    
    int x = 3, y = 7;

    swap(x, y); //This won't swap the values of x and y...
    cout<<"Value of x: "<<x<<"\nValue of y: "<<y<<endl;

    // swapPointers(&x, &y); //This will change the values of x and y using pointer reference...

    swapRefernceVar(x , y); //This will change the values of x and y using reference variables...
    cout<<"Value of x: "<<x<<"\nValue of y: "<<y<<endl;
    return 0;
}