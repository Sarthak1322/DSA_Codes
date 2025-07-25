// fibonacci series

using namespace std;
#include <iostream>

int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    int a=0, b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=0; i<n; i++){
        int sum = a+b;
        cout<<sum<<" ";
        a= b;
        b=sum;

    }
}