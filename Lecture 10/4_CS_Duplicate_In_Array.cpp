//codeStudio
//https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1

int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int length=sizeof(arr)/sizeof(arr[0]);
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=arr[i]^ans^i;  
    }
    return ans;
}