#include<iostream>
using namespace std;
string checkspeed(float speed);
main()
{
    float speed;
    cout<<"Enter the speed: ";
    cin>>speed;
    string status = checkspeed(speed);
    cout<<status;

}
string checkspeed(float speed)
{
    if (speed<=10){
        return "slow";
    }
    if (speed<=50&&speed>10){
        return "average";
    }
    if(speed<=150&&speed>50){
        return "fast";
    }
    if(speed<=1000&&speed>150){
        return "ultra-fast";
    }
    if (speed>1000){
        return "extremely fast";
    }
}