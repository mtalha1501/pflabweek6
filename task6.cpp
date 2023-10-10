#include<iostream>
using namespace std;

float discount(string day, string month, float amount);
main(){
    string day, month;
    cout<<"Enter Purchase Day: ";
    cin>>day;
    cout<<"Enter Purchase Month: ";
    cin>>month;
    float amount;
    cout<<"Enter Purchase Amount: ";
    cin>>amount;
    float payable = discount(day, month, amount);
    cout<<"Payable Amount after discount: "<<payable;
}
float discount(string day, string month, float amount){

if (day=="Sunday"||month=="October"){
    return (amount-amount*0.1);
}
else{
    return amount;
}
}



