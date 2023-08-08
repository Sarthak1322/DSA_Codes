
#include <iostream>
using namespace std;
/*For perfect square root*/
/*long long int squareRoot(int n){
    int s=0;
    int e=n;
    long long int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        long long int square = mid*mid;
        if(square == n){
            return mid;
        }
        if(square<n){
            ans =mid;
            s=mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

/*
/*For non perfect Square root*/

long long int squareRoot(int n){
    int s=0;
    int e=n;
    long long int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        long long int square = mid*mid;
        if(square == n){
            return mid;
        }
        if(square<n){
            ans =mid;
            s=mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempsol){
    double factor = 1;
    double ans= tempsol;
    for(int i=0; i<precision; i++){
        factor = factor/10;
        for(double j =ans; j<n; j+=factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int x = 36;
    int precision = 3;
    int ans = squareRoot(x);
    cout<<ans<<endl;
    double final = morePrecision(x, precision, ans);
    cout<<final;
    return 0;
}

