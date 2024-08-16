#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int c=0,i=1,n;
    cin >> n;
    while(i<=n){
        while(c!=i){
            cout << "*";
            c++;
        }
        c=0;
        cout << endl;
        i++;
    }  
    return 0;
}
