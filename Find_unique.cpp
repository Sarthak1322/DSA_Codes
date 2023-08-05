/* 
Question is find the unique number in the array, where x number is twice 
for example the array is arr[7]={1,3,4,5,3,4,1}
XOR will be used here
just writing the function code
using the property of XOR that is if we do the XOR of two element  a^a = 0
*/


#include<iostream>
using namespace std;

int findUnique(int *arr, int size){
    int ans =0;
    for(int i=0; i<size; i++){
        ans=ans^arr[i];
    }
    return ans;

}
int main(){
    int size= 7;
    int arr[7] = {1, 3, 4, 5, 1, 4, 3};
     int uniqueElement = findUnique(arr, 7);
     cout<<uniqueElement<<endl;
}