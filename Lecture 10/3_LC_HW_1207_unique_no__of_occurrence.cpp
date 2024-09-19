//LeetCode 1207 
//Homework Solved bootforce solution
//https://leetcode.com/problems/unique-number-of-occurrences/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int size=arr.size();
        
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                if(arr[i]>arr[j]){
                    swap(arr[i],arr[j]);
                }
            }
        }
        
        int k=0;
        int count[1000],key=0;
        for(int i=0;i<size;i=key){
            int k2=0;
            for(int j=0;j<size;j++){
                if(arr[i]==arr[j]){
                    k2++;
                    count[k]=k2;
                    key++;
                    
                }
            }
            k++;
        }
        
        for(int i=0;i<k;i++){
            for(int j=i+1;j<k;j++){
                if(count[i]==count[j]){
                    return false;
                }
            }
        }
        return true;
            
            
    }
};