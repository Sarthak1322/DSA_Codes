// prime or not

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number"<<" ";
    cin>>n;
    bool isprime = false;
    int i=2;
    while(i<n){
       if(n%i != 0){
        isprime = true;
       }
       i++;
   
    }
    if(isprime){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    
}