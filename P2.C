#include<iostream>
using namespace std;
int main(){
    float r ;
    const int pi=3.14;
    cout<<"Enter the radius of Cirle: "<< endl;
    cin>>r;
    float area = pi*r*r;
    cout<<"Area of Circle is "<<area<<" sq.meter";
}