#include<iostream>
using namespace std;

int main(){

    int num1=6;
    int num2=3;

   //ARITHMATIC OPERATOR

    cout<<num1+num2<<endl;//9
    cout<<num1-num2<<endl;//3
    cout<<num1*num2<<endl;//18
    cout<<num1/num2<<endl;//2
    cout<<num1%num2<<endl;//0

    //RELATIONAL OPERATOR

    cout<<(num1==num2)<<endl;
    cout<<(num1!=num2)<<endl;
    cout<<(num1>=num2)<<endl;

    //ASSIGNMENT OPERATOR

    num1+=3;  //9
    cout<<num1<<endl;
    num2-=2;  //1
    cout<<num2<<endl;

    return 0;
}
