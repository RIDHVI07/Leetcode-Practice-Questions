class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int> m;

for(int i=0;i<edges.size();i++){
    for(int j=0;j<2;j++){
        m[edges[i][j]]++;
    }
}
int n;
for(auto it=m.begin();it!=m.end();it++){
    if(it->second == edges.size()){
        n=it->first;
    }
}

        return n;

    }
};