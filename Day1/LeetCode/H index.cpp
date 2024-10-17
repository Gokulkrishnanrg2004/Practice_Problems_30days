/*

Given an array of integers citations where citations[i] is the number of citations a researcher received for their ith paper, return the researcher's h-index.

According to the definition of h-index on Wikipedia: The h-index is defined as the maximum value of h such that the given researcher has published at least h papers that have each been cited at least h times.

 

Example 1:

Input: citations = [3,0,6,1,5]
Output: 3
Explanation: [3,0,6,1,5] means the researcher has 5 papers in total and each of them had received 3, 0, 6, 1, 5 citations respectively.
Since the researcher has 3 papers with at least 3 citations each and the remaining two with no more than 3 citations each, their h-index is 3.
Example 2:

Input: citations = [1,3,1]
Output: 1

*/

class Solution {
public:
    int hIndex(vector<int>& citations) 
    {
        sort(citations.begin(),citations.end());
        int n = citations.size();
        int hindex = 0;
        for(int i=0;i<n;i++)
        {
            //start from the highest citations
            int hcandidate = n - i;

            //since array elements may be greater than or equal to the h candidate
            //so the elements greater than or equal to the hcandidate are considered
            //since to compare the lowest element in an array to highest citation we sort the array
            if(citations[i] >= hcandidate)
            {
                hindex = hcandidate;
                break;
            }
        }
        return hindex;
    }
};
