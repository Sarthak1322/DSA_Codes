/*
     1234554321
     1234**4321
     123****321
     12******21
     1********1
  print the above pattern*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
   
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int k = 0; k < 2 * (n - i); k++) {
            cout << "*";
        }
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
    
    

};