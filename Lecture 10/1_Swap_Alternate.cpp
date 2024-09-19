#include <iostream>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int swapAlternate(int arr[],int n){
    for(int i=0;i<n-1;i=i+2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    cout<<endl;

    return 0;
}

int main()
{
    int arr[]={1,2,5,4,3,6,4,7,9,5,6};
    int length=sizeof(arr)/sizeof(arr[0]);

    cout<<"Before Swap"<<endl;
    printArr(arr,length);

    swapAlternate(arr,length);
    
    cout<<"After Swap"<<endl;
    printArr(arr,length);
    return 0;
}