class Solution {
public:

    void merge(vector<int>& arr,int l,int m,int r){
        //int temp={0};
        vector<int> temp;
        int k=0;
        int i=l,j=m+1;

        while(i<=m && j<=r){
            if(arr[i] <= arr[j]){
                temp.push_back(arr[i]);
                i++;
                k++;
            }
            else{
                temp.push_back(arr[j]);
                j++;
                k++;
            }}
            while(i<=m){
                temp.push_back(arr[i]);
                k++;
                i++;
            }
            while(j<=r){
                temp.push_back(arr[j]);
                j++;
                k++;
            }
            
            for(int p=0;p<temp.size();p++){
                arr[l+p]=temp[p];
            }
        
    }
    void divide(vector<int> &arr,int l,int r){
            if(l>=r) return;
            int m = l + (r - l)/2;
            divide(arr,l,m);
            divide(arr,m+1,r);
            merge(arr,l,m,r);
            
        
    }
    vector<int> sortArray(vector<int>& nums) {
        divide(nums,0,nums.size()-1);
        return nums;
    }
};

// https://leetcode.com/problems/sort-an-array/
// Merge sort 

// Divide into 2 and them ,merge with i,j and k pointers
// K is for temporary array for merging.

// divide by using recursion
