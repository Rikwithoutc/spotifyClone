#include<iostream>
using namespace std;

int main() {
    int num[] = {5,2,9,10,0,23,34,18,8};
    int target = 19;
    int size = sizeof(num)/sizeof(int);
    int c = -1;

    for(int i = 0; i < size; i++){
        if(num[i] == target){
            c = i;
            break;
        }
    }

    if(c != -1){
        cout<<"Target is located at index: "<<c<<endl;
    }else {
        cout<<"Target not found"<<endl;
    }
    return 0;
}