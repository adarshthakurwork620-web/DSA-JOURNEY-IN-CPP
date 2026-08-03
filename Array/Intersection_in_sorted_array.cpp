#include<iostream>
using namespace std;
int intersection(int arr1[], int arr2[], int n ,int m )
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int element = arr1[i];
        for (int j = 0; j < m; j++)
        {
            if (element == arr2[j] )
            {
                cout<<element <<" ";
                // Same element dobara match na ho.
                arr2[j] = -111223;
                break;
            }   
        } 
    }  
}
int main()
{
    int arr1[100],arr2[100];
    int n , m;
    cout<<"Enter the size of both array:";
    cin>>n>>m;
    cout<<"Enter the element of 1st array:";
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the element of 2nd array:";
    for (int j = 0; j < m; j++)
    {
        cin>>arr2[j];
    }
    intersection( arr1 , arr2 ,n , m);
    
}