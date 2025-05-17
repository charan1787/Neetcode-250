class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0,count2=0;
        int m1=0,m2=0;
        for(int num:nums){
            if(count1==0 & num!=m2) {
                m1=num;
                count1++;
            }
            else if(count2==0 & num!=m1){
                m2=num;
                count2++;
            }
            else if(m1==num){
                count1++;
            }
            else if(m2==num){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        vector<int> ans;
        count1=0;
        count2=0;
        for(int num:nums){
            if(num==m1) count1++;
            else if(num==m2) count2++;
        }
        int check=nums.size()/3;
        if(count1>check) {
            ans.push_back(m1);
        }
        if(count2>check && m1!=m2) {

            ans.push_back(m2);
        }

        return ans;
    }
};

// https://leetcode.com/problems/majority-element-ii/
// Same logic as majority element 2
// Use 2 poniters and 2 counters

// small trick is to add num !=m1 and num !=m2 in Line 7,11
// Dry run for test case [2,1,1,3,1,4,5,6] with out the above two checks. We can find the error and why we sue these 2 checks.



