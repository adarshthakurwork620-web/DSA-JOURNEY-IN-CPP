#include<iostream>
using namespace std;

int largest_element(int size)
{
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    for (int i = 1; i < size; i++) // max is all ready store first element.
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        
    }
    cout<<"Largest Element in an Array:"<<max;   
}
int main()
{
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;
    largest_element(n);
}