/*
    1234
    1234
    1234
    1234
    print the above pattern*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i =1;
    
    while(i<=n){
        int j =1;
        while(j<=n){
            cout<<j;
            
            j++;
        }
        cout<<endl;
        i++;
    }
}