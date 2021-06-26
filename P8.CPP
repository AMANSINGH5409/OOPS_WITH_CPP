#include<iostream>
using namespace std;
void swapR(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapV(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a , b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    swapV(a,b);
    swapR(&a,&b);
    cout<<"a="<<a<<"b="<<b;
}