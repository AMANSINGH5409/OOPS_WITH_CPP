#include<iostream>
using namespace std;
//N INTEGER NUMBERS USING FOR ,WHILE AND DO..WHILE LOOP.
void whileLoop(int n){
    int i=0,sum=0;
    while (i<=n)
    {
        sum += i;
        i++;
    }
    cout<<sum<<"\n";
}
void doWhileLoop(int n){
    int i=0,sum=0;
    do
    {
        sum += i;
        i++;
    } while (i<=n);
    cout<<sum<<"\n";  
}
void forLoop(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum += i;
    }
    cout<<sum<<"\n";
}

int main(){
    int a;
    cout<<"Enter the number:"<<endl;
    cin>>a;
    cout<<"YOUR ANSWER: "<<endl;
    whileLoop(a);
    doWhileLoop(a);
    forLoop(a);
}