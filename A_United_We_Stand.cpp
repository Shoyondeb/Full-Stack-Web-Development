#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vec;
        map<int,int>mp;
        int mini=INT_MAX;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            vec.push_back(x);
            mp[x]++;
            mini=min(mini,x);
        }
        if(mp.size()==1){
            cout<<-1<<endl;
            continue;
        }
        cout<<mp[mini]<<" "<<n-mp[mini]<<endl;
        for(int i=0; i<n; i++){
            if(mini==vec[i]){
                cout<<vec[i]<<" ";
            }
        }cout<<endl;
        for(int i=0; i<n; i++){
            if(mini!=vec[i]){
                cout<<vec[i]<<" ";
            }
        }
cout<<endl;
    }
    return 0;
}