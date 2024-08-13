#include<bits/stdc++.h>
#define int long long 
using namespace std ;
signed main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        vector<int> v(n) ;
        for(int i=0 ;i<n ;i++){
            cin>>v[i] ;
        }
        int  p = n+1 ;
        for(int i=0 ;i<n ;i++){
            v[i] = p - v[i] ;
            cout<<v[i]<<" " ;
        }
        cout<<endl ;
    }
    return 0 ;
}





