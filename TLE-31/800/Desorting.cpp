#include<bits/stdc++.h>
#define int long long 
using namespace std ;
signed main(){
    int t  ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        vector<int> v(n) ;
        int sorted =0 ;
        for(int i=0 ;i<n ;i++){
            cin>>v[i] ;
            if(i!=0){
                if(v[i]<v[i-1]){
                    sorted++ ;
                }
            }
        }
        if(sorted!=0){
            cout<<"0"<<endl ;
        }
        else{

            vector<int> diff ;

            for(int i=0 ;i<n-1 ;i++){
                int gap = v[i] - v[i+1] ;
                diff.push_back(gap) ;
            }

            int min_diff = diff[0];
            int min_diff_id =0 ;

            for(int i=0 ;i<diff.size() ;i++){
                if(diff[i] > min_diff){
                    min_diff = diff[i] ;
                    min_diff_id = i ;
                }
            }

            int count = 0 ;

            if(min_diff<0){
                int difference = v[min_diff_id+1]-v[min_diff_id] ;
                
                if(difference%2==0){
                   // count = (difference + 3)/2  ;
                    count = (difference )/2 + 1  ;
                }
                else{
                    //count = (difference+1)/2 ;
                    count = (difference )/2 + 1  ;
                }
                cout<<count<<endl ;
            }
            else{
                cout<<"1"<<endl ;
            }

        }
    }
    return 0 ;
}



//  If we have ai=x,ai+1=y
// , we can make x>y
//  within ⌊(y−x)/2⌋+1
//  operations.


// count = (difference )/2 + 1  ;
//this will work for both the cases