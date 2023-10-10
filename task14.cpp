#include<iostream>
using namespace std;
string calculateCost(float budget, string category, int numPeople);
main()
{
    float budget;
    string category;
    int numPeople;
    cout<<"Enter the budget: ";
    cin>>budget;
    cout<<"Enter the category (VIP/Normal): ";
    cin>>category;
    cout<<"Enter the number of people in the group: ";
    cin>>numPeople;
    calculateCost(budget, category,numPeople);


}

string calculateCost(float budget, string category, int numPeople)
{
    float remaining;
    float ticketsbudget;
    if(category=="VIP"){
        ticketsbudget = 499.99*numPeople;
        if(numPeople<=4&&numPeople>=1){
        remaining =(budget/0.75);
            if (ticketsbudget>=remaining){
                float leva = remaining-ticketsbudget;
                cout<< "Yes! You have "<< leva<<" leva left.";
            }
            else if (remaining<ticketsbudget){
                float leva = ticketsbudget-remaining;
                cout<< "Not enough money! You need "<<leva<<" leva.";
            }
        }
        if(numPeople>=25&&numPeople<=49){
          remaining =(budget/0.40);
            if (ticketsbudget>=remaining){
                float leva = remaining-ticketsbudget;
                cout<< "Yes! You have "<< leva<<" leva left.";
            }
            else if (remaining<ticketsbudget){
                float leva = ticketsbudget-remaining;
                cout<< "Not enough money! You need "<<leva<<" leva.";
            }
        }   

    }
}           
    
