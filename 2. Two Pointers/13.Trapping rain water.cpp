class Solution {
public:
    int trap(vector<int>& h) {
        int n = (int)h.size();
        if (n == 0) return 0;


        int peak = 0;
        for (int i = 1; i < n; i++) {
            if (h[i] > h[peak]) peak = i;
        }

        long long water = 0;

        int leftMax = 0;
        for (int i = 0; i < peak; i++) {
            leftMax = max(leftMax, h[i]);
            water += leftMax - h[i];
        }

        int rightMax = 0;
        for (int i = n - 1; i > peak; i--) {
            rightMax = max(rightMax, h[i]);
            water += rightMax - h[i];
        }

        return (int)water;
    }
};

// O(n) TC
// O(n) SC
