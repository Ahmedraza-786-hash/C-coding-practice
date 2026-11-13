#include <iostream>

using namespace std;
 void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
    int SI =i;
    for(int j=i+1;j<n;j++){
        if (arr[j]<arr[SI]){
            SI=j;
        }
    }
    swap(arr[i],arr[SI]);
    }
 }
    void printsortedarr(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
int main() {

    int arr[]={1,6,4,8,2,3,7,9};
    int n=8;
     selectionsort(arr,n);
     printsortedarr(arr,n);

    return 0;
}



