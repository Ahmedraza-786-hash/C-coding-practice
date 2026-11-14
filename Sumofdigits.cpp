#include <iostream>

using namespace std;
int sumofdigits(int Number){
    int lastdigit=0;
    int digitsum=0;
    while(Number>0){
        lastdigit=Number%10;
        Number/=10;
        digitsum+=lastdigit;
    }
    return digitsum;
}
int main() {

    int Number;
    cout<<"Enter number of 3 to 4 digits"<<endl;
    cin>>Number;
    cout<< sumofdigits(Number);

    return 0;
}