// From a given sorted array find pairs that add up to the target sum

#include<iostream>
#include<vector>
using namespace std;


vector <int> pairSum(vector <int> vec, int target){
    vector <int> ans;

    int sz = vec.size();
    for (int i=0; i < sz; i++){

        for (int j = i+1; j < sz; j++){
            int sum = vec[i]+vec[j];
            if (sum == target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;
}

vector <int> pairSumOpt(vector <int> vec, int target){
    
    vector <int> ans;
    
    
    // TWO POINTER APPROACH
    
    int i = 0;
    int j = vec.size()-1;

    while (i < j){
        int sum = vec[i] + vec[j];
        if(sum > target){
            j--;
        }else if(sum < target){
            i++;
        }else {
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
    }
    return ans;
}
main() {
    
    vector <int> nums = {2, 7, 11, 15};
    
    vector <int> ans = pairSumOpt(nums, 13);

    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}