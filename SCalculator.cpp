#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    char op;
    cout<<"Enter the operation you wish to perform"<<endl;
    cin>>op;

    switch(op){

        case '+': cout<<"Additon of a and b is "<<(a+b)<<endl;
        break;
         case '-': cout<<"Subtraction of a and b is"<<(a-b)<<endl;
        break;
         case '*': cout<<"Multiplication of a and b is "<<(a*b)<<endl;
        break;
         case '%': cout<<"Modulus of a and b is "<<(a%b)<<endl;
        break;
         case '/': cout<<"Division of a and b is "<<(a/b)<<endl;
        break;
       default: cout<<"Invalid operation"<<endl;
    }
}