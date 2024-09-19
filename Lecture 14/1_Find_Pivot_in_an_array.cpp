#include <iostream>
using namespace std;
int main(){
    int arr[]={3,8,10,17,1,2},start=0,end;
    end=(sizeof(arr)/sizeof(arr[0]))-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]>arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    cout<<end;
    return 0;
}