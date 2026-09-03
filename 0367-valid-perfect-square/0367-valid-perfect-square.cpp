class Solution {
public:
    bool isPerfectSquare(int num) {
    // int i = 1;
    //  while (num > 0) {
    //      num -= i;
    //      i += 2;
    //  }
    //  return num == 0;

    int start = 0;
    int end = num;
    while(start <= end){
        long mid = start + (end-start)/2;
        if(mid*mid==num)
        {
            return true;
        }
        if(mid*mid>num){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return false;
    }
};