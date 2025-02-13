#include <iostream>
using namespace std;

class Base1
{
protected:          //protected class members can't be accsesd by any non-class functions but they can be inherited.
    int base1Int;

public:
    void setBase1(int a)
    {
        base1Int = a;
    }
};

class Base2
{
protected:
    int base2Int;

public:
    void setBase2(int a)
    {
        base2Int = a;
    }
};

class Derived : public Base1, public Base2          //Multiple class inheritance
{
public:
    void show()
    {
        cout << "Value of base1Int is: " << base1Int << endl;
        cout << "Value of base2Int is: " << base2Int << endl;
        cout << "The sum of these values is: " << base1Int + base2Int << endl;
    }
};
int main()
{
    Base1 a;
    Base2 b;
    Derived c;
    c.setBase1(10);
    c.setBase2(20);
    c.show();
    return 0;
}