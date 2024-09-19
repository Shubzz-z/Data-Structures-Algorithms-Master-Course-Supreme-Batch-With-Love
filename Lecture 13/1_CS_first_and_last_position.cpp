//CodeStudio
//https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549

#include <bits/stdc++.h> 
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int, int> p;
    int start=0,end=n-1,fo=-1,lo=-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==k){
            fo=mid;
            end=mid-1;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    start=0;end=n-1;
    while(start<=end){
        if(arr[mid]==k){
            lo=mid;
            start=mid+1;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    p.first=fo;
    p.second=lo;
    return p;
}

//For finding total no of occurences we have
// first and last occurences so 
// total no of occurences = (last-first)+1