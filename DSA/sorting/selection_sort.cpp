#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector <int> &vec){      //O(n^2)
    int swapPos = 0, n = vec.size();
    int min = INT_MAX;

    for(int i=0; i<n; i++){
        int smallestIndx = i;
        for(int j = i+1; j < n; j++){
            if(vec[j] < vec[smallestIndx]){
                smallestIndx = j;
            }
        }
        swap(vec[i], vec[smallestIndx]);
    }
}

void displayVec(vector<int> vec){
    for(int i: vec){
        cout<<i<<" ";
    }
}

int main() {
    
    vector<int> vec = {4, 1, 5, 3, 2};
    // vector<int> vec = {1, 2, 3, 4, 5};
    displayVec(vec);
    selectionSort(vec);
    cout<<endl;
    displayVec(vec);
    return 0;
}