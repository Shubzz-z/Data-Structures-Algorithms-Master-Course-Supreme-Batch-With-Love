//CodeStudio
//https://www.codingninjas.com/codestudio/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1

#include <bits/stdc++.h>
#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<vector<int>> ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==s){
                vector<int> demo;
                demo.push_back(min(arr[i],arr[j]));
                demo.push_back(max(arr[i],arr[j]));
                ans.push_back(demo);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}