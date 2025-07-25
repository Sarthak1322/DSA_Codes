//  Maximum Running Time of N Computers leet code problem 2141

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

long long maxRunTime(int n, vector<int>& batteries) {
        long long low =1;
        long long high = accumulate(begin(batteries),end(batteries),0LL)/n;

        while(low < high){
            long long mid = (high+low+1)/2;
            long long time=0;
            for(int t : batteries) time += min((long long)t,mid);

            if(mid*n <= time) low = mid;
            else high = mid-1;
        }
        return low;
    }

int main(){
    int n = 2;
    vector<int> batteries = {3, 3, 3};
    cout<<maxRunTime(n, batteries);


}