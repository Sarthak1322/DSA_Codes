// Binary search
// done only on monotonic function
// TC = O(logn)

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(key == arr[mid]){
             return mid;  // printing the index value
 
        }
        else if(key < arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid= start + (end-start)/2;
    }
    return -1;

}


int main(){
    int even[6] = {1,3,5,7,9,10};
    int odd[5] = {1,2,3,4,5};
    int index = binarySearch(even , 6 , 9);
    int index1 = binarySearch(odd, 5 , 5);
    cout<<index<<" "<<index1;

}