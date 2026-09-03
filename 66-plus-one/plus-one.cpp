class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();int count = 0;int c;
    for(int i=n-1;i>=0;i--)
    {
    if(digits[i]==9)
    {
        count++;
    }
    else
    break;
    }
    c = count;

    if(count == 0)
    {
        digits[n-1]=digits[n-1]+1;
        return digits;
    }
    if(count == n)
    {
        for(int a=0;a<n;a++)
        {
        digits.pop_back();
        }
        digits.push_back(1);
        for(int b=0;b<n;b++)
        {
        digits.push_back(0);
        }
        return digits;
    }
    else
    {
       for(int d=0;d<c;d++)
        {
        digits.pop_back();
        }
        digits[(n-(c+1))] += 1;

        for(int e=0;e<c;e++)
        {
        digits.push_back(0);
        }
        return digits;
    }
    return digits;
    }
};