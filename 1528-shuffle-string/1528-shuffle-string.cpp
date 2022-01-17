class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string arr[indices.size()];                
		string name;
        for(int i=0;i<indices.size();i++)
        {
            int ind=indices[i];
            arr[ind]=s[i];
        }
        for(int i=0;i<indices.size();i++){
            name=name+arr[i];
        }
        return name;
    }
    
};