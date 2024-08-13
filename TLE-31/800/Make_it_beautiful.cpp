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
        int max = INT_MIN ;
        int max_count = 0 ;
        int common = -1 ;
        for(int i=0 ; i<n ;i++){
            cin>>v[i] ;
            if(v[i]>max){
                max = v[i] ;
            }
        }
        for(int i=0 ; i<n ;i++){
            if(v[i]==max){
                max_count++ ;
            }
        }
        if(max_count==n){
            cout<<"NO"<<endl ;
        }
        else{
            cout<<"YES"<<endl ;
            vector<int> ans(n)  ;
            for(int i=0 ; i<n ;i++){
                ans[i] = 0 ;
            }
            int *p1 = &v[0] ;
            int *p2 = &v[n-1] ;
            int id =0 ;
            while(p1<=p2){
                ans[id] = *p2 ;
                if(id+1<=n-1){
                    ans[id+1] = *p1 ;
                }
                
                id+=2 ;
                p1++ ;
                p2-- ;
            }
            // ans[0] = v[n-1] ;
            // for(int i=1 ; i<n ;i++){
            //     ans[i] = v[i-1] ;
            // }
            for(int i=0 ; i<n ;i++){
                cout<<ans[i]<<" " ;
            }
            cout<<endl ;
        }
        
    }
    return 0 ;
}

