/*
n and r is given 
calculate ncr = n!/r!*(n-r)!
*/

#include<iostream>
using namespace std;

int factorical(int n){
    int fact = 1;
    for(int i =1; i<=n; i++){
        fact = fact*i;
        
    }
    return fact;
}

int main(){
    int n,r;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"enter the value of r"<<endl;
    cin>>r;
    int num= factorical(n);
    int dum = factorical(r)*factorical(n-r);
    int ans = num/dum;

    cout<<ans;

}