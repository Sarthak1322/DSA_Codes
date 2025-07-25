// pattern
/* 1
   23
   456
   
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i =1;
    int sum =0;
    while(i<=n){
        int j=1;
        while(j<=i){
            sum++;

            cout<<sum;
            j++;
        }
        cout<<endl;

        i++;
    }
    
}
