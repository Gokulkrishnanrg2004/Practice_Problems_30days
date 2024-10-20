/*
Array Duplicates

Given an array arr of integers, find all the elements that occur more than once in the array. Return the result in ascending order. If no element repeats, return an empty list.

Examples:

Input: arr[] = [2, 3, 1, 2, 3]
Output: [2, 3] 
Explanation: 2 and 3 occur more than once in the given array.
Input: arr[] = [0, 3, 1, 2] 
Output: [] 
Explanation: There is no repeating element in the array, so the output is empty.
Input: arr[] = [2]
Output: [] 
Explanation: There is single element in the array. Therefore output is empty.
*/

class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        
        int left = 0;
        int right = 1;
        
        vector<int>ans;
        set<int>unique;
        if(n==1)
            return ans;
        while(right<n)
        {
            if(arr[left]==arr[right])
            {
                unique.insert(arr[right]);
                right++;
            }
            else 
            {
                left = right;
                right++;
            }
        }
        for (const auto &element : unique) 
        {
            ans.push_back(element);
        }
        return ans;
    }
};
