//CodeStudio
//https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554
//First Approch
#include <bits/stdc++.h> 
int findpivot(vector<int>& arr,int n){
    int start=0,end=n-1,mid;
    mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}

int binarySearch(vector<int>& arr,int start,int end,int key){
    int mid;
    mid=start+(end-start)/2;
    while(start<=end){
        if(key==arr[mid]){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int findPosition(vector<int>& arr, int n, int k)
{
    int pivot,ans=-1;
    pivot=findpivot(arr,n);
    if(k>=arr[pivot]&&k<=arr[n-1]){
        return binarySearch(arr,pivot,n-1,k);
    }
    else{
        return binarySearch(arr,0,pivot-1,k);
    }
}


//Solved self Logic
//Second Approch
#include <bits/stdc++.h> 
int findPosition(vector<int>& arr, int n, int k)
{
    int ans=-1,mid,start=0,end=n-1;
    mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==k){
            ans=mid;
            break;
        }
        if(k>=arr[0]){
            if(arr[mid]<arr[0]){
                end=mid-1;
            }
            else if(arr[mid]>k){
                    end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        else{
            if(arr[mid]>=arr[0]){
                start=mid+1;
            }
            else if(arr[mid]>k){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }     
        mid=start+(end-start)/2;
    }
    return ans;
}

//Find out Third Approch it is Exist by love babbar