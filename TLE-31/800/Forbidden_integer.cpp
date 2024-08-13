#include<bits/stdc++.h>
#define int long long 
using namespace std ;
signed main(){
    int t ;
    cin>>t ;
    while(t--){
        int n,k,x ;
        cin>>n>>k>>x ;
        vector<int> ans ;
        if(x!=1){
            cout<<"YES"<<endl ;
            while(n--){
                    ans.push_back(1) ;
            }
            cout<<ans.size()<<endl ;
            for(int i=0 ;i<ans.size() ;i++){
                cout<<ans[i]<<" " ;
            }
            cout<<endl ;
        }
        else if((x==1 && n==1) || (k==1 && x==1) || (k==2 && x==2 &&  n!=2) || (n%2!=0 && k==2 && x==1)){
            cout<<"NO"<<endl ;
        }
        else{
            cout<<"YES"<<endl ;
            
            if(n%2==0 && x!=2){
                int q = n/2 ;
                while(q--){
                    ans.push_back(2) ;
                }
            }

            else{
                int rem = n-3 ;
                ans.push_back(3) ;
                int quotient = rem/2 ;
                while(quotient--){
                    ans.push_back(2) ;
                }
            }

            cout<<ans.size()<<endl ;
            for(int i=0 ;i<ans.size() ;i++){
                cout<<ans[i]<<" " ;
            }
            cout<<endl ;

        }
    }
    return 0 ;
}


