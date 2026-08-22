#include<iostream>
using namespace std;

int peak_element(int arr[], int n)
{
    int start = 0;
    int end = n-1;

    while(start < end)
    {
        int mid = start + (end-start)/2;

        if(arr[mid] < arr[mid+1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }

    return start;
}

int main()
{
    int arr[7]={1,2,3,4,5,6,7};

    int index = peak_element(arr,7);

    cout<<"Peak Index: "<<index<<endl;
    cout<<"Peak Value: "<<arr[index];
}