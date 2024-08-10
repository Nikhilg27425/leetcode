#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;

    while(t--){
        int n ;
        cin>>n ;
        vector<int> a(n-1) ;
        for(int i=0 ;i<n-1;i++){
            cin>>a[i] ;
        }
        int ans = 0 ;
        for(int i=0 ;i<a.size();i++){
            ans+=a[i] ;
        }
        ans = (-1)*ans ;
        cout<<ans<<endl ;
    }

    return 0 ;

}