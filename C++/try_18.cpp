#include<iostream>
using namespace std;

class Complex {
    int real, imaginary;
public:
    void setData(int a, int b) {
        real = a;
        imaginary = b;
    }
    void displayData() {
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
};
int main() {
    
    Complex *ptr = new Complex;
    // (*ptr).setData(2,5); ---> is same as: 
    ptr->setData(3,9);
    ptr->displayData();
    return 0;
}