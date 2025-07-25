// check whether enter number is a power of 2 , return true or false(1/0)

// Power of Two leet code problem 231


#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = (n > 0 && (n & (n - 1)) == 0);
    cout<< ans;
}