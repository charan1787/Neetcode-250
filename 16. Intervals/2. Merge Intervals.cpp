class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> result;
        sort(intervals.begin(),intervals.end());
        int i = 0;
        while(i < n){
            int x = intervals[i][0];
            int y = intervals[i][1];
            
            while(i+1 < n && y >= intervals[i+1][0]){
                y = max(y,intervals[i+1][1]);
                i++;
            }
            result.push_back({x,y});
            i++;

        }

        return result;
    }
};

// Sort the intervals first

// after sorting only condition of overlap is [2,4], [2,5] or [2,4],[3,5] 

//  1 -> 2 == 2 
// 2 -> 3 <= 4 
 
// in both these conditions 2nd point x is less than 1st point y. put that condition and merge.

// TC - O(n)
// SC - O(n) 

// n is the size of interval array
 
 
