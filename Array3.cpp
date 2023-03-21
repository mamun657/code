#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,sa;
    cin>>s>>sa;
    while(s--)
    {
        int a[sa];
        for(int i=0 ; i<sa ; i++)
        {
            cin>>a[i];
        }
        for(int i=sa-1 ; i>0 ; i--)
        {
            cout<<a[i]<<endl
        }
    }
    return 0;
}
