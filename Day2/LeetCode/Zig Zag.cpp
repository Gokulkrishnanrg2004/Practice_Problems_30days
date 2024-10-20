/*

6. Zigzag Conversion
Solved
Medium
Topics
Companies
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);
 

Example 1:

Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
Example 2:

Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I
Example 3:

Input: s = "A", numRows = 1
Output: "A"

*/

class Solution {
public:
    string convert(string s, int numRows) 
    {
        if(numRows == 1) return s;

        vector<string>arr(numRows);

        int cur = 0;
        bool godown = false;

        for(int i=0;i<s.size();i++)
        {
            arr[cur] += s[i];
            if(cur == 0 || cur == numRows - 1)
            {
                godown = !godown;
            }
            if(godown)
            {
                cur++;
            }
            else
            {
                cur--;
            }
        }
        string res = "";
        for(const string& row : arr)
        {
            res += row;
        }
        return res;
    }
};
