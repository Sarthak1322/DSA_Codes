/*
   1 
   2 1
   3 2 1
   4 3 2 1
   print the above pattern*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
   
    while(i<=n){
        int j=0;
        while(j<i){
            cout<<i-j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

}