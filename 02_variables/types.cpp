#include <iostream>

using namespace std;

int main(){
    //type name;
    //or
    //type name = value;

    int num = 10;//integer numbers
    char letter = 'b';//character
    char letters[20] = "banana";//characters respecting the specified size limit
    double decimal = 2.49999;//decimal numbers
    float decimal_less = 2.5;//decimal numbers with less precision
    bool verify = true;//true or false
    string name = "gabriel";//text
    int array[5] = {0,1,2,3,4};//defining array with 5 positions
    int matrices[3][4];//[lines][rows]

    //types modifiers(int): short, long, signed, unsigned

    short int n1 = 60;//used to store smaller values, taking up less memory
    long int n2 = 2500000000000000;//used to store bigger values, taking up more memory
    signed int n3 = -20;//used to store numbers positives and negatives
    unsigned int n4 = 20;//used to store only positives numbers

    return 0;
}
