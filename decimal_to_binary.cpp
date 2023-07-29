#include <iostream>
using namespace std;

int pow(int i){
    int a =1;
    if(i == 0){
        return 1;
    }
    else if(i>0){
        for (int j = 0; j < i; j++) {
            a *= 10;
        }

    } return a;


}


int main(){
    int n;
    cin>>n;
    int ans = 0;
    int i=0;
    while(n!=0){
        int bit = n&1;
        ans = (bit * pow(i))  + ans;
        n= n>>1;
        i++;
    }
    cout<<ans;


                                                                           
}