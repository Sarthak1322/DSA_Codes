// pattern
/* ABC
   DEF
   GHI
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
            char ch = 'A'+ sum;
            
            cout<<ch;
            sum++;
            
            j++;
        }
        cout<<endl;

        i++;
    }
    
}
