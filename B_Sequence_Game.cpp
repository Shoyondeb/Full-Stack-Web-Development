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
        int x;
        cin>>x;
        vec.push_back(x);
        for(int i=1; i<n; i++){
            int y;
            cin>>y;
            vec.push_back(y);
            if(x>y){
                vec.push_back(y);
            }
            x=y; 
        }
        cout<<vec.size()<<endl;
        for(int v:vec){
            cout<<v<<" ";
        }cout<<endl;
    }
    return 0;
}