#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i == 0){
            cout<<"N is not prime";
        }
        else if(n%i != 0){
            cout<<"N is Prime";
        }
        else{
            cout<<"N is 0";
        }
        cout<<endl;

        i = i+1;
       
    }
     
    
}