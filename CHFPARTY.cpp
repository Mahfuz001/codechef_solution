//
//  CHFPARTY.cpp
//  
//
//  Created by Mahfuz Ahmed on 17/2/19.
//

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define br std::cout << "\n";
#define flush std::cout<<flush;
#define push push_back

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
    int t;
    cin>>t;
    
    while (t--) {
        int n,counter=0;
        cin>>n;
        vector<int> vec;
        while (n--) {
            int x;
            cin>>x;
            vec.push(x);
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++){
            if(vec[i] <= counter){
                counter++;
            }
        }
        cout<<counter;br;
    }
    
    return 0;
}
