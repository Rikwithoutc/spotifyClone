#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector <int>& vec){
    int n = vec.size();
    for(int i = 0; i<n; i++){
        if(vec[i] > vec[i+1]){
            
        }
    }
}

void displayVec(vector<int> vec){
    for(int i: vec){
        cout<<i<<" ";
    }
}

int main() {
    vector<int> vec1 = {4, 1, 5, 3, 2};
    vector<int> vec = {1, 2, 3, 4, 5};
    displayVec(vec);
    insertionSort(vec);
    cout<<endl;
    displayVec(vec);
    return 0;
}