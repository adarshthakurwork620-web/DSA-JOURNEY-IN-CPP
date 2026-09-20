class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int feq = 0 , ans = 0 ;
        int n = nums.size();
        for(int i = 0 ; i<n ; i++){
            if (feq==0)
                ans=nums[i];
            if (ans == nums[i])
                feq++;
            else 
                feq--;
        }
        return ans;
    }
};