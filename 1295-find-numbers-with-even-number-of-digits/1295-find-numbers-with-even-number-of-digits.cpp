class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evencount = 0 ;
        for (int i = 0 ; i < nums.size() ; i++){
            int number = nums[i];
            int count = 0 ; 
            while(number != 0){
                number = number/10;
                count++;
            }
          if( count % 2 == 0){
            evencount++;
          } 
        }
        return evencount;
    }
};