class Solution {
public:
    int xorOperation(int n, int start) {
         vector<int> num;
    
    for(int i=0;i<n;i++){
        num.push_back(start+(2*i));
    }
    int sum = num[0];
    for(int i=1;i<n;i++){
        sum = sum ^ num[i];
    }

    return sum;

    }
};