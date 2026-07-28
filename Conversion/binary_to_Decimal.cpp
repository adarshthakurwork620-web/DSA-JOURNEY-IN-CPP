#include<iostream>
#include<math.h>
using namespace std;
int bin_to_dic(int n)
{
    int i= 0 ,ans =0;
    while(n!=0)
    {
        int digit = n%10;
        if (digit==1)
        {
            ans=ans+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<ans;
}
int main()
{
    int n;
    cout<<"Enter the binary number:";
    cin>>n;
    bin_to_dic(n);
}