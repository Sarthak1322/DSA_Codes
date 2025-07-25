// pattern
/* D
   CD
   BCD
   ABCD
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i =1;
   
    while(i<=n){
        int j=1;
        int sum=i;
        while(j<=i){
            char ch = 'A'+n-sum;
            cout<<ch;
            j++;
            sum--;
        }
        cout<<endl;
        i++;
    }
    
}
