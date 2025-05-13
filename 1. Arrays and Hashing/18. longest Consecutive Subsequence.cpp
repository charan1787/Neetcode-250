class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set <int> s;
        for(int num:nums){
            s.insert(num);
        }
        int count=0,maxcount=0;

        for(int num:s){
            if(s.find(num-1) == s.end()){
                count=0;
                while(s.find(num+count) !=s.end()){
                   count++;
                }
                maxcount=max(maxcount,count);
            }
        }

        return maxcount;
        
    }
};

// https://leetcode.com/problems/longest-consecutive-sequence/
// Make a set 
// loop on it
// check if prev num not exists then moove foerward to increase the count 
// else just continue the loop dont touch count

// thake the max of counts;
