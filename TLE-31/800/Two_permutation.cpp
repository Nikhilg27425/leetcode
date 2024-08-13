#include<bits/stdc++.h>
#define int long long 
using namespace std ;
signed main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int a,b ;
        cin>>a>>b ;
        if((a==b) && (n==a)){
            cout<<"Yes"<<endl ;
        }
        else if((a+b>=n)||(n-a-b==1)){
            cout<<"No"<<endl ;
        }
        else{
            cout<<"Yes"<<endl ;
        }
    }
    return 0 ;
}

