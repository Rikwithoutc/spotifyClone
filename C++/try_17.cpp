#include<iostream>
using namespace std;

int main() {
    
    /* int *p = new int(3);
    cout<<p<<endl;
    cout<<*(p)<<endl; */
/* 
    int *arr = new int[3];
    arr[0]= 20;
    arr[1]= 50;
    arr[2]= 10; */

    int *arr = new int[3]{10, 50, 20};

    cout<<arr<<endl;
    cout<<*(arr)<<endl;
    cout<<*(arr + 1)<<endl;
    cout<<*(arr + 2)<<endl;
    /* cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl; */

    return 0;
}