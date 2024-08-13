#include<bits/stdc++.h>
#define int long long
using namespace std ;

int gcd(int a,int b){
    int r ;
     while(b != 0){
        r = a % b ;
        a = b ;
        b = r ;
     }
    return a ;
}


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
        
        int in_gcd = gcd(v[0],v[1]) ;
        if(in_gcd<n){
            cout<<"Yes"<<endl ;
        }
        else{
            int count = 0 ;
            for(int i=0 ;i<n-1 ;i++){
                for(int j=i+1 ;j<n ;j++){
                    int p = gcd(v[i],v[j]) ;
                    if(p<=2){
                        count++;
                    }
                }
            }
            if(count==0){
                cout<<"No"<<endl ;
            }
            else{
                cout<<"Yes"<<endl ;
            }
        }
        
    }
    return 0 ;
}


