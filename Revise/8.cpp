// pattern
/* 123
   456
   789
   row==col
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
        while(j<=n){
            sum++;
            cout<<sum;
            j++;
        }
        cout<<endl;

        i++;
    }
    
}
