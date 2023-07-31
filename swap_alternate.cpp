/*
input {1,2,3,4,5}
output {2,1,4,3,5}
*/

#include <iostream>
using namespace std;
void printArray(int arr[], int n){
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
    }
}



int main(){
    int even[8]={1,2,3,4,5,6,7,8};
    int odd[7]={1,2,3,4,5,6,7};

    swapAlternate(even , 8);
    swapAlternate(odd, 7);

    printArray(odd , 7);
    printArray(even , 8);

}