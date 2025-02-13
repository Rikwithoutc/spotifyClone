#include <iostream>
using namespace std;

class Complex
{

    int a, b;

public:
    Complex(int x, int y = 0)
    { // Constuctor declaration; Must have same name as the class
        a = x;
        b = y;
    }

    Complex(Complex &obj) { //Copy constructor declaration
        cout<<"Copy condtructor called"<<endl;
        a = obj.a;
        b = obj.b;
    }

    //When no copy consturctor is found compiler provides its own copy constructor...
    void displayNum(void)
    {
        cout << a << " + " << b << "i" << endl;
    }
};

/* Complex::Complex(void) {
    a = 10;
    b = 1;
} */

int main()
{

    Complex z(2); //--> Implicit Call
    z.displayNum();

    Complex w = Complex(1, 2); //-->Explicit Call
    w.displayNum();

    Complex z2(z); //-->Copy constuctor invoked(Will work even when copy constructor isn't declared!!)
    z2.displayNum();

    Complex z3 = z; //-->Will also invoke copy constructor
    z3.displayNum();

    z3 = w; //-->Will work but not invoke copy constructor
    z3.displayNum();
    return 0;
}