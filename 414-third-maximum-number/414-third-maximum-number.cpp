class Solution {
public:
    int thirdMax(vector<int>& nums) {
         set<int> s(nums.begin(),nums.end());

    if(s.size()<3){
       int max;
       if(!s.empty())
          max =*(s.rbegin());
          return max;
    }
    else{
    auto it = s.end();

   for(int i=0;i<3;i++){
       it--;
   }
      return *it;
    }
    }
};