#include<iostream>
#include<vector>
using namespace std;

void revVec(vector <int> &vec){
    int sz = vec.size();

    int p1 = 0;
    int p2 = sz-1;

    while(p1 < p2){
        swap(vec[p1], vec[p2]);
        p1++;
        p2--;
    }
}

void displayVector(vector <int> v){
    for (int i: v){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main() {
    vector <int> v = {1,2,3,4,5};
    displayVector(v);
    revVec(v);
    displayVector(v);
    return 0;
}