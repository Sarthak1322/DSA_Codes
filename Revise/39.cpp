/*
x amount of money is given you have to calculate the number of 100 notes, 50 notes, 20 and 10 
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the amount"<<endl;
    cin>>n;
    int a= n%100;
    int e = n/100;
    int b=a%50;
    int f= a/50;
    int c= b%20;
    int g= b/20;
    int d = c%10;
    int h = c/10;
    cout<<"Number of 100 notes are "<<e<<endl;
    cout<<"Number of 50 notes are "<<f<<endl;
    cout<<"Number of 20 notes are "<<g<<endl;
    cout<<"Number of 10 notes are "<<h<<endl;
    
}