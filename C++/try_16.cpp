#include<iostream>
using namespace std;

class Base1{
    int x;
public:
    Base1() {
        cout<<"Base1 const. 1"<<endl;
    }
    Base1(int i) {
        x = i;
        cout<<"Base1 const. 2"<<endl;
    }
};
class Base2{
    int y;
public:
    Base2() {
        cout<<"Base2 const. 1"<<endl;
    }
    Base2(int i): y(i) {
        cout<<"Base2 const. 2"<<endl;
    }
};

class Derived : public Base1, public Base2 {
    int a, b;
public:
    Derived() {
        cout<<"Derived const. 1"<<endl;
    }
    Derived(int p, int q, int r, int s): Base1(p), Base2(q) {
        a = r;
        b = s;
        cout<<"Derived const. 2"<<endl;
    }
};


int main() {
    Derived der1, der2(1,2,3,4);  
    return 0;
}