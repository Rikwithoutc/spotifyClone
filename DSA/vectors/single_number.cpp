//given a non-empty array of integers, return the ony unique element in the array

#include<iostream>
#include<vector>
using namespace std;

int singleNumber (vector <int> &nums){
    /*
        XOR of a number with the same number returns 0
        2^2 = 0;
        6^6 = 0;

        XOR of a number with 0 returns the number itself
        1^0 = 0;

        XOR also follows associativity law
        a ^ (b ^ c) = (a ^ b) ^ c;
    */
   int c = 0;
   for (int val: nums){
        c = c ^ val; 
   }

   return c;

}
int main() {
    vector <int> vec = {1,5,2,1,2};
    cout<<singleNumber(vec)<<endl;

}