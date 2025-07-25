// print number 1 to n 

# include <iostream>
using namespace std;

void primeNumber(int n){
    int i =0;
    while(i<=n){
       cout<<i<<" ";
       i++;
    }
} 

int main(){
    int i;
    cout<<"Enter the number"<<" ";
    cin>>i;
    primeNumber(i);
}