#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>T(n);
    for(int i = 0; i < n; i++){
        cin >> T[i];
    }
    for(int i = 0; i < n; i++){
        cout << 180*(T[i]-2) << endl;
    }

    return 0;
}