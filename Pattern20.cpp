/*
   ****
    ***
     **
      *
      print the above pattern*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while(j<=i){
            if(j<i){
                cout<<" ";
            }
            else if(j>i){
                cout<<"*";
            }
            j++;
        }
        i++;
        
        
    }
}