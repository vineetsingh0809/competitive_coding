#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, k;
        cin>>n>>k;

        int point[k];

        for(int i=0;i<k;i++){
            cin>>point[i];
        }
        while(n--) {
            string s;
            cin>>s;

           long long counter = 0;
            for(int i=0; i<k;i++) {
                if (s[i] == '1')
                {
                    counter += point[i];
                }
                
            }
            cout<<counter<<"\n";
        }
    }
return 0;
}