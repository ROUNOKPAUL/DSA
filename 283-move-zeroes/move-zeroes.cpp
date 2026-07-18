class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0; // position where next non-zero element should go

        for (int j = 0; j < n; j++) {
            if (nums[j] != 0) {
                if (i != j) {
                    swap(nums[i], nums[j]);
                }
                i++;
            }
        }
    }
};