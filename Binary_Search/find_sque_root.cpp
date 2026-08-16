#include<iostream>
using namespace std;
int sque_root(int num)
{
    int start=0;
    int end = num-1;
    int mid = start + (end-start)/2;
    int ans = 0;
    while(start<=end)
    {
        if (mid*mid == num)
        {
            return mid;
        }
        if (mid*mid > num)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid ;
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;

}
int main()
{
    int squeroot = sque_root(27);
    cout << squeroot;
}