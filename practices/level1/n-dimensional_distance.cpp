#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int dimention[510][510];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin >> dimention[i][j];
        }
    }

    double_t distance = 0;
    for(int i = 0; i < n; i++){
        distance+=(dimention[i][1]-dimention[i][0])*(dimention[i][1]-dimention[i][0]);
    }

    cout << fixed << setprecision(15) << sqrtl(distance) << endl;
    return 0;
}