/* You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space. */

#include<iostream>
#include<vector>
using namespace std;

int singleEle(vector <int> vec){
    for(int i = 0; i < vec.size(); i++){
        if(not((vec[i] == vec[i+1])or(vec[i] == vec[i-1]))){
            return vec[i];
        }
    }
    return -1;
}


int singleEle2(vector<int> vec){

    if(vec.size() == 1){
        return vec[0];
    }
    int s = 0, e = vec.size();

    while(s <= e){
        int m = s + (e - s)/2;

        if(m==0 && vec[0] != vec[1]){return vec[0];}
        if(m==vec.size()-1 && vec[vec.size()-1] != vec[vec.size()-2]){return vec[vec.size()-1];}

        
        if(vec[m] == vec[m-1]){
            s = m+1;
        }else if(vec[m] == vec[m+1]){
            e = m-1;
        }else {
            return vec[m];
        }
    }
    return -1;
}
int main() {
    
    vector<int> vec = {1,1,2,2,3,3,4};
    cout<<singleEle2(vec)<<endl; 
    return 0;
}