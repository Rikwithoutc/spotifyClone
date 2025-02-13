#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setData1();
    void setData2();
    void displayBase()
    {
        cout << "data1: " << data1 << endl;
        cout << "data2: " << data2 << endl;
    }
};

void Base ::setData1()
{
    data1 = 5;
}
void Base ::setData2()
{
    data2 = 9;
}

class DerivedPub : public Base
{ // data2 and the functions will be inherited and will be a public member of Derived class
    int data3;

public:
    int data4;
    void setData3()
    {
        data3 = 10;
    };
    void setData4()
    {
        data4 = 2;
    };
    void displayDer()
    {
        displayBase();
        cout << "data3: " << data3 << endl;
        cout << "data4: " << data4 << endl;
    }

    /*  int data2;
        void setData1();
        void setData2();                    -----> Also part of the function (public)
        void displayBase() {
            cout<<"data1: "<<data1<<endl;
            cout<<"data2: "<<data2<<endl; */
};

class DerivedPri : private Base
{ // data2 and the functions will be inherited but will be private member of Derived class
    int data5;
    /*  int data2;
        void setData1();
        void setData2();                    -----> Also part of the function (private)
        void displayBase() {
            cout<<"data1: "<<data1<<endl;
            cout<<"data2: "<<data2<<endl; */
public:
    int data6;

    void setData5()
    {
        data5 = 35;
    };
    void setData6()
    {
        data6 = 49;
    };
    void displayDer()
    {
        displayBase();
        cout << "data5: " << data5 << endl;
        cout << "data6: " << data6 << endl;
    }
};

int main()
{
    Base a;
    DerivedPub b;
    DerivedPri c;
/* 
    a.setData1();
    a.setData2();
    a.displayBase();

    b.setData1();
    b.setData2();
    b.setData3();
    b.setData4();
    b.displayDer();
 */
    // c.setData1();
    // c.setData2();            -----> Can't be accesed as they're private members
    c.setData5();
    c.setData6();
    c.displayDer();         //--> c.data1 and c.data2 will return garbage value as they aren't defined

    return 0;
}