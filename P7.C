#include<iostream>
using namespace std;
int multi(int *a, int *b){
    int m = *a**b;
    return m;
}
int main(){
    int a,b;
    cout<<"Enter any number: "<<endl;
    cin>>a>>b;
    cout<<multi(&a,&b);
}