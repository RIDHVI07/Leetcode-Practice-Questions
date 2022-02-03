class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int total = 0;
        int count = 0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] != val){
                nums[count] = nums[i];
                count++;
                total++;
            }
        }
        
        return total;
    }
};