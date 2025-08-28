class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    vector<vector<int>> result;
    int i = 0;
    int n = intervals.size();

    int x = newInterval[0];
    int y = newInterval[1];

    while(i < n && intervals[i][1] < x){
        result.push_back(intervals[i]);
        i++;
    }

    while(i < n && (intervals[i][0] <= y)){
        x = min(x,intervals[i][0]);
        y = max(y,intervals[i][1]);
        i++;
    }
    result.push_back({x,y});

    while(i < n){
        result.push_back(intervals[i]);
        i++;
    }

    return result;
    }
};

// Insert all that are less than this interval

// merge the overlapping intervals

// then add all others greater than the new interval

// do all this in single traversal

// use three while loops but same i 

// TC : O(n)
// SC : O(n)

// n = size of interval array
