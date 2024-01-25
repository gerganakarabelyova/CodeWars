/*  This code was written by Gergana Karabelyova as an exercise 
    on the C++ coding language. The text and conditions of the puzzle
    are written below, after the code.  */

#include <vector>

std::vector<int> pipe_fix(const std::vector<int>& nums) {
    if (nums.empty()) {
        return {};
    }

    int minValue = nums[0];
    int maxValue = nums.back();

    std::vector<int> outputList(maxValue - minValue + 1);

    for (int i = 0; i < outputList.size(); ++i) {
        outputList[i] = minValue + i;
    }

    return outputList;
}



/*

Issue
Looks like some hoodlum plumber and his brother has been running around and damaging your stages again.

The pipes connecting your level's stages together need to be fixed before you receive any more complaints.

The pipes are correct when each pipe after the first is 1 more than the previous one.

Task
Given a list of unique numbers sorted in ascending order, return a new list so that the values increment by 1 for each index from the minimum value up to the maximum value (both included).

Example
Input:  1,3,5,6,7,8 Output: 1,2,3,4,5,6,7,8

*/