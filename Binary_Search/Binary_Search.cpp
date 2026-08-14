// element should be in montonic function. eg1:{6,5,4,3,2,1} ; eg2:{1,2,3,4,5,6}
#include<iostream>
using namespace std;
int binary_search(int arr[],int size,int key)
{
    int i = 0;
    int j = size-1;
    int mid = i+((j-i)/2);
    while (i<=j)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[i]<arr[i+1])
        {
            if (arr[mid] < key)
            {
                i = mid + 1;
            }
            else
            {
                j = mid - 1;
            }
        }
        else
        {
            if (arr[mid] > key)
            {
                i = mid + 1;
            }
            else
            {
                j = mid - 1;
            }
        }
        mid = i + ((j-i)/2);
    }
    return -1 ;
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
    int ans =binary_search(arr , size , key);
    cout<<key<<" "<<"is present at index :"<<ans;
}