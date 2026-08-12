#include<iostream>
using namespace std;
void move()
{
    int arr[6]={0,2,0,1,5,0};
    int i = 0;
    for (int j = 0; j < 6; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[i],arr[j]);
            i++;
        }   
    }
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    move();
}