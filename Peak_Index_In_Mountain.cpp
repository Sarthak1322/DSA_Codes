
#include <iostream>
#include <vector>
using namespace std;

int peakIndexinmountain(vector<int>& arr){
    int start =0;
    int end = arr.size() -1;
    int mid = start + (end - start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid=start + (end - start)/2;
    }
    return arr[start];

}
int main(){
    vector<int> arr = {1,2,3,4,5,4,3,2,1};
    int ans = peakIndexinmountain(arr);
    cout<<ans;

}