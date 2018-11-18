//
//  intest.cpp
//  
//
//  Created by Mahfuz Ahmed on 11/4/18.
//

#include <iostream>
using namespace std;

int main(){
    ios_base:sync_with_stdio(false);
    cin.tie(NULL);
    int count=0,n,k;
    
    cin >> n >> k;
    while(n--){
        int x;
        cin >> x;
        if(x % k == 0){
            count++;
        }
    }
    cout << count << endl;
    
    return 0;
}
