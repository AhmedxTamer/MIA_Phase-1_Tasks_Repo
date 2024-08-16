#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void input_array(int a[100][100], int r, int c){
    for(int i=0 ; i<r ; i++){
        cin >> a[i][0];
        for(int j=1 ; j<c ; j++){
            cin.ignore();
            cin >> a[i][j];
        }
    }
}

void battle(int justice_league[100][100], int villains[100][100], int r, int c){
    int justice_score=0, villians_score=0;
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            if(justice_league[i][j] > villains[i][j])
                justice_score++;
            if(justice_league[i][j] < villains[i][j])
                villians_score++;
        }
    }
    if(justice_score > villians_score)
        cout << "Justice League";
    if(justice_score < villians_score)
        cout << "Villains";
    if(justice_score == villians_score)
        cout << "Tie";
}

int main() {
    int r,c;
    cin >> r >> c;
    int justice_league[100][100], villains[100][100];
    input_array(justice_league, r, c);
    input_array(villains, r, c);
    battle(justice_league,villains,r,c);
    return 0;
}
