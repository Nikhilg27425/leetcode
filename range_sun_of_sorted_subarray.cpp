// you are given the array nums consisting of n positive integers.
// You computed the sum of all non-empty continuous subarrays from the array and then sorted them in non-decreasing order, 
// creating a new array of n * (n + 1) / 2 numbers.

// Return the sum of the numbers from index left to index right (indexed from 1), inclusive, in the new array. Since the answer can be a huge number return it modulo 109 + 7.

// Input: nums = [1,2,3,4], n = 4, left = 1, right = 5
// Output: 13 
// Explanation: All subarray sums are 1, 3, 6, 10, 2, 5, 9, 3, 7, 4. After sorting them in non-decreasing order we have the new array [1, 2, 3, 3, 4, 5, 6, 7, 9, 10]. The sum of the numbers from index le = 1 to ri = 5 is 1 + 2 + 3 + 3 + 4 = 13. 


//my solution

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    long long int rangeSum(vector<int>& nums, long long int n, long long int left, long long int right) {
        vector<int> sorted_num ;
        for(long long int i=0 ;i<nums.size();i++){
            long long int sum = nums[i] ;
            sorted_num.push_back(sum) ;
            for(long long int j=i+1 ;j<nums.size();j++){
                sum+=nums[j] ;
                sorted_num.push_back(sum) ;
            }
        }
        sort(sorted_num.begin() , sorted_num.end()) ;
        long long int li = left-1 ;
        int ri = right-1 ;
        int MOD = 1000000007 ;
        long long int ans = 0 ;
        for(long long int i=li ;i<=ri;i++){
            ans+=sorted_num[i] ;
        }
        return ans%MOD ;
    }
};

//better solution



class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int arr[n * (n + 1) / 2];
        for (int i = 0, k = 0; i < n; ++i) {
            int s = 0;
            for (int j = i; j < n; ++j) {
                s += nums[j];
                arr[k++] = s;
            }
        }
        sort(arr, arr + n * (n + 1) / 2);
        int ans = 0;
        const int mod = 1e9 + 7;
        for (int i = left - 1; i < right; ++i) {
            ans = (ans + arr[i]) % mod;
        }
        return ans;
    }
};