/*
 * ATTND.cpp
 * 
 * Created by Mahfuz Ahmed on 27/04/2019.
 * 
 */

#include <bits/stdc++.h>
using namespace std;
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define mp make_pair
#define br std::cout << "\n";
#define fori(s,n) for(int i=s;i<n;i++)
#define forj(s,n) for(int j=s;j<n;j++)

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
    
    
    
    int t; cin >> t;
    
    while(t--){
		vector<pair<string, string>> vec;
		int n; cin >> n;
		
		vector<bool> vec2(n);
		
		while(n--){
			string s1, s2; cin >> s1 >> s2;
			vec.push_back(mp(s1,s2));
		}
		
		int sz = vec.size();
		for(int i = 0;i<sz;i++){
			for(int j = 0;j<sz;j++){
				if(!(i==j) && vec[i].first == vec[j].first){
					vec2[i] = 1;
					vec2[j] = 1;
				}
			}
		}
		
		for(int i=0;i<sz;i++){
			if(vec2[i] == 1){
				cout << vec[i].first << " " << vec[i].second;br;
			}else{
				cout << vec[i].first;br;
			}
		}
		
	}
    

    return 0;
}
