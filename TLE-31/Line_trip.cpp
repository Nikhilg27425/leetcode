#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n,x ;
        cin>>n>>x ;
        vector<int> a(n) ;
        for(int i=0 ;i<n ;i++){
            cin>>a[i] ;
        }

        int max_count = 0;
        vector<int> line(x+1) ;
        for(int i=0 ;i<x+1 ;i++){
            line[i] = 0 ;
            for(int j=0 ;j<n ;j++){
                if(i==a[j]){
                    line[i]=1 ;
                }
            }
        }



        int k = 0;
        int lf_id = 0 ;
        for(int i=0 ;i<x+1 ;i++){
            if(line[i]!=0){
                lf_id =i ;
                for(int j=i+1 ;j<x+1 ;j++){
                    int rg_id ;
                    if(line[j]==1){
                        rg_id =j ;
                        k = rg_id - lf_id;
                        if(k>max_count){
                            max_count = k ; 
                        }
                        break ;
                    }
                }
            }
        }

        if(line[0]==0){
            for(int i=1 ;i<line.size();i++){
                int k  ;
                if(line[i]==1){
                    k=i ;
                    if(k>max_count){
                        max_count = k ;
                    }

                    break ;
                }
            }
        }

        int rv = 0 ;
        for(int i=x-1 ;i>=0 ;i--){
            if(line[x]==1){
                break ;
            }
            if(line[i]==1){
                int pp ;
                pp =i ;
                rv = x - pp ; 
                break ;
            }
        }

        int ulta = 2*rv ;
        if(ulta>max_count){
            max_count = ulta ;
        }
        cout<<max_count<<endl ;
    }
    return 0 ;
}



//better solution

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(false); cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    int prev = 0, ans = 0;
    for (int i = 0; i < n; ++i) {
      int a; cin >> a;
      ans = max(ans, a - prev);
      prev = a;
    }
    ans = max(ans, 2 * (x - prev));
    cout << ans << '\n';
  }
}