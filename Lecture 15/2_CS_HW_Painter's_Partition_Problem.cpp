//CodeStudio
//https://www.codingninjas.com/codestudio/problems/painter's-partition-problem_1089557
int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int n=boards.size(),start,end,mid,ans,sum=0,max=boards[0];

    for(int i=0; i<n; i++){
        sum+=boards[i];
        if(max<boards[i])
            max=boards[i];
    }
    
    start=max;
    end=sum;
    
    while(start<=end){
        mid=start+(end-start)/2;
        int painters=1,boardSum=0;
        
        for(int i=0;i<n;i++){
            boardSum+=boards[i];
            if(boardSum>mid){
                painters++;
                boardSum=boards[i];
            }
        }
        
        if(painters<=k){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
        
    }
    return ans;
}