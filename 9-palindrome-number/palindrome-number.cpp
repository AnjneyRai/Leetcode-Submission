class Solution {
public:
    bool isPalindrome(int x) {
      long long r,n,t;t = x;n = 0;
      if(x<0)
      {
        return false;
      }
      if(x>=0 && x<10)
      {
        return true;
      }
      while(t>0)
      {
      r = t%10;
      n = n*10 + r;
      t = t/10;
      }
      if (x == n)
      {
        return true;
      }
      else 
      return false;
    




    }
};