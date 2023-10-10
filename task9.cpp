#include<iostream>
using namespace std;

string checktile(int age, char gen);
main(){
    int age;
    char gen;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your gender (m/f): ";
    cin>>gen;
    string title = checktile(age,gen);
    cout<<"Your personal title is: "<<title;
}

string checktile(int age, char gen)
{
    if(age<18&&gen=='m'){
        return "Master";
    }
    if(age<18&&gen=='f'){
        return "Miss";
    }
    if(age>=18&&gen=='m'){
        return "Mr.";
    }
    if(age>=18&&gen=='f'){
        return "Ms.";
    }
}