#include<iostream>
using namespace std;

class Base1 {
    public:
     void greet() {
        cout<<"Hello"<<endl;
     }
};
class Base2 {
    public:
     void greet() {
        cout<<"Good Morning"<<endl;
     }
};

//Ambiguity is observed as both classes have function named greet

class Derived : public Base1, public Base2 {

    public:
        void greet(){
            Base1 :: greet();               //Ambiguity resolved
        }
};

int main() {
    Derived a;
    a.greet();
    return 0;
}