#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    int v;
    if(n==1){
        v=1;
    }else if(n<=7){
       v=2; 
    }else{
      v=n/7;
      v*=2;
      if(n%7>=1){
        v++;
      }
    }
    int mini=0;
    if(n<=5){
        mini=0;
    }else if(n==6){
        mini=1;
    }else if(n<=12){
        mini=2;
    }else{
         mini=v;
    }
    cout<<mini<<" "<<v<<endl;
    return 0;
}