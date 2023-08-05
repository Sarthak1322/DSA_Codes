#include <iostream>
#include <vector>
using namespace std;


vector<int> findArrayIntersection(vector<int> &arr1, vector<int> &arr2){
    vector<int> ans;

    for(int i=0; i<arr1.size(); i++){
        int element = arr1[i];

        for(int j =0; j<arr2.size(); j++){
            if(element == arr2[j]){
                ans.push_back(element);
                arr2[j]=-12345;
            }

        }
    }
    return ans;


}
/*
vector<int> findArrayIntersection(vector<int> &arr1, vector<int> &arr2){
    int i=0, j=0;
    int n=arr1.size();
    int m=arr2.size();
    vector<int> ans;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr[i]);
            i++;
            j++;
        }
        else if(arr[i<arr[2]]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}
*/
int main(){
    vector<int> arr1 = {1, 2, 4, 6, 7, 9};
    vector<int> arr2 = {1, 4, 5, 7, 8};

    vector<int> result = findArrayIntersection(arr1, arr2);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;

}