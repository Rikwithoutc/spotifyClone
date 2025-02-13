/*
Given are N boards of length of each given in a form of an array, and M painters such that each painter takes 1 unit of time to paint 1 unit of board.

The task is to find min time to paint all boards such that a painter can only paint continuossections of the board.
*/


#include<iostream>
#include<vector>
using namespace std;


bool isValid(vector<int> vec, int n, int m, int mid){
    int time = 0, painter = 1;
    for (int i = 0; i < n; i++){
        if (time + vec[i] < mid){
            time += vec[i];
        }else {
            painter++;
            time = vec[i];
        }
    }
    return painter <= m? true : false;
}



int painterPartition(vector <int> &vec, int n, int m){
    int st = 0, end = 0, ans = -1, mid;
    for(int i: vec){
        end+=i;                 // end = sum of all boardlengths
        st = max(st , i);       // st = max of all boardlengths
    }

    while(st <= end){
        mid = st + (end - st)/2;

        if(isValid(vec, n, m, mid)){
            ans = mid;
            end = mid-1;
        }else {
            st = mid +1;
        }
    }
    return ans;
}
int main() {
    
    vector <int> vec = { 40, 30, 10,20};
    cout<<painterPartition(vec, 4, 2)<<endl;
    return 0;
}