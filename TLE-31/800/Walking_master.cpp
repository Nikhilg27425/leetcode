#include<bits/stdc++.h>
#define int long long 
using namespace std ;
signed main(){
    int t ;
    cin>>t ;
    while(t--){
        int x1,y1,x2,y2 ;
        cin>>x1>>y1>>x2>>y2 ;
        int steps =0 ;
        int along_xy_gap = y2-y1 ;
        if(y1>y2 || x2>x1+y2-y1){
            cout<<"-1"<<endl ;
        }
        else{
            while(along_xy_gap--){
            x1++ ;
            y1++ ;
            steps++ ;
            }
            int p = x1-x2 ;
            x1-=p ;
            if(p<0){
                cout<<"-1"<<endl ;
            }
            else{
                steps+=p ;
                if(x1==x2 && y1==y2){
                    cout<<steps<<endl ;
                }
                else{
                    cout<<"-1"<<endl; 
                }
            }
        }
        
    }
    return 0 ;
}



// It is possible to move from (a,b)
//  to (c,d)
//  if and only if d≥b
//  and a−b≥c−d
// , since the value of b
//  is always non-decreasing and the value of a−b
//  is always non-increasing.

