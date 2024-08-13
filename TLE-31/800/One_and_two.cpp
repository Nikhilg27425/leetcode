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
        int no_of_two = 0;
        for(int i=0 ;i<n ;i++){
            cin>>v[i] ;
            if(v[i]==2){
                no_of_two++ ;
            }
        }
        if(no_of_two%2!=0){
            cout<<"-1"<<endl ;
        }
        else if(no_of_two==0){
            cout<<"1"<<endl ;
        }
        else{
            int index = 0 ;
            int id =0 ;
            int req_two = no_of_two/2 ;
            for(int i=0 ;i<n ;i++){
                if(v[i]==2){
                id++ ;
                }
                if(id==req_two){
                    index = i+1 ;
                    break ;
                }
            }
            cout<<index<<endl ;
        }

    }
    return 0 ;
}
