#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>t(n);
    int perimeters = 0;

    for(int i = 0; i < n; i++){
        cin >> t[i];
    }

    for(int i = 0; i < n; i++){
        perimeters+=t[i]*3;
    } 
    cout << perimeters << endl;

    return 0;
}