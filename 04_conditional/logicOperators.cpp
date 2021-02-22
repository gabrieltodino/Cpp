#include <iostream>

using namespace std;

int main(){

    //and(&&), or(||), not(!)
    int val = 10;

    if((val > 10 && val < 17) || (val > 25 && val < 32)){
        cout << "\n between of range";
    }else
    {
        cout << "\n outside of range";
    }
    
    return 0;
}