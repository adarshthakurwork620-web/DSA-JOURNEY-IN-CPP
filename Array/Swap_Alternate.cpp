#include<iostream>
using namespace std;
int input(int arr[] , int n)
{
    cout<<"Enter the elemant:";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
}
int sawp_alternate(int arr[] , int n)
{
    for (int i = 0; i < n ; i=i+2)
    {
        // if (i+1 < n)
        // {
        //     int temp = arr[i];
        //     arr[i] = arr[i+1];
        //     arr[i+1] = temp;
        // } 
        if (i+1 < n)
        swap(arr[i],arr[i+1]);
    }    
}
int display(int arr[] , int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }   
}
int main()
{
    int arr[100],n;
    cout<<"Enter the size of array:";
    cin>>n;
    input(arr,n);
    sawp_alternate( arr ,n);
    display(arr, n);
}