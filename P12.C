#include<iostream>
using namespace std;
//CONTRUCTOR 
class Line{
    public:
    void setLength(double len);
    double getLength(void);
    Line();//this is the constructor
    private:
    double length;
};
//Member Functions
Line::Line(void){
    cout<<"Object is being created"<<endl;
}
void Line::setLength(double len){
    length = len;
}
double Line::getLength(void){
    return length;
}

int main(){
    Line line;

    //set Length
    line.setLength(6.0);
    cout<<"Length of line :"<<line.getLength()<<endl;
    return 0;
}