// find squareroot using binary search


#include <iostream>
 using namespace std;


 long long int squartRoot(int n){
    long long int s=0;
    long long int e = n;
    long long int mid = s+(e-s)/2;
    int ans =-1;
    while(s<=e){
        long long square = mid*mid;
        if(square == n){
            return mid;
        }
        else if(square < n){
            ans =mid;
            s = mid+1;

        }
        else{
            e=mid-1;
        }
        mid = s+ (e-s)/2;
    }
    return ans;
 }

 int main(){
    int n=16;
    int result = squartRoot(n);
    cout<< result<< endl;
    return 0;


 }

//  let's write code for non perfect number with correct point values;

// long long int squartRoot(int n){
//     long long int s=0;
//     long long int e = n;
//     long long int mid = s+(e-s)/2;
//     int ans =-1;
//     while(s<=e){
//         long long square = mid*mid;
//         if(square == n){
//             return mid;
//         }
//         else if(square < n){
//             ans =mid;
//             s = mid+1;

//         }
//         else{
//             e=mid-1;
//         }
//         mid = s+ (e-s)/2;
//     }
//     return ans;
//  }

// double morePrecision(int n, int precision, int tempSol){
//     double factor =1;
//     double ans = tempSol;
//     for(int i =0; i<=precision; i++){
//         factor = factor/10;
//         for(double j =ans; j =j<n; j=j+factor){
//             ans = j;
//         }
//     }
//     return ans;
// }
// int main(){
//     int n = 37;
//     int tempSol = squartRoot(n);
//     int result = morePrecision(n , 3, tempSol);
//     cout<< result;
// }