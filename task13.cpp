#include<iostream>
using namespace std;
float lowestprice(int kilom, string time)
{
    if(time=="day"){
        if(kilom<=20){
            return (kilom*0.79)+0.70;
        }
        if(kilom>=20&&kilom<100){
            return 0.+(kilom*0.09);
        }
        if(kilom>=100){
            return (kilom*0.06);
        }
    }
    if(time=="night"){
        if(kilom<=20){
            return (kilom*0.90)+0.70;
        }
        if(kilom>=20&&kilom<100){
            return (kilom*0.09);
        }
        if(kilom>=100){
            return (kilom*0.06);
        }
    }
    
        
}
main()
{
    
    float kilom,lowprice;
    string time;
    cout<<"Enter the number of kilometers: ";
    cin>>kilom;
    cout<<"Enter the period of the day (day/night): ";
    cin>>time;
    float minprice = lowestprice(kilom,time);
    cout<<"Lowest price for "<<kilom<<" kilometers: "<<minprice<<" EUR";

}