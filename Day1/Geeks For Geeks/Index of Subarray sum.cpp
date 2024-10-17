/*
Given an unsorted array arr containing only non-negative integers, your task is to find a continuous subarray (a contiguous sequence of elements) whose sum equals a specified value s. You need to return the 1-based indices of the leftmost and rightmost elements of this subarray.

Examples:

Input: arr[] = [1,2,3,7,5], s = 12
Output: [2, 4]
Explanation: The sum of elements from 2nd to 4th position is 12.
Input: arr[] = [1,2,3,4,5,6,7,8,9,10], s = 15,
Output: [1, 5]
Explanation: The sum of elements from 1st to 5th position is 15.
Input: arr[] = [7,2,1], s = 2
Output: [2, 2]
Explanation: The sum of elements from 2nd to 2nd position is 2.
Input: arr[] = [5,3,4], s = 2
Output: -1
Explanation: There is no subarray with sum 2.
*/

class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int s) {
        int start=0,sum=0,flag=0;
        for(int end=0;end<arr.size();end++)
        {
            sum+=arr[end];
            
             while (sum > s && start < end) 
             {
                sum -= arr[start];
                start++;
             }
             
             if(sum==s)
                return {start+1,end+1};
        }
        return {-1};
    }
};
