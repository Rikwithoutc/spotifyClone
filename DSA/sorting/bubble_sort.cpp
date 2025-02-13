#include<iostream>
#include<vector>
using namespace std;


void bubbleSort(vector <int>& vec){         // O(n^2)
    
    int pt1 = 0, pt2 = 1;
    int n = vec.size();
    bool isSwap = false;

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(vec[j] > vec[j+1]){
                swap(vec[j], vec[j+1]);
                isSwap = true;
            }
        }
        if(isSwap = false){
            return;
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
    bubbleSort(vec);
    cout<<endl;
    displayVec(vec);
    return 0;
}