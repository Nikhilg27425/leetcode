// #include<bits/stdc++.h>
// #define int long long 
// using namespace std ;
// signed main(){
//     int t ;
//     cin>>t ;
//     while(t--){
//         int n ;
//         cin>>n ;
//         vector<int> v(n) ;
//         int n_one =0 ;
//         int n_zero = 0 ;
//         for(int i=0 ;i<n ;i++){
//             cin>>v[i] ;
//             v[i] = v[i]%2 ;
//             if(v[i]==0){
//                 n_zero++ ;
//             }
//             else{
//                 n_one++ ;
//             }
//         }
//         int ans = n_zero-n_one ;
//         if(ans<0){
//             ans = (-1)*ans ;
//         }
//         cout<<ans<<endl ;
//     }
//     return 0 ;
// }


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
        for(int i=0 ;i<n ;i++){
            cin>>v[i] ;
        }
        int ans = 0 ;
        int cons  =0 ;
        for(int i=0 ;i<n-1 ;i++){
            if((v[i]%2)==(v[i+1]%2)){
                ans++ ;
                // v[i+1] *= v[i] ;
                //v[i]=-1 ;
            }
        }
        cout<<ans<<endl ;
    }
    return 0 ;
}
