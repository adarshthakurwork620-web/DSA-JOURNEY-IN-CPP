#include<iostream>
#include<math.h>
using namespace std;
int dec_to_bin(int n)
{
    int ans = 0 , place=1;
    while (n!=0)
    {
        int bit = n&1;
        ans= bit * place + ans;

        n=n>>1;
        place = place*10;
    }
    cout << ans;
}
int main ()
{
    int n;
    cout<<"Enter the dicimal number(+ve):";
    cin>>n;
    dec_to_bin(n);
}