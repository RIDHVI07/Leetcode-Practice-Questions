class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int flag=0;
string s,result;
for(int i=0;i<words.size();i++){
   s=words[i];
   int n=s.length();
   for(int i=0;i<n;i++){
       if(s[i]==s[n-i-1]){
           flag=1;
       }
       else{
           flag=0;
           break;
       }
   }

   if(flag){
      result =s;
       break;
   }

}
        return result;
    }
};