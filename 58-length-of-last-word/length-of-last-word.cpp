class Solution {
public:
    int lengthOfLastWord(string s) {
    int l = s.size();int a=0;
    for(int i= l-1;i>=0;i--)
    {
        if(s[i] != 32)
        {
           for(int j= l-1;j>=0;j--)
           { 
            
            a++;
            i--;
           if(i<0)
           return a;




            if(s[i]==32)
            {
            return a;
            }
           }
             

        }


    }

return 0;
    }
};