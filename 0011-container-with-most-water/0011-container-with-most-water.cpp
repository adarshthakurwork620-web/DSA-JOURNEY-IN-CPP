class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int i = 0;
        int j = height.size()-1;
        while(i<j){
            int l = j-i;
            int b = min(height[i],height[j]);
            int area = l*b;
            ans = max( ans,area);
            if(height[i] <= height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        // for(int i = 0 ; i < height.size() ; i++){
        //     for(int j =  i ; j < height.size() ; j++){
        //         int l = j-i;
        //         int b = min(height[i],height[j]);
        //         int area = l*b ;
        //         ans = max(ans, area);
        //     }
        // }
         return ans;
    }
};