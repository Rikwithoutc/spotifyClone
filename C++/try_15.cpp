#include<iostream>
using namespace std;

class Base_1 {
    int a , b, c;
public:
    Base_1(){
        cout<<"Base constructor_1 is called"<<endl;
    }
    Base_1(int x){
        a = x;
        cout<<"Base constructor_2 is called"<<endl;
    }
    Base_1 (int y, int z){
        b = y;
        c = z;
        cout<<"Base constructor_3 is called"<<endl;
    }
    void display() {
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
        cout<<"c: "<<c<<endl;
    }
};

class Derived : public Base_1 {       //Irrespective of argument is provided or not initializing 
    private:                        //of the derived class will always invoke the constructor of base class 
    int d_a;
    public:
    Derived(){
        cout<<"Derived Constructor_1 is called"<<endl;
    }
    Derived(int x){
        cout<<"derived constructor_2 is called"<<endl;
        x = d_a;
    }
};

class Base_2 {
    public:
    Base_2() {
        cout<<"Base_2 constructor_1 is called"<<endl;
    }
};

class Derived_2: public Base_2, public Derived {

public:
    Derived_2(){
        cout<<"Derived_2 constructor is called. "<<endl;
    }
} ;

/*

-> Derived_2 on initialization first calls Base_2 constructor as it's mentioned before 
    in the class defining statement
-> Then it calls the derived class which in turn calls the constructor of Base_1.
-> After that constructor of derived_1 is called.
-> And only after that the original class constructor is called.

*/
int main() {
    // Base p, q(2), r(36, 76);
    Derived_2 a;
    return 0;
}