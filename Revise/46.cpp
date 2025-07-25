// find the first and the last position of element in the sorted array
// Binary search
// done only on monotonic function
// TC = O(logn)

#include <iostream>
using namespace std;

int firstPosition(int arr[], int size, int key){

    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans =-1;
    while(start<=end){
        if(key == arr[mid]){
            ans = mid;
             end = mid-1;  
 
        }
        else if(key < arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid= start + (end-start)/2;
    }
    return ans;

}

int lastPosition(int arr[], int size, int key){

    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans =-1;
    while(start<=end){
        if(key == arr[mid]){
             ans = mid;
             start = mid+1;  // printing the index value
 
        }
        else if(key < arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid= start + (end-start)/2;
    }
    return ans;

}


int main(){
    int even[8] = {1,3,5, 5,5,7,9,10};
   
    int index = firstPosition(even , 8 , 5);
    int index1 = lastPosition(even, 8 , 5);
    cout<<index<<" "<<index1;

}