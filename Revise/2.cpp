// sum of 1 to n

#include <iostream>
using namespace std;

void sum(int n){
    int sum =0;
    for(int j=1; j<=n; j++){
        sum = sum + j;
       
    }
    cout<<sum;
}

int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    sum(n);
}