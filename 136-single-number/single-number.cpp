class Solution {
public:
    int singleNumber(vector<int>& nums) {
   int found = 0;
   for(int i =0;i<nums.size();i++)
   {
     found = nums[i] ^ found;
   }
        return found;
    
    }
};