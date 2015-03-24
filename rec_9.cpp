//
//  rec_9.cpp
//  lectures
//
//  Created by Lovisa Svallingson on 3/13/15.
//  Copyright (c) 2015 Lovisa Svallingson. All rights reserved.
//

#include <iostream>
#include <cstdlib>

using namespace std;

const double PI = 3.14159; //double is float but with more digits, float is 7 and double has 15

int main () {

    double height;
    double radius;
    double requirement;
    double volume;
    double days;
    
    cout << "How tall is the tree in feet?" << endl;
    cin >> height;
    
    cout << "What is the radius of the tree in feet?" << endl;
    cin >> radius;
    
    cout << "How many cubic feet of wood will heat a house for a day?" << endl;
    cin >> requirement;
    
    volume = height * PI * radius * radius;
    days = volume / requirement;
    
    cout << "The tree will heat a house for " << days << " days." << endl;
    
    return 0;
}
