/*

392. Is Subsequence

Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true
Example 2:

Input: s = "axc", t = "ahbgdc"
Output: false

*/

/*
In ordrer ot maintain the order of the string 1 we use two pointers;
string 1 = abc
string 2 = ahbgdc
a == a i++
j++
b != h
j++
b == b
i++
j++
.
.
.
  */

class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int n1 = s.size();
        int n2 = t.size();
        
        int i=0,j=0;
        while(i<n1 && j<n2)
        {
            if(s[i]==t[j])
            {
                i++;
            }
            j++;
        }
        return i==n1;
    }
};
