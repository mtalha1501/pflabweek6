#include<iostream>
using namespace std;

void greaterNumber(float num1, float num2);
main()
{
    float num1, num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    greaterNumber(num1, num2);

}
void greaterNumber(float num1, float num2){
    if(num1>num2){
        cout<<"1";
    }
   else{
        cout<<"0";
    }
}