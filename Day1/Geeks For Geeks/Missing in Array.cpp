/*
You are given an array arr of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element.

Examples:

Input: arr[] = [1,2,3,5]
Output: 4
Explanation : All the numbers from 1 to 5 are present except 4.
Input: arr[] = [1]
Output: 2
Explanation: All the numbers from 1 to 2 are present except 2.

*/
class Solution {
  public:
    int missingNumber(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=i+1)
            {
                return i+1;
            }
        }
        return arr.size()+1;
    }
};
