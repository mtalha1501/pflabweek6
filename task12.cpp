#include<iostream>
using namespace std;
float totalincome(string type, int row, int col)
{
    if(type=="Premiere"){
        return row*col*12.00;
    }
    if(type=="Normal"){
        return row*col*7.50;
    }
    if(type=="Discount"){
        return row*col*5.00;
    }
}
main()
{
    string type;
    int row, col;
    cout<<"Enter the screening type (Premiere/Normal/Discount): ";
    cin>>type;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns: ";
    cin>>col;
    float inc = totalincome(type, row, col);
    cout<<inc;

}