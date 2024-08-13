#include<bits/stdc++.h>
#define int long long
using namespace std ;
signed main(){
    int n ;
    cin>>n ;
    vector<int> v(n) ;
    int min = INT_MAX ;
    for(int i=0 ;i<n ;i++){
        cin>>v[i] ;
        if(v[i]<0){
            v[i] = (-1)*v[i] ;
        }
        if(v[i]<min){
            min = v[i] ;
        }
    }
    cout<<min ;
    return 0 ;
}