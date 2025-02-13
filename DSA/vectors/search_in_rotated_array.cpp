/* There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.
 */

#include <iostream>
#include <vector>
using namespace std;

int rotArraySearchBin(vector<int> vec, int target)
{

    int start = 0, end = vec.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (vec[mid] == target)
        {
            return mid;
        }
        if (vec[mid] >= vec[start])
        { // left sorted

            if (vec[start] <= target && target <= vec[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        { // right sorted

            if (vec[mid] <= target && target <= vec[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{

    vector<int> vec = {4, 5, 6, 7, 0, 1, 2};
    cout << rotArraySearchBin(vec, 5) << endl;
    return 0;
}