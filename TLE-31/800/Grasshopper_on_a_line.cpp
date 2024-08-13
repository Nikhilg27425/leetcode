#include<bits/stdc++.h>
#define int long long 
using namespace std ;
signed main(){
    int t ;
    cin>>t ;
    while(t--){
        int x,k ;
        cin>>x>>k ;
        vector<int> ans ;
        if(x%k!=0){
            ans.push_back(x) ;
        }

        else if(k==2){
            if(x%2==0){
                ans.push_back(x-1) ;
                ans.push_back(1) ;
            }
            else{
                ans.push_back(x) ;
            }
        }

        else{
            ans.push_back(k*(x/k) -1) ;
            ans.push_back(1) ;
        }

        cout<<ans.size()<<endl ;
        for(int i=0 ;i<ans.size() ;i++){
            cout<<ans[i]<<" " ;
        }
        cout<<endl ;

    }
    return 0 ;
}

