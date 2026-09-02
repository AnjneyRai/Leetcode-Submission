class Solution {
public:
    int scoreOfString(string s) {
    int sum=0;int diff;
    
    for(int i=0;i<s.size()-1;i++)
    {   diff = abs(s[i]-s[i+1]);
        sum = sum + diff;
    }
       
    return sum;
    }
};