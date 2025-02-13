#include<iostream>
using namespace std;

class Base {
    public: 
        int var = 0;
        virtual void print() {
            cout<<"Base class funcn. is invoked"<<endl;
            cout<<"var_base: "<<var<<endl;
        }
};

class Derived: public Base {
    public: 
    int var_der = 0;
    void print() {
        cout<<"Derived class funcn. is invoked"<<endl;
            cout<<"var_der: "<<var_der<<endl;

    }
};
int main() {
    
    Base * base_ptr;
    Base obj_base;
    Derived obj_der;

    base_ptr = &obj_der;

    base_ptr->print();
    return 0;
}