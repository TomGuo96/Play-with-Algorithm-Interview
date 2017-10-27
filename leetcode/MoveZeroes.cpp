//
// Created by Tom Guo on 27/10/2017.
//

#include "leetcode.h"

/*
 * 时间复杂度：O(n)
 * 空间复杂度：O(n)
 */
/*
void Solution::moveZeroes(vector<int>& nums) {
    vector<int> nonZeroElements;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i])
            nonZeroElements.push_back(nums[i]);
    }
    for (int i = 0; i < nonZeroElements.size(); i++) {
        nums[i] = nonZeroElements[i];
    }
    for (int i = nonZeroElements.size(); i < nums.size(); i++) {
        nums[i] = 0;
    }
 }
 */

/*
void Solution::moveZeroes(vector<int>& nums) {
    int k = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i])
            nums[k++] = nums[i];
    }
    for (int i = k; i < nums.size(); i++)
        nums[i] = 0;
}
*/

/*
 * 时间复杂度：O(n)
 * 空间复杂度：O(1)
 */

void Solution::moveZeroes(vector<int>& nums) {
    int k = 0;
    for (int i = 0; i < nums.size(); i++)
        if (nums[i]) {
            if (i != k)
                swap(nums[k++], nums[i]);
            else
                k++;
        }
}