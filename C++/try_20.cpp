#include<iostream>
using namespace std;

class A {
    int a;
public:
    A & setData(int a) {
        this->a = a;
        return *this;           // returns an instance of the object
    }

    void getData() {
        cout<<a<<endl;
    }
};
int main() {
    
    A x;
    x.setData(2).getData();  //x.setData() returns the object 'x' which called the member funcn.
    return 0;
}