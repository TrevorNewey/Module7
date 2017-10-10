// File: assignment.cpp
// Created by Trevor Newey on 10/10/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes
class Counter{
private: unsigned int count;         //only positive numbers
public:
    Counter():count(0){             //constructor with no arguments
                                    //THis will initialize int count to 0 on startup
    };
    Counter(int c):count(c)         //This is a constructor with one argument
    {};
    unsigned int get_count()
    {
        return count;
    }
    Counter operator ++(){         //Increment prefix //The operator keyword is used to overload the operator
        ++count;                  //Operator is a KEYWORD
        return Counter(count);

    }

};
// Prototypes

// Main Program Program
int main(void) {
    Counter c1, c2, c3;
    ++c1;
    ++c2;
    cout << "c1 = "<<c1.get_count()<<endl;
    cout << "c2 = "<<c2.get_count()<<endl;
    c3 = ++c1;
    cout << "c3 = "<<c3.get_count()<<endl;

    return 0;
}

// Function Definitions