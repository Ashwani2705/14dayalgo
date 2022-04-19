class Solution {
public:
    void reverse(vector<int> &nums, int low, int high)
    {
        int temp;
        while(low < high)
        {
            temp = nums[low];
            nums[low] = nums[high];
            nums[high] = temp;
            low++;
            high--;
        }
    }
    void rotate(vector<int>& nums, int k) {
                 if(nums.size() < 2) return;
        int diff = k%nums.size();
        if(diff == 0) return;
        
        reverse(nums, 0, nums.size()-1);
        reverse(nums, 0, diff-1);
        reverse(nums, diff, nums.size()-1);

    }
};