#include<bits/stdc++.h>
#define int long long 
using namespace std ;
signed main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        string s ;
        cin>>s ;
        vector<int> v(n) ;
        for(int i=0 ;i<s.size() ;i++){
            v[i] = s[i] - 48  ;
        }
        int *p1 = &v[0] ;
        int *p2 = &v[n-1] ;
        int counter_n =0 ;
        while((*p1!=*p2) && (p2>p1) ){
            counter_n+= 2 ;
            p1++ ;
            p2-- ;
        }
        int ans = n - counter_n ;
        cout<<ans<<endl ;
    }
    return 0 ;
}
