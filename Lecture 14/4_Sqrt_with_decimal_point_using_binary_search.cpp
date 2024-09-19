#include <iostream>
using namespace std;
findsqrt(int n){
    int start=0,end=n,ans;
    long mid;
    mid=start+(end-start)/2;
    while(start<=end){
        if(mid*mid>n){
            end=mid-1;
        }else{
            ans=mid;
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

double moreprecision(int n,int f,int temp){
    double factorial=1;
    double ans=temp;
    for(int i=0;i<f;i++){
        factorial=factorial/10;
        for(double j=ans;j*j<n;j=j+factorial){
            ans=j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter no :";
    cin>>n;
    int temp=findsqrt(n);
    cout<<moreprecision(n,3,temp);
    return 0;
}