class Solution {
public:
    void reverse(vector<int>& nums,int i,int j){
        while(i<j)
        {
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
    }    
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        // int j = 0;
        // while(j < k)
        // {
        //     int i = nums.size() - 1;
        //     while(i > 0)
        //     {
        //         swap(nums[i], nums[i-1]);
        //         i--;
        //     }
        //     j++;
        // }
        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, nums.size() - 1);
    }
};