#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void input_array(float *h, int n){
    cin >> h[0];
    for(int i=1 ; i<n ; i++){
        cin.ignore();
        cin >> h[i];
    }
}

float find_max_2_numbers(float a, float b){
    return a>b?a:b;
}

float find_max_height(float *h, int n){
    float max=h[0];
    for(int i=1 ; i<n ; i++){
        max=find_max_2_numbers(max,h[i]);
    }
    return max;
}

int main() {
    int n;
    cin >> n;
    float h[n];
    input_array(h, n);
    float max=find_max_height(h,n);
    cout << max;
    return 0;
}
