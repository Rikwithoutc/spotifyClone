#include<iostream>
using namespace std;


void exchange(int &a, int &b) {

    //In this function we are passing reference values of the variables as arguments, thus changing the reference values also changes the variables...
    int temp;
    temp = a;
    a = b;
    b = temp;

};

void exchange2(int *a, int *b) {

    //In this function we are passing the address of a and b as arguments and the operations are performed on the values present at the given address... 
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<endl;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<endl;

    // exchange(a, b);
    exchange2(&a, &b);
    cout<<"New value of a is: "<<a<<endl;
    cout<<"New value of b is: "<<b<<endl;


    return 0;
}