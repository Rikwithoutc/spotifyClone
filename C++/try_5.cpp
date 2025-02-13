#include<iostream>
using namespace std;


class Employee
{
    private: int a, b, c; //Can only be accessed by a function of the class

    public: int d, e; //Can be accessed by any function

    void setData(int a, int b, int c);
    void getData(){
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of a is: "<<b<<endl;
        cout<<"The value of a is: "<<c<<endl;
        cout<<"The value of a is: "<<d<<endl;
        cout<<"The value of a is: "<<e<<endl;
    }
};

void Employee:: setData( int a1, int b1, int c1) {
    a = a1;
    b = b1;
    c = c1;
}
int main() {
    
    Employee rik;
    // rik.a= 6; --> Throws error as 'a' p is a private 
    rik.setData(9,8,7);
    rik.d = 3;
    rik.e = 2;
    rik.getData();
    return 0;
}