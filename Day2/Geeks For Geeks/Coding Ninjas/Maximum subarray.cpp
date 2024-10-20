/*
 Maximum Subarray Sum
Problem statement
Given an array of numbers, find the maximum sum of any contiguous subarray of the array.



For example, given the array [34, -50, 42, 14, -5, 86], the maximum sum would be 137, since we would take elements 42, 14, -5, and 86.



Given the array [-5, -1, -8, -9], the maximum sum would be -1.



Follow up: Do this in O(N) time.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= N <= 10^6
1 <= K <= N
Time limit: 1 sec 
  */

#include<bits/stdc++.h>

using namespace std;

int main() 

{

    int n;

    cin>>n;

    int arr[n];

   for(int i=0;i<n;i++)

   {

       cin>>arr[i];

   }

        int sum=0,maxsum=arr[0];;

        for(int i=0;i<n;i++)

        {

            sum+=arr[i];

            maxsum=max(maxsum,sum);

            

            if(sum<0)

            {

                sum=0;

            }

        }

           cout<< maxsum;

}
