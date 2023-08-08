/* a array is given and a element is given find out the last 
occurance of the element in the array*/
#include <iostream>
using namespace std;

int lastOcc(int arr[], int n, int key){
    int start =0;
    int end=n-1;
    int mid = start + (end-start)/2;
    int ans =-1;
    while(start<=end){
        if(arr[mid] == key){
            ans=mid;
            start = mid+1;
        }
        else if(key>arr[mid]){
            start = mid +1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start + (end-start)/2;

    }
    return ans;
}

int main(){
    int arr[6]={1,5,3,3,3,2};
    int key = 3;
    int index = lastOcc(arr, 6, key);
    
    if(index != -1){
        cout << "Last occurrence of " << key << " is at index " << index << endl;
    }
    else{
        cout << "Element " << key << " not found in the array" << endl;
    }
    
    return 0;

    
}