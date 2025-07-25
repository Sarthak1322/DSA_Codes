// Linear search
// output will be in the form of 1/0

#include <iostream>
#include <vector>
using namespace std;

bool linearSearch(vector<int>& arr, int key){
    bool result = false;
   
    for(int i=0; i<= arr.size(); i++){
        if(arr[i] == key){
            result = true;
        }

    }
    return result;

}

int main(){

     vector<int> arr = {1, 2, 6, 8};
    int key = 8;

    bool s = linearSearch(arr, key);
    cout<< s;
    
}