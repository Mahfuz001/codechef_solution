/*
 * REDONE.cpp
 * 
 * Created by Mahfuz Ahmed on 04/05/2019.
 * 
 */

#include <bits/stdc++.h>
using namespace std;
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define mp make_pair
#define forn(i, n) for(ll i = 0; i < n; i++)

typedef long long ll;
//~ const double pi = 2*acos(0.0);
const long long mod = 1e9+7;
//~ const int MAX_N = 1e6+5;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int t; cin >> t;
    while(t--){
		ll n; cin >> n;
		vector<ll> vec;
		
		forn(i, n){
			vec.pb(i+1);
		}
		
		while(vec.size() != 1){
			ll x = vec[0], y = vec[1];
			ll res = ((x+y)+(x*y)) % mod;
			vec.pb(res);
			vec.erase(vec.begin()+0);
			vec.erase(vec.begin()+0);
		}
		cout << vec[0] << "\n";
		
	}
    

    return 0;
}
