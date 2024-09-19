//LeetCode 442
//Homework Unsolved TLE (Time Limit Exceeded) Error bootforce solution
//https://leetcode.com/problems/find-all-duplicates-in-an-array/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int> intSet;
        vector<int> arr;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]>nums[j]){
                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                }
            }
        }
        
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                arr.push_back(nums[i]);
                i++;
            }
        }
        return arr;
    }
};