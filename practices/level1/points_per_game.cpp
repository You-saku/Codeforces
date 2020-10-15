#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double p,g;
    constexpr int d = 17;
    cin >> p >> g;
    
    cout << setprecision(d) << p/g << endl;

    return 0;
}