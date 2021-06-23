#include<iostream>
using namespace std;
// int sum(int num){
//     if(num!=0){
//         return num + sum(num-1);
//     }else{
//         return num;
//     }
// }
int facto(int n){
    if(n == 0) return 1;
    else  return n*facto(n-1);
}
int main(){
    int number,result;
    cout<<"Enter any positive number: "<<endl;
    cin>>number;
    result = facto(number);
    cout<<result;
}