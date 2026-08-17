#include<iostream>
using namespace std;
int first_Occ(int arr[],int size ,int key)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid -1;
        }
        mid = start + (end-start)/2;   
    }
    return ans; 
}
int last_Occ(int arr[],int size ,int key)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid -1;
        }
        mid = start + (end-start)/2;   
    }
    return ans; 
}
int main()
{
    int arr[100];
    int size , key;
    cout<<"Enter the size of Array:";
    cin>>size;
    cout<<"Enter the element of Array:";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key:";
    cin>>key;
    int first = first_Occ(arr , size , key);
    int last = last_Occ(arr , size  , key);
    cout<<"First Occurrence of "<<key<<" is present at index :"<<first <<"\n";
    cout<<"Last Occurrence of "<<key<<" is present at index :"<<last;
    
}