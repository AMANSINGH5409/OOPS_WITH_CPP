#include<iostream>
using namespace std;
int main(){
    float celsius,F;
    cout<<"Enter Temp in celsius: "<< endl;
    cin>>celsius;
    F = 1.8*celsius + 32;
    cout<<"Temperature in Fahrenheit is "<<F;
}