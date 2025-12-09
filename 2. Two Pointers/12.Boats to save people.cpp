class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int boats=0;

        int left = 0;
        int right = people.size()-1;

        while(left <= right){
            if(people[left] + people[right] <= limit){
                boats++;
                left++;
                right--;
            }
            else {
                right--;
                boats++;
            }
        }

        return boats;
    }
};

// TC - O(nlogn) + O(n^2)
// SC - O(1)
