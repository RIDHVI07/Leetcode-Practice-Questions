class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size()-1;
int left=0;
int right=n;
vector<int> V;
while(right-left>=k){
if(abs(arr[left]-x)>abs(arr[right]-x)) left++;
else right--;
}
while(left<=right){
V.push_back(arr[left]);
left++;
}
        
        return V;
    }
};