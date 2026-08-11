#include<iostream>
using namespace std;
int maxcount()
{
    int arr[8]={1,1,0,2,7,2,2,1};
    int key=7;
    int count=0;
    int maxcount=0;
    for (int i = 0; i < 8; i++)
    {
        if(arr[i] == key)
        {
        count++ ;
        maxcount=max(maxcount,count);
        }
        else 
        {
        count = 0 ;
        }
    }
    return maxcount;
}
int main()
{
    int ans = maxcount();
    cout<<ans;
}