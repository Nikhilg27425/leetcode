// Given an integer array nums of size n, return the number with the value closest to 0 in nums.
// If there are multiple answers, return the number with the largest value.

// Input: nums = [-4,-2,1,4,8]
// Output: 1
// Explanation:
// The distance from -4 to 0 is |-4| = 4.
// The distance from -2 to 0 is |-2| = 2.
// The distance from 1 to 0 is |1| = 1.
// The distance from 4 to 0 is |4| = 4.
// The distance from 8 to 0 is |8| = 8.
// Thus, the closest number to 0 in the array is 1.

//my solution
#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ;
        int ans = nums[0] ;
        int count = 0; 
        for(int i=0 ;i<nums.size();i++){
            if(nums[i]>=0){
                count++ ;
            }
        }
        if(count==0){
            return nums[nums.size()-1] ;
        }
        if(ans<0){
            int sm = (-1)*ans ;
            for(int i=0 ;i<nums.size();i++){
                if(nums[i]>=0){
                    ans = nums[i-1] ;
                    sm = (-1)*ans ;
                    if(nums[i]<=sm){
                        ans = nums[i] ;
                    }
                    break ;
                }
            }
        }
        
        return ans ; 
    }
};


//better solution
class Solution {
public:
    int findClosestNumber(vector<int>& nums) 
    {
        vector<int>neg, pos;
        for(auto &val:nums)
        {
            if(val < 0) neg.push_back(val);
            else pos.push_back(val);
        }

        sort(neg.begin(), neg.end());
        sort(pos.begin(), pos.end());

        if(pos.empty()) return neg.back();
        if(neg.empty() or pos[0] == abs(neg.back()) or pos[0] < abs(neg.back())) return pos[0];
        return neg.back();
    }
};