#include <iostream>

using namespace std;

int main(){
    int num = 0;

    while (num<10){//execute until it become false
        cout << "greather than 10";

        if (num == 5){
            break;//stopping loop independt of the condition
        }
        

        cin >> num;
    }
    

    return 0;
}