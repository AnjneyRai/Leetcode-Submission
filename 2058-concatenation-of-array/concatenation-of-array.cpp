class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
       int n; n = nums.size();
        vector<int> ans(2*n);
    for (int i=0;i<n*2;i++)
    {
        while(i<n)
        {
            ans[i]=nums[i];
            break;
        }
        while(i>=n && i<2*n)
        {
            ans[i]=nums[i-n];
            break;
        }
    }

return ans;


    }
};