// arr=[1,2,3,4,5]
#include<iostream>
using namespace std;
int check(int n)
{
    int arr[n];
    bool check = 1;
    cout<<"Enter the element:";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Check Sorted array (1) or unsorted array (0):";
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>arr[i-1])
        {
            check = 1;
        }
        else
        {
            check = 0;
        }
    }
    cout << check;
}
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    check(n);
}