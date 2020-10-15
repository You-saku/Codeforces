#include<iostream>
using namespace std;

int main(){
    char s[1000];
    cin >> s;
    int i = 0;
    int count = 0;


    while(s[i]!='a'){
        i++;
        count++;
    }

    cout << count-1 << endl;

    return 0;
}