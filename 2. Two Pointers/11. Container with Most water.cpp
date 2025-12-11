class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;

        int left = 0;
        int right = height.size()-1;

        if(left == right) return 0;

        while(left < right){
            int area = min(height[right],height[left]) * (right - left);
            max_area = max(max_area,area);
            if(height[left] < height[right]){
                left++;
            }
            else right--;
        }

        return max_area;
    }
};
