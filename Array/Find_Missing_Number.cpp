#include<iostream>
using namespace std;
int missing_number()
{
    int arr[8]={3,2,0,5,1,6,7,8};
    int sum=0;
    int sum1=0;
    for (int i = 0; i < 8; i++)
    {
        sum += i;
    }
    for (int i = 0; i < 8; i++)
    {
        sum1 += arr[i];
    }
    int missing_number = sum1 - sum;

    return missing_number;
}
int main()
{
    int ans = missing_number();
    cout<<ans;
}