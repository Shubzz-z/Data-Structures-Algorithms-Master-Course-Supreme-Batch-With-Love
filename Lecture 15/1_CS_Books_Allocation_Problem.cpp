//CodeStudio
//https://www.codingninjas.com/codestudio/problems/ayush-and-ninja-test_1097574
#include <bits/stdc++.h>
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{    
    // Write your code here.
    long start, end, mid, max=time[0], sum=0, ans;
    
    for(int i=0;i<m;i++){
        sum+=time[i];
        if(max<time[i])
        max=time[i];
    }
    
    start=max;
    end=sum;
    
    while(start<=end){
        mid=start+(end-start)/2;
        
        long days=1,timeCount=0;
        for(int i=0; i<m; i++){
            timeCount+=time[i];
            if(timeCount>mid){
                days++;
                timeCount=time[i];
            }
        }
        
        if(days<=n){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
        
    }
    return ans;
}