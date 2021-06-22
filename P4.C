#include<iostream>
using namespace std;
// int m = 10;
// int main(){
//     int m = 20;
// {
//     int k = m;
//     int m = 30;
//     cout<<"we are in inner block\n";
//     cout<<"k = "<<k<<"\n";
//     cout<<"m = "<<m<<"\n";
// }
// cout<<"OUTER BLOCK"<<"\n";
// cout<<"m = "<<m<<"\n";
// cout<<"::m = "<<::m<<"\n";
// }

// Write a C++ Program to find out given no. is Positive or Negative.
// int main(){
//     int number;
//     cout<<"Enter any number: "<<endl;
//     cin>>number;
//     if(number < 0){
//         cout<<"Given number "<<number<<" is NEGATIVE!";
//     }
//     else{
//           cout<<"Given number "<<number<<" is POSITIVE!";
//     }
// }

//Write a C++ Program to find out given no. is Even or Odd.
int main(){
    int n;
    cout<<"Enter any number: "<<endl;
    cin>>n;
    if(n%2==0){
        cout<<"Given number "<<n<<" is EVEN!";
    }else{
          cout<<"Given number "<<n<<" is ODD!";
    }
}