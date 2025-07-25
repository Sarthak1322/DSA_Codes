
// basic calculator

#include <iostream>
 using namespace std;

 int main(){
    int a,b;
    char operation;
    cout<<"enter first number";
    cin>>a;
    cout<<"enter second number"<<endl;
    cin>>b;
    cout <<" enter the operation";;
    cin>>operation;
    switch(operation){
        case '+' : cout<<a+b; break;

        case '-' : cout<<a-b; break;
        case '*' : cout<<a*b; break;
        case '/' : cout<<a/b; break;

    }
 }