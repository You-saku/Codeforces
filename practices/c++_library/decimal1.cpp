#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    //桁数を指定できる
    //これ滅茶苦茶重要(codeforcesで解けない問題がある)
    constexpr int d = 5;//5文字制限かける
    constexpr int d2 = 3;//3文字制限かける
    float pi =  3.1415926535;
    cout << setprecision(d2) << pi << endl;
    return 0;
}