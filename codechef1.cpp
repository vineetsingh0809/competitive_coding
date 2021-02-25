#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long M, H;
        cin>>M>>H;

        int temp = M / (H*H);

        if (temp <= 18)
        {
            cout<<1<<"\n";
            continue;
        }
        if (temp >= 19 && temp <= 24)
        {
            cout<<2<<"\n";
            continue;
        }
        if (temp >= 25 && temp <= 29)
        {
            cout<<3<<"\n";
            continue;
        }
        if (temp >= 30)
        {
            cout<<"4"<<"\n";
        }
        
        
        
    }
    return 0;
    
}