#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int johnny =0;
        int jacky = 0;
        int swap = 0;
        int arr1[n],arr2[m];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
            johnny += arr1[i];
        }
        for(int i=0;i<m;i++){
            cin>>arr2[i];
            jacky += arr2[i];
        }
        if(johnny > jacky){
            cout<<"0\n";
            continue;
        }
        sort(arr1, arr1+n);
        sort(arr2, arr2+m, greater<int>());

        int i = 0;
        while(johnny <= jacky && i<n && i<m)
        {
            johnny += arr2[i] - arr1[i];
            jacky += arr1[i] - arr2[i];
            swap++;
            i++;
        }
        if(i == n && johnny <= jacky ){
            cout<<"-1\n";
        }
        else
        {
            cout<<swap<<"\n";
        }
        
    }
    return 0;
}