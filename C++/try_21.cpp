#include<iostream>
using namespace std;

class Base {
    public: 
        int var;
        void print() {
            cout<<"Base class funcn. is invoked"<<endl;
            cout<<"var_base: "<<var<<endl;
        }
};

class Derived: public Base {
    public: 
    int var_der;
    void print() {
        cout<<"Derived class funcn. is invoked"<<endl;
            cout<<"var_der: "<<var_der<<endl;

    }
};
int main() {
    Base * obj_base_ptr;
    Derived * obj_der_ptr;
    Derived obj_der;
    // obj_base_ptr = &obj_der;

    obj_der_ptr = &obj_der;
    obj_der_ptr->var = 98;
    obj_der_ptr->var_der = 23;

    obj_base_ptr->print();
    obj_der_ptr->print();
    return 0;
}