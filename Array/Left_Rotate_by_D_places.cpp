#include<iostream>
using namespace std;
int Rotate_at_D_place(int arr[] , int size , int D)
{
   for (int i = 0; i < D; i++)
   {
      for (int j = 0; j < size-1 ; j++) // right rotate me loop ulta chlaoo (j= sixe-1 ; j>0; j--)
      {
         if (i+1 < size)
         swap(arr[j],arr[j+1]); // arr[j],arr[j-1];
      } 
   }  
}
int display(int arr[] , int n)
{
    for (int j = 0; j < n; j++)
    {
        cout<<arr[j]<<" ";
    }   
}
int main()
{
   int arr[7]={1,2,3,4,5,6,7}; 
   Rotate_at_D_place(arr , 7,3);
   display(arr, 7);
}
