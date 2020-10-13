#include<iostream>

using namespace std;

int main(){
    int hours;
    int minutes;
    int seconds;
    std::string states;
    cin >> hours;
    cin >> minutes;
    cin >> seconds;
    cin >> states;

    int log = 0;
    if(states=="PM") log+=43200;
    log += seconds+(minutes*60)+(hours*60*60);
    
    cout << log << endl;

    return 0;
}