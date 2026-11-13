#include <iostream>

using namespace std;
 void bublesort(int array[],int  size){
        for(int i=0;i<size-1;i++){
            bool isswap=false;
            for( int j=0; j<size-1-i;j++ ){
                if(array[j]>array[j+1]){
                    swap(array[j],array[j+1]);
                    isswap=true;
                }
            }
            if(!isswap){
                return;
            }
        }
    }




    void printarray(int array[],int size){
for(int i =0;i<size;i++){
    cout<<array[i]<<" ";
}
    }
int main() {
int array[]={1,2,4,5,3,9,8,7,6};
int size=sizeof(array)/sizeof(array[0]);
   bublesort(array,size);
   printarray(array,size);

    return 0;
}