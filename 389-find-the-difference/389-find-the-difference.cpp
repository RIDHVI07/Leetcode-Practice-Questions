class Solution {
public:
    char findTheDifference(string s, string t) {
         int sum1 = 0;
        int sum2=0;

        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                sum1 = sum1 +0;
            }
            else{
            sum1 += s[i];
            }
        }

        
        for(int i=0;i<t.length();i++){
             if(t[i]==' '){
                sum2 = sum2 +0;
            }
            else{
            sum2 += t[i];
            }
        }

        return (char)(sum2 - sum1);
    }
};