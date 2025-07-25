/*
   1234
    234
     34
      4
      print the above pattern*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        int sum =i;
        while(j<=n){
            if(j<i){
                cout<<" ";
            }
            else if(j>=i){
                cout<<sum;
                sum++;
            }
            j++;
        }
        cout<<endl;
        i++;
        
        
    }
}