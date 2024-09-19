//CodeStudio
//https://www.codingninjas.com/codestudio/problems/aggressive-cows_1082559
bool isPossible(vector<int> &stalls, int k,int n,int mid){
        int cow=1,lastpos=stalls[0];
        for(int i=0;i<n;i++){
            if(stalls[i]-lastpos>=mid){
                cow++;
                if(cow==k){
                    return true;
                }
                lastpos=stalls[i];
            }
        }
        return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    int start=0,end,mid,min=stalls[0],max=stalls[0],n=stalls.size(),ans;
    sort(stalls.begin(),stalls.end());
    for(int i=0;i<n;i++){
        if(min>stalls[i])
            min=stalls[i];
        if(max<stalls[i])
            max=stalls[i];
    }
    end=max-min;
    
    while(start<=end){
        mid=start+(end-start)/2;
        if(isPossible(stalls,k,n,mid)){
            ans=mid;
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}