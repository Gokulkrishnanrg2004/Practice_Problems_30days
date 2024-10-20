/*

Majority Element

Given an array arr. Find the majority element in the array. If no majority exists, return -1.

A majority element in an array is an element that appears strictly more than arr.size()/2 times in the array.

Examples:

Input: arr[] = [3, 1, 3, 3, 2]
Output: 3
Explanation: Since, 3 is present more than n/2 times, so it is the majority element.
Input: arr[] = [7]
Output: 7
Explanation: Since, 7 is single element and present more than n/2 times, so it is the majority element.
Input: arr[] = [2, 13]
Output: -1
Explanation: Since, no element is present more than n/2 times, so there is no majority element.
Constraints:
1 ≤ arr.size() ≤ 105
0 ≤ arr[i]≤ 105



  */
class Solution {
  public:
    int majorityElement(vector<int>& arr) 
    {
        //Moore's voting algorithm
        int candidate = -1;
        int count = 0;
        if(arr.size()==1)
            return arr[0];
        
        for(int num : arr)
        {
            if(count==0)
            {
                candidate = num;
                count++;
            }
            else if(candidate == num)
            {
                count++;
            }
            else 
            {
                count--;
            }
        }
        
        count=0;
        for(int num : arr)
        {
            if(num==candidate)
            {
                count++;
            }
        }
        if(count > arr.size()/2)
        {
            return candidate;
        }
        return -1;
    }
};
