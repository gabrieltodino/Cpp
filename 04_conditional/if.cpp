#include <iostream>

using namespace std;

int main(){
    int n1 = 10, n2 = 20;

    if(n1<n2){//int: 0=false 1=true
        cout << "n1 less than n2"; 
    }else if(n1>n2){
        cout << "n1 greater than n2";
    }else{
        cout << "n1 equal n2";
    }

    //system("cls"); to clean the screen

    return 0;
}