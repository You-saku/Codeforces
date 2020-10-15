#include<iostream>
using namespace std;

int main(){
    int n;
    int list[10000];
    int hit[10000];
    int count = 0;
    
    for(int i = 0; i < 10000; i++){
        hit[i] = 0;
    }

    cin >> n;

    for(int i = 0; i < n; i++){
        cin>> list[i];
        hit[list[i]]++;
        if(hit[list[i]]==1) count++;
    }

    cout << count << endl;

    return 0;
}