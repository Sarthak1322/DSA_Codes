// decimal to binary

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number which u want to convert to binary"<<endl;
    cin>>n;
    int ans=0, i=0;
    while(n !=0){
        int bit = n&1;
        ans = (bit * pow(10,i)) + ans;
        n = n>>1;
        i++;
    }
    cout<<ans;
}