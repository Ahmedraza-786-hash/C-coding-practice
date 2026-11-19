#include <iostream>

using namespace std;
void reversearray(int arr[],int n){
    int start=0,end=n-1;
    for(int i=0;i<n;i++){
        if(start<end){
            swap(arr[start],arr[end]);
        }
        start++,end--;
    }
}
int main() {

    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    reversearray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
        
    }

    return 0;
}