/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/

#include<iostream>
#include<vector>
using namespace std;

int buySellStock(vector <int>& vec){        //vec = {7,1,5,3,6,4}

    int maxProfit = 0, bestBuy = vec[0];

    for(int i=0; i < vec.size(); i++){
        if (i>0){
            bestBuy = min(bestBuy, vec[i]);
            maxProfit = max(maxProfit, vec[i]-bestBuy);
        }
    }
    return maxProfit;
}
int main() {
    
    return 0;
}