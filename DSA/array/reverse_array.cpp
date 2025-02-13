#include<iostream>
using namespace std;

void reverseArray(int arr[], int sz){    
    
    //Two pointer approach
    int start = 0; 
    int end = sz-1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++ ; end-- ;
    }
    
}

void displayArray(int arr[], int sz){
    for(int i = 0; i < sz; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

int main() {
    
    int num[] = {2,4,1,9,10,3};
    displayArray(num, 6);
    reverseArray(num, 6);
    displayArray(num, 6);
    return 0;
}