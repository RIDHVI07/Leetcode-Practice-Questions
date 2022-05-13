class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int flag = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
                flag =1;
        }
        
        if(flag)
            return true;
        else
            return false;
    }
    
};