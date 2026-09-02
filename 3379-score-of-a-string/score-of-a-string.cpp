class Solution {
public:
    int scoreOfString(string s) {
    int sum=0;int diff;
    int l=s.size();
    for(int i=0;i<l-1;i++)
    {   diff = abs(s[i]-s[i+1]);
        sum = sum + diff;
    }
       
    return sum;
    }
};