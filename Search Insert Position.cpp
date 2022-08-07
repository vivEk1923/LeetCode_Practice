class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       long int n = nums.size() - 1;
        long int low = 0, high = n;
        
        while(low <= high)
        {
           long int mid = low + (high - low)  / 2;
                
                if(nums[mid] == target)
                    return mid;
                
             if(nums[mid] > target)
                high = mid - 1;
                else
                    low = mid + 1;
                   }
        return low;        
    }
};