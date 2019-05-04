/*
 * FASTFOOD.cpp
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
#define forn(i, n) for(int i = 1; i <= int(n); i++)

typedef long long ll;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1e9+7;
//~ const int MAX_N = 1e6+5;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    int t=1; cin >> t;
    while(t--){
		int n; cin >> n;
		ll a[n+2], b[n+2];
		memset(a, 0, sizeof a);
		memset(b, 0, sizeof b);		
		forn(i, n){
			cin >> a[i];
		}
		forn(i, n){
			cin >> b[i];
		}
		
		forn(i, n+1){
			a[i] += a[i-1];
		}
		for(int i=n; i>=0;i--){
			b[i] += b[i+1];
		}
		
		ll ans = 0;
		for(int i=0;i<=n;i++) ans =  (ans > (a[i] + b[i+1])) ? ans : a[i]+b[i+1];
		cout << ans << "\n";
	}
    

    return 0;
}
