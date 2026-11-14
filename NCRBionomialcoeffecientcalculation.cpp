#include <iostream>

using namespace std;
int factorial(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int main() {

    int n;
    cout<<"Enter Value of n"<<endl;
    cin>>n;
    int c;
    cout<<"Enter Value of c"<<endl;
    cin>>c;
    int nfact=factorial(n);
    int cfact=factorial(c);
    int diff=n-c;
    int diffnc=factorial(diff);
    int ncr=(nfact)/((cfact)*(diffnc));
    cout<<ncr;

    // cout<<endl;
    // cout<<factorial(n);


    return 0;
}