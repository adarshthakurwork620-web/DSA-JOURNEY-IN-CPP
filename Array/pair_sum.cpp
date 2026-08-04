#include<iostream>
using namespace std;
int pair_sum()
{
    int arr[5]={1,5,4,3,2};
    int pairsum = 7;
    for (int i = 0 ; i < 5 ; i++)
    {
        int element = arr[i];
        for(int j = i+1 ; j < 5 ; j++)
        {
            if ( element + arr[j] == pairsum)
            {
                cout<<arr[i] <<" "<<arr[j]<<"\n";
            }
        }
    }
}
int main()
{
    pair_sum();
}