#include<iostream>
using namespace std;
void perimeter(string type, float value);
main(){
    string type;
    cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin>> type;
    float value;
    cout<<"Enter the value: ";
    cin>>value;
    perimeter(type, value);

}
void perimeter(string type, float value){
float perimeter;    
    if (type=="c"){
            cout<<"The perimeter is: "<< 2*3.14*value;

    }
    if (type=="s"){
        cout<<"The perimeter is: "<< 4*value;
    }
    if (type=="t"){
        cout<<"The perimeter is: "<< 3*value;
    }
    if (type=="h"){
        cout<<"The perimeter is: "<< 6*value;
    }
        
}    