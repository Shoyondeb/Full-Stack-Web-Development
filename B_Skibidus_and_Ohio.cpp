#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str; 
        int flag=0;
        for(int i=0; i<str.size()-1; i++){ 
            if(str[i]==str[i+1]){
                flag=1;
            }
        } 
        if(flag==1){
            cout<<1<<endl;
        }else{
            cout<<str.size()<<endl;
        }
    }
    return 0;
}