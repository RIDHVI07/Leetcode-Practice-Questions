class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
           vector<int> result(nums.begin(),nums.end());

    for(auto it = nums.begin();it<nums.end();it++){
        result.push_back(*it);
    }

    return result;
    }
    
};