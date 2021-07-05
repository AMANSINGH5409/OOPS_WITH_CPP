#include<iostream>
using namespace std;

class Line{
    public:
    double length;
    void setLength(double len);
    double getLength(void);
};

//Member functions definations
double Line::getLength(void){
    return length;
}

void Line::setLength(double len){
    length = len;
}

int main(){
    Line line;
    //set line length
    line.setLength(6.0);
    cout<<"Length of line :"<<line.getLength()<<endl;
    //set line length without member function
    line.length = 10.0;
    cout<<"Length of line :"<<line.getLength()<<endl;
}