#include <iostream>

using namespace std;

int main(){
    //switch

    int val;

    cout << "Select a color\n:";
    cout << "[1] green,[2] blue,[3] red\n";

    cin >> val;

    switch(val){
        //block of many values
        //case 1:
        //case 2:
        //case 3:
        //  cout << "green";
        //  break;
        
        case 1:
            cout << "green";
            break;
        case 2:
            cout << "blue";
            break;
        case 3:
            cout << "red";
            break;
        default:
            cout << "Insert a valid value!";
    } 

    return 0;
}