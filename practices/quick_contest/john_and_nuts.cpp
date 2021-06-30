#include<iostream>

using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    int a[100010];
    int b[100010];
    
    int sum = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        sum+=a[i];
    }

    int k;
    int tmp;
    cin >> k;
    for(int j = 1; j <= k; j++){
        cin >> tmp;
        sum-=a[tmp];
    } 
    cout << sum+1 << endl;
    return 0;
}