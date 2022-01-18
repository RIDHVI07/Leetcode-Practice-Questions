class Solution {
public:
    bool isPalindrome(int x) {
          if(x<0){
         return false;
    }
else{
    int temp = x,a;
    long m=0;

    while(x!=0){
      a=x%10;
      m=m*10+a;
      x=x/10;
    }

    if(m==temp){
        return true;
    }
    else{
        return false;
    }
}
    }
};