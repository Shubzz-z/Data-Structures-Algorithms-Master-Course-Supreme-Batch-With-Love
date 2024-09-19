//CodeStudio
//HomeWork
//https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1&leftPanelTab=0
//Unsolved TLE (Time Limit Exceeded) Error bootforce solution TC=O(n^2)
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){    
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}