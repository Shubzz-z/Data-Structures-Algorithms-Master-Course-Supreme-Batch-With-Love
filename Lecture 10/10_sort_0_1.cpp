#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        }
        if(arr[j]==1){
            j--;
        }
        if(arr[i]==1&&arr[j]==0&&i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
}

int main(){
    
    int arr[]={0,0,0,0,0,1,1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    sort(arr,n);
    printArr(arr,n);

    return 0;
}