#include<iostream>
using namespace std;
class fees{
    private:int college_fees;
    public:int Enrollno;

    public:void setDetails(int fees,int enrollno){
        college_fees  = fees;
        Enrollno = enrollno;
    } 
    public:int getfees(){
        return college_fees;
    }
};
class feesDetails:public fees{
     public:int Displayfeeswithfine(){
         int fees_fine = 500 + getfees();
         return fees_fine;
     }
};
int main(){
    feesDetails f1;
    cout<<f1.Displayfeeswithfine();
}