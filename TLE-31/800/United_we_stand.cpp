#include<bits/stdc++.h>
#define int long long
using namespace std ;
signed main(){
    int t;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        vector<int> v(n) ;
        vector<int> largest ;
        vector<int> rest ;
        int max = INT_MIN ;
        for(int i=0;i<n ;i++){
            cin>>v[i] ;
            if(v[i]>max){
                max= v[i] ;
            }
        }
        int unique = 0 ;
        for(int i=0 ;i<n ;i++){
            if(v[i]!=max){
                unique++ ;
                rest.push_back(v[i]) ;
            }
            else{
                largest.push_back(v[i]) ;
            }
        }
        if(unique==0){
            cout<<"-1"<<endl ;
        }
        else{
            cout<<rest.size()<<" "<<largest.size()<<endl ;
            for(int i=0 ;i<rest.size() ;i++){
                cout<<rest[i]<<" " ;
            }
            cout<<endl ;
            for(int i=0 ;i<largest.size() ;i++){
                cout<<largest[i]<<" " ;
            }
            cout<<endl ;
        }

    }
    return 0 ;
}