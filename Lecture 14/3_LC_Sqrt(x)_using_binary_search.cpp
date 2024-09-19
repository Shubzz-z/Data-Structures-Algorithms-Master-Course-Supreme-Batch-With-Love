//LeetCode 69
//https://leetcode.com/problems/sqrtx/description/

class Solution {
public:
    int mySqrt(int x) {
        int start=0,end=x,ans;
        long mid;
        mid=start+(end-start)/2;
        while(start<=end){
            if(mid*mid>x){
                end=mid-1;
            }else{
                ans=mid;
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
};