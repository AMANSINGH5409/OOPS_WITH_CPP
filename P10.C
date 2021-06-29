#include<iostream>
using namespace std;
#define pi 3.14
int area(int l){
    return l*l;
}
int area(int l,int b){
    return l*b;
}
int area(float r){
    return r*r;
}
int area(float bs,float ht){
    return bs*ht/2;
}
int main(){
    int s,l,b,r,bs,ht;
    cout<<"Enter side of a square:";
    cin>>s;
    cout<<"Enter length and breadth of rectangle:";
    cin>>l>>b;
    cout<<"Enter radius of circle:";
    cin>>r;
    cout<<"Enter base and height of triangle:";
    cin>>bs>>ht;
    cout<<"\n------RESULT------";
    cout<<"\nArea of square is "<<area(s)<<" sq.cm";
    cout<<"\nArea of rectangle is "<<area(l,b)<<" sq.cm";
    cout<<"\nArea of circle is "<<area(r)<<" sq.cm";
    cout<<"\nArea of triangle is "<<area(bs,ht)<<" sq.cm";
}