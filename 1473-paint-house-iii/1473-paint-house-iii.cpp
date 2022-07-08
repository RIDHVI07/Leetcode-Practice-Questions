class Solution {
public:
      int mincost = INT_MAX;
    int paint(vector<int>&houses, int si,vector<vector<int>>&cost,int m,int n,int target,int prev,vector<vector<vector<int>>>&dp){
        
        if(si>=m && target == 0)return 0;
        if(si>=m ||target<0)return -1;
        if(prev!=-1 && dp[si][target][prev]!=-2)return dp[si][target][prev];
        if(houses[si]!=0){
            int k = 0;
        if(houses[si]!=prev)k++;
            int a=paint(houses,si+1,cost,m,n,target-k,houses[si],dp);
            if(prev!=-1)dp[si][target][prev] = a;
            return a;    
        }
        
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            
            int x = cost[si][i];
            if(i+1 != prev){
              int a =  paint(houses,si+1,cost,m,n,target-1,i+1,dp);
              if(a!=-1)mini = min(mini,a+x);
            }
            else{
                int a =paint(houses,si+1,cost,m,n,target,i+1,dp);
                if(a!=-1)mini = min(mini,a+x);
            }     
        }
      if(prev!=-1){
          dp[si][target][prev] = (mini==INT_MAX?-1:mini);
      }
        return mini==INT_MAX?-1:mini; 
    }
    
    
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
       
        vector<vector<vector<int>>> dp(m+1,vector<vector<int>>(target+1,vector<int>(n+1,-2)));
        return paint(houses,0,cost,m,n,target,-1,dp);
    
    }
};