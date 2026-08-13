#include<iostream>
using namespace std;
int find_unique(int arr[],int size)
{
    int unique = 0;
    for(int i = 0; i < size ; i++)
    {
        unique = unique^arr[i];
    }
    return unique;
}
int main()
{
    int arr[100],n;
    cout<<"Enter the size of array:";
    cin>>n; // 2m+1 ( same element 2 times and unique on time)
    cout<<"Enter the element of array(2m+1):";
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    int ans = find_unique(arr , n);
    cout <<"Unique element of array is :"<< ans;
}