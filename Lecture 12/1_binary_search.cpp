#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int binarySearch(int arr[],int n,int key){
    int start=0,end=n-1;
    // int mid=(start+end)/2;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            start=mid+1;
        }
        else if(arr[mid]<key){
            end=mid-1;
        }
        // mid=(start+end)/2;
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    
    int arr[]={35,30,28,25,22,19,17,14,13,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=35;

    printArr(arr,n);
    cout<<key<<" found at position "<<binarySearch(arr,n,key);

    return 0;
}