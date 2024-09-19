//CodeStudio
//https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1

//Unsolved TLE (Time Limit Exceeded) Error bootforce solution
//Answer 1
#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
    vector<int> ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]<arr2[j])
                break;
            if(arr1[i]==arr2[j]){
                ans.push_back(arr1[i]);
                arr2[j]=INT_MIN;
                break;
            }
        }
    }
    return ans;
}

//Solved Without TLE (Time Limit Exceeded) Error
//Answer 2
//Two pointer Approch
#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
    vector<int> ans;
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        if(arr1[i]>arr2[j]){
            j++;
        }
    }
    return ans;
}