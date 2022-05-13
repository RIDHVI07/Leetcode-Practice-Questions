class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n0 = 0;
        int n1 =0;
        int n2 = 0;
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                n0++;
            else if(nums[i]==1)
                n1++;
            else
                n2++;
        }
        
        for(int i = 1;i<=n0;i++){
            nums[k]=0;
            k++;
        }
        
         for(int j = 1;j<=n1;j++){
            nums[k]=1;
            k++;
         }
        
          for(int j = 1;j<=n2;j++){
            nums[k]=2;
            k++;
         }
        
        
        
    }
};