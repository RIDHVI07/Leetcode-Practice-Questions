class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        unordered_map<int,int> m;
        int ans;
        
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
       for(int j=0;j<=nums.size();j++)
       {
           if(m.find(j)==m.end())
           {
               ans = j;
           }
           
       }
        
        return ans;
    }
};