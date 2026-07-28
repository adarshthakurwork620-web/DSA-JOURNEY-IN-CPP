#include<iostream>
using namespace std;
int slargest(int size)
{
    int arr[size];
    for ( int i = 0; i < size ;i++)
    {
        cin>>arr[i];
    }
    int largest =arr[0];
    int slargest = INT16_MIN ;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>largest)
        {
            slargest =largest;
            largest =arr[i];
        }  
        else if (arr[i]<largest && arr[i]>slargest)
        {
            slargest=arr[i];
        }
          
    }
    int smallest =arr[0];
    int ssmallest = INT16_MAX;
    for (int i = 1; i < size; i++)
    {
        if (arr[i]<smallest)
        {
            ssmallest =smallest;
            smallest =arr[i];
        }  
        else if (arr[i] != smallest && arr[i]<ssmallest)
        {
            ssmallest=arr[i];
        }
          
    }
    cout<<"{"<<ssmallest<<","<<slargest<<"}"; 
}

int main()
{
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;
    slargest(n);
}