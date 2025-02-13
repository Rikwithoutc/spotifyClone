//Given an array of n elements find the majority element assuming it always exists
//Majority element is the element in an array that exists more than n/2 times where n is the size of the array


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majorEle1(vector <int>& vec){

    int n = vec.size();

    sort(vec.begin(), vec.end());

    int freq = 1, ans = vec[0];
    for (int i = 0; i < n; i++){
        if (vec[i] == vec[i-1]){
            freq++;
        }else {
            freq = 1;
            ans = vec[i];
        }

        if (freq > n/2){
            return ans;
        }
    }
    return ans; 
}



int majorEle2(vector <int>& vec){

    int freq = 0, ans= 0;

    for(int i = 0; i < vec.size(); i++){

        if (freq == 0){
            ans = vec[i];
        }
        if (ans == vec[i]){
            freq++;
        }else {
            freq--;
        }
    }
    return ans;
}
int main() {
    
    vector <int> nums = {1,2,4,2,5,1,2,2,3,2};
    cout<<majorEle1(nums)<<endl;;
    return 0;
}