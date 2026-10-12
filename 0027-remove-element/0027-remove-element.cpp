class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = 0;
        while(j < nums.size()){
            if(nums[j] != val){
                swap(nums[j],nums[i]);
                 i++;
            }
            j++;
        }
        return i;
    }
};