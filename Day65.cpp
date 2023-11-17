class Solution { 
public:
    int minPairSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end()); // Sort the array

        int left = 0, right = nums.size() - 1;
        int maxPairSum = INT_MIN;

        while (left < right) {
            int pairSum = nums[left] + nums[right];
            maxPairSum = std::max(maxPairSum, pairSum);
            left++;
            right--;
        }

        return maxPairSum;
        
    }
};
