//
//  CHNUM.cpp
//  
//
//  Created by Mahfuz Ahmed on 1/3/19.
//

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define nl std::cout << "\n";
#define flush std::cout<<flush;

const double pi = 2*acos(0.0);
const long long mod = 1e9+7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #if 0
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int t,k,m,s;
    cin>>t;
    
    while (t--) {
        int n,NS=0;
        cin>>n;
        for (int i=0;i<n;i++) {
            int x;
            cin>>x;
            if(x<0) NS++;
        }
        n -= NS;
        if(NS>0 && n>0){
            cout<<max(n,NS)<<" "<<min(n,NS);nl;
        }else if(n == 0){
            cout<<NS<<" " << NS;nl;
        }else if(NS == 0){
            cout<<n<<" "<<n;nl;
        }
    }
    
    return 0;
}
