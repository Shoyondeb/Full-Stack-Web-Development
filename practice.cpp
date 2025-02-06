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
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            vec.push_back(x);
        }
        for(int i=0; i<n; i++){
            cout<<vec[i]<<" ";
        }
    }
}