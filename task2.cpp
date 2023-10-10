#include<iostream>
using namespace std;
void parityAnalysis(int number);
main(){
    int number;
    cout<<"Enter a 3-digit number: ";
    cin>>number;
    parityAnalysis(number);

}
void parityAnalysis(int number){
    int num1 = number%10;
    int num2 = (number/10)%10;
    int num3 = (number/100)%10;
    int sum = num1 + num2 + num3;
    if (number%2==0)
    {
        if (sum%2==0){
            cout<<"1";
        }
        else {
            cout<<"0";
        }
    }
    else if(number%2!=0){
        if(sum%2!=0){
            cout<<"1"; 
        }
        else {
            cout<<"0";
        }
    }
    
}