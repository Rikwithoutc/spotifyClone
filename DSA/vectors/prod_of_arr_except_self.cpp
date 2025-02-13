/* Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation. */



#include<iostream>
#include<vector>
using namespace std;


// BRUTE FORCE APPROACH -----------------> O(n^2)
vector <int> prodArr(vector <int> vec){
    vector <int> ans = {};
    for (int i = 0; i < vec.size(); i++){
        int prod = 1;
        for (int j=0; j<vec.size(); j++){
            if(j!=i){
                prod *= vec[j];
            }
        }
        ans.push_back(prod);
    }
    return ans;
}


vector <int> prodArr2(vector <int> vec){
    //optimized time complexity-------------> O(n)
    int n = vec.size();

    vector <int> prefix(n,1), suffix(n,1), ans(n,1);
    
    for (int i = 1; i < n; i++){
        prefix[i] = prefix[i-1] * vec[i-1];
        int j = n-i-1;
        suffix[j] = suffix[j+1] * vec[j+1];
    }

    for (int k = 0; k < ans.size(); k++){
        ans[k] = prefix[k] * suffix[k];
    }

    return ans;
}


vector <int> prodArr3(vector <int> vec) {
    //Space complexity optimisation 

    int n = vec.size();
    vector <int> ans (n,1);
    int suffix = 1;

    for(int i=1; i < n; i++){
        ans[i] = ans[i-1] * vec[i-1];

        int j = n-i;
        ans[j] *= suffix;
        suffix *= vec[j];
    }
    return ans;
}
int main() {
    
    vector <int> vec = {1,2,3,4};
    vector <int> ans = prodArr3(vec);

    for (int i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}