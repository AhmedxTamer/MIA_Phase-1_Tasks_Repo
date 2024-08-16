#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i=1,x;
    cin >> n;
    int a[n];
    cin >> a[0];
    while(i<n){
        cin.ignore();
        cin >> a[i];
        i++;
    }
    cin >> x;
    i=0;
    while(i<n){
        if(x==a[i]){
            cout << i;
            break;
        }
        i++;
    }
    if(i==n)
        cout << "-1";
    return 0;
}
