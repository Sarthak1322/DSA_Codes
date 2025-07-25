// find the pivot in an array
// using binary search

#include <iostream>
#include <vector>

using namespace std;

int pivotIndex(vector<int>& arr){
    int s =0;
    int e=arr.size()-1;
    int mid = s+ (e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid +1;
        }else{
            e=mid;
        }
         mid = s+ (e-s)/2;
    }
    return s;
}


int main(){
    vector<int> arr = {7 ,9, 1, 2, 3, 4};
    int pivot = pivotIndex(arr);
    cout<<"Pivot Index is "<< pivot<< endl;
    return 0;

}