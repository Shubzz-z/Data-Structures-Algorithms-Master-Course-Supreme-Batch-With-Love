//LeetCode 852
//https://leetcode.com/problems/peak-index-in-a-mountain-array/description/

//Solved self Logic
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0,end=arr.size(),ans;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(arr[mid]<arr[mid+1]){
                start=mid+1;
            }
            else if(arr[mid]>arr[mid+1]){
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return mid;
    }
};

//Solved more optimize Logic by Love babbar
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0,end=arr.size(),ans;
        int mid=start+(end-start)/2;
        while(start<end){
            if(arr[mid]<arr[mid+1]){
                start=mid+1;
            }
            else{
                end=mid;
            }
            mid=start+(end-start)/2;
        }
        return start;
    }
};

//Unsolved TLE (Time Limit Exceeded) Error bootforce solution
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
    int ans,max=0;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            if(arr[j]>max){
                max=arr[j];
                ans=j;
            }
        }
    }
    return ans;
    }
};


//solved bootforce solution without binary search
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
    int ans,max=0;
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>max){
            max=arr[i];
            ans=i;
        }
    }
    return ans;
    }
};