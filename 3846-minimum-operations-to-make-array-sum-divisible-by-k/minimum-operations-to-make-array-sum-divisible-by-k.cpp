class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long sum=0;int c=0;
         int s=nums.size();
        for(int i=0;i<s;i++)
        {
            sum = sum + nums[i];
        }
        int r= sum%k;
        if(r == 0)
        {
        return 0;
        }

        
        else
        return r;
    }
};