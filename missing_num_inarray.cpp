//Time O(log n)
//Space O(1)
//Leetcode yes
//issue seen : none
class Solution {
public:
    int missingElement(vector<int>& nums, int k) {
        int n = nums.size();
        int start = 0;
        int end = nums.size()-1;
        int missing=0;
        
        while(start <= end) {
            int mid = start + (end - start)/2;
            missing = nums[mid] - nums[0] - mid;
            if(missing < k) {
                start = mid + 1;
            } else {
                end = mid -1;
            }
        }
        missing = nums[end] - nums[0] - end;
        return nums[end] + (k-missing);
    }
};
