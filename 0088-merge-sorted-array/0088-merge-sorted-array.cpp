class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1;       // Pointer for the end of valid nums1 elements
        int p2 = n - 1;       // Pointer for the end of nums2
        int p = m + n - 1;    // Pointer for the end of the total capacity in nums1

        // While there are still elements to process in nums2
        while (p2 >= 0) {
            if (p1 >= 0 && nums1[p1] > nums2[p2]) {
                nums1[p--] = nums1[p1--];
            } else {
                nums1[p--] = nums2[p2--];
            }
        }
    }
};