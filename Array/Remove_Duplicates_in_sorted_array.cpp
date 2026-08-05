#include<iostream>
using namespace std;
int remove_duplicates(int arr[],int size)
{
    int i = 0 ;
    for(int j = 1 ; j < size ;j++)
    {
        if (arr[i] == arr[j])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    for (int j = 0; j <= i; j++)
    {
        cout<<arr[j]<<" ";
    }   
}
int main()
{
    int arr[8]={4,3,2,7,8,2,3,1};
    remove_duplicates(arr ,8);
}
    