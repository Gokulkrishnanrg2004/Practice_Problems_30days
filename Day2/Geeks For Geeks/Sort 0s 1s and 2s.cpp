/*
Sort 0s, 1s and 2s

Given an array arr containing only 0s, 1s, and 2s. Sort the array in ascending order.

Examples:

Input: arr[] = [0, 2, 1, 2, 0]
Output: 0 0 1 2 2
Explanation: 0s 1s and 2s are segregated into ascending order.
Input: arr[] = [0, 1, 0]
Output: 0 0 1
Explanation: 0s 1s and 2s are segregated into ascending order.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)
*/

class Solution {
  public:
    void sort012(vector<int>& arr) 
    {
        int n = arr.size();
        
        int left = 0;
        int mid = 0;
        int right = n-1;
        
        while(mid<=right)
        {
            if(arr[mid]==0)
            {
                swap(arr[mid],arr[left]);
                left++;
                mid++;
            }
            else if(arr[mid]==2)
            {
                swap(arr[mid],arr[right]);
                right--;
            }
            else 
            {
                mid++;
            }
        }
    }
};
