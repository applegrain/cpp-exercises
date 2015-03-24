//
//  main.cpp
//  homework
//
//  Created by Lovisa Svallingson on 3/14/15.
//  Copyright (c) 2015 Lovisa Svallingson. All rights reserved.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
   
//define variables
    double pass_completions;
    double pass_attempts;
    double total_yards;
    double touchdowns;
    double interceptions;
    double result;
    double c;
    double y;
    double t;
    double i;

//get info from user
    
    cout << "Pass completions: " << endl;
    cin >> pass_completions;
    
    cout << "Pass attempts: " << endl;
    cin >> pass_attempts;
    
    cout << "Total passing yards: " << endl;
    cin >> total_yards;
    
    cout << "Touchdowns: " << endl;
    cin >> touchdowns;
    
    cout << "Interceptions: " << endl;
    cin >> interceptions;

//calculate values of variables c, y, t, i
    
    c = ((pass_completions/pass_attempts) - 0.30) * 5;
    y = ((total_yards/pass_attempts - 3 )) * 0.25;
    t = ((touchdowns/pass_attempts)) * 20;
    i = 2.375 - ((interceptions/pass_attempts) * 25);

//check if variables c, y, t, i meet certain conditions
    //and if so ,reset their value

    if (c < 0) {
        c = 0;
    }

   if (y < 0) {
       y = 0;
    }

   if (t < 0) {
        t = 0;
    }

    if (i < 0) {
        i = 0;
    }
    
    if (c > 2.375) {
        c = 2.375;
    }
    
    if (y > 2.375) {
        y = 2.375;
    }
    
    if (t > 2.375) {
        t = 2.375;
    }
    
    if (i > 2.375) {
        i = 2.375;
    }

//calculate passer rating and print output 
    result = ((c + y + t + i)/6)*100;
    
    cout << "Passer rating: " << result << endl;
    
    return EXIT_SUCCESS;
}
