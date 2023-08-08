
/*
input {7,9,1,2,3}
ans should be 1 i.e= index=2*/

#include <iostream>
using namespace std;
 int getPivot(int arr[], int n){
    int start =0;
    int end =n-1;
    int mid = start +(end-start)/2;
    while(start<end){
        if(arr[mid] >= arr[0]){
            start =mid+1;
        }
        else{
            end =mid;
        }
        mid = start +(end-start)/2;
    }
    return start;
 }

 int main(){
    int arr[]={7,9,1,2,3};
    int ans = getPivot(arr, 5);
    cout<<ans;
 }