/*

You are given a 0-indexed array of integers nums of length n. You are initially positioned at nums[0].

Each element nums[i] represents the maximum length of a forward jump from index i. In other words, if you are at nums[i], you can jump to any nums[i + j] where:

0 <= j <= nums[i] and
i + j < n
Return the minimum number of jumps to reach nums[n - 1]. The test cases are generated such that you can reach nums[n - 1].

 

Example 1:

Input: nums = [2,3,1,1,4]
Output: 2
Explanation: The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.
Example 2:

Input: nums = [2,3,0,1,4]
Output: 2

Concept :
Assign two pointers named as current and farthest, the farthes is computed using the maximum among the farthest and num[i]+i and the current is replaced with the farthest if current == 1.
Which means the jump range is exhausted. The process is continued until the current is >= num.sizze()-1;
*/

class Solution {
public:
    int jump(vector<int>& nums) 
    {
        if(nums.size()==1)
            return 0;

        int jump=0;
        int current = 0;
        int farthest = 0;

        for(int i=0;i<nums.size()-1;i++)
        {
            farthest = max(farthest,nums[i]+i);

            if(i==current)
            {
                jump++;
                current = farthest;

                if(current >= nums.size()-1)
                    break;
            }
        }    
        return jump;
    }
};
