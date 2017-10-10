// File: binaryOperator
// Created by Trevor Newey on 10/10/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes
class Distance{
private:
    int feet;
    float inches;
public:
    Distance(): feet(0), inches(0.0)     //constroctor no arguments
    {}
    Distance(int f, float i){            //Constructor with two arguments
        feet = f;
        inches = i;
    }
    void getDistance(){
        cout <<"Enter feet: ";
        cin >>feet;
        cout<<"Enter inches: ";
        cin >> inches;
    }
    void showDistance(){                    //Display distance
     cout <<feet<<"\'-"<<inches<<"\"";
    }
    Distance operator + (Distance) const;
   // Distance operator += (Distance) const;  //Add 1 distance to existing
};
Distance Distance::operator+(Distance d2) const {
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    if(i>= 12.0){
        i -= 12.0;
        f++;
    }
    return Distance(f, i);
}
/*Distance Distance::operator+=(Distance d2) const {
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    if(i>= 12.0){
        i -= 12.0;
        f++;
    }
    return Distance(f, i);
}*/
// Prototypes

// Main Program Program
int main(void) {
    Distance d1,d3;
    Distance d2(11,6.25);
    cout<<" Distance d1 = "<<endl;
    d1.getDistance();
    d1.showDistance();
    cout<<" Distance d2 = ";
    d2.showDistance();
    d3 = d1 + d2;
    cout <<"Distance d3 = "; d3.showDistance();cout <<endl;

    return 0;
}

// Function Definitions