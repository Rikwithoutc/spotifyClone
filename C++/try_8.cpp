#include<iostream>
using namespace std;


class Calculator {

    public:
        int sumRealComplex(complex, complex);
};

class complex
{
    int a;
    int b;
    friend int Calculator :: sumRealComplex(complex z1, complex z2);
    public: 
        void setData(int x, int y) {
            a = x;
            b = y;
        }

        void displayData(void) {
            cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};

int Calculator::sumRealComplex(complex z1, complex z2) {
    return z1.a + z2.a;
}

main() {
    complex com1, com2;
    Calculator calc;

    com1.setData(3,5);
    com2.setData(6,2);
    com1.displayData();
    com2.displayData();

    cout<<calc.sumRealComplex(com1, com2)<<endl;

}