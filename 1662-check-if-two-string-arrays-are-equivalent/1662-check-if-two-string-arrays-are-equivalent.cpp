class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string result1,result2;

for(int i=0;i<word1.size();i++){
    result1+=word1[i];
}

for(int i=0;i<word2.size();i++){
    result2+=word2[i];
}

if(result1==result2){
   return true;
}
else{
   return false;
}
    }
};