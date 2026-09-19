class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int missingnum = 1;
        for(int i = 0 ; i < nums.size() ; i++){
            if (nums[i] == missingnum){
                missingnum ++;
            }
            else if (nums[i] > missingnum){
                break;
            }
        }
        return missingnum;
    }
};