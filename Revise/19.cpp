// pattern
/* A
   BC
   DEF
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
            char ch = 'A'+ sum;
            sum++;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}
