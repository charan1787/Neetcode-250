class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while(i >= 0 && j >= 0){
            if(nums1[i] > nums2[j]){
                nums1[k]=nums1[i];
                k--;
                i--;
            }
            else{
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
        // even if j finishes and i element stays they will be already in the right place only so no need to double copy.

        // just copy oher case if i finishes and j elements are left.
        while(j >= 0){
            nums1[k]=nums2[j];
            k--;
            j--;
        }

        //return nums1;


    }
};

// TC - O(m+n)
// SC - O(1)
