#include<iostream>
using namespace std;
int lower_bound(int arr[] , int size , int key)
{
    int i = 0;
    int j = size-1;
    int ans=-1;
    while (i<=j)
    {
        int mid = i +(j-i)/2;
        if (arr[mid] >= key)
        {
            ans = mid;
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        } 
    }
    return ans;
}
int main()
{
    int arr[5] = {2,4,6,8,10};
    int lb = lower_bound (arr , 5 , 7);
    cout<<lb;
}