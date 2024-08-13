#include<bits/stdc++.h>
#include<algorithm>
using namespace std ;

int main(){
    long long int t ;
    cin>>t ;
    while(t--){
        long long int n,k ;
        cin>>n>>k ;
        vector<long long int> a(n) ;
        for(long long int i=0 ;i<n ;i++){
            cin>>a[i] ;
        }
        // sort(a.begin(),a.end()) ;
        long long int count =0 ;
        for(long long int i=0 ;i<n-1 ;i++){
            if(a[i]<=a[i+1]){
                count++ ;
            }
        }
        string ans = "NO" ;
        if(k>1){
            ans="YES" ;
        }
        else if(count==n-1){
            ans="YES" ;
        }
        else{
            ans = "NO" ;
        }
        cout<<ans<<endl ;
    }
    return 0 ;
}