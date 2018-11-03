//
//  atm.cpp
//  
//
//  Created by Mahfuz Ahmed on 11/3/18.
//

#include <iostream>
using namespace std;

int main(){
    int x;
    double y;
    cin >> x >> y;

    if(x % 5 == 0 && x < (y-.5)){
        printf("%.2lf\n",(y-x)-0.5);
    }else{
        printf("%.2lf\n",y);
    }
    return 0;
}
