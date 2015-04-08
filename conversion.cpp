//
//  Lovisa_Svallingson_hw6.cpp
//  Assignment 6
//  Monday April 6 2015
//  TA: Sahar Jambi
//
//  This is a program that takes in a decimal form the user and converts it to binary and hexadecimals.
//

#include <iostream>
using namespace std;

int main()
{
    //Initialize variables
    char conversion_array[2], character;
    string bin_string="", oct_string = "", hex_string = "";
    int dec = 0, binary_array[8], remainder, oct_array[3];
    
    //A for loop that runs all the decimals for the nested for loops below
    for (int i = 0; i < 128 ; i++)
    {
        dec = i;
        
        //binary
        for(int e = 0; e < 8; e++)
        {
            binary_array[e] = dec % 2;
            dec = dec / 2;
        }
        
        bin_string="";
        
        for (int e = 7; e >= 0; e--)
        {
            bin_string += to_string(binary_array[e]);
        }

        //oct
        dec = i;
        
        for (int i = 0; i < 3; i++)
        {
            oct_array[i] = dec % 8;
            dec = dec / 8;
            
        }
        oct_string = "";
        
        for (int i = 2; i >= 0; i--)
        {
            oct_string += to_string(oct_array[i]);
            
        }
        
        
        //hex
        dec = i;
        for (int i = 0; i < 2; i++)
        {
            remainder = dec % 16;
            switch(remainder){
               
                case 0:
                    conversion_array[i] = '0';
                    break;
                case 1:
                    conversion_array[i] = '1';
                    break;
                case 2:
                    conversion_array[i] = '2';
                    break;
                case 3:
                    conversion_array[i] = '3';
                    break;
                case 4:
                    conversion_array[i] = '4';
                    break;
                case 5:
                    conversion_array[i] = '5';
                    break;
                case 6:
                    conversion_array[i] = '6';
                    break;
                case 7:
                    conversion_array[i] = '7';
                    break;
                case 8:
                    conversion_array[i] = '8';
                    break;
                case 9:
                    conversion_array[i] = '9';
                    break;
                case 10:
                    conversion_array[i] = 'A';
                    break;
                case 11:
                    conversion_array[i] = 'B';
                    break;
                case 12:
                    conversion_array[i] = 'C';
                    break;
                case 13:
                    conversion_array[i] = 'D';
                    break;
                case 14:
                    conversion_array[i] = 'E';
                    break;
                case 15:
                    conversion_array[i] = 'F';
                    break;
                    
            }
            
            dec = dec / 16;
        }
        
        hex_string = "";
        for (int i = 1; i >= 0; i--)
        {
            hex_string += (conversion_array[i]);
        }
        
        //reset 'dec' and put 'character' equal to 'dec' to get the decimals and characters printed
        dec = i;
        character = i;
        
        //print all values
        cout << "Decimal: " << dec << "\t\t\t" << "Binary: " << bin_string << "\t\t\t" << "Character: " << char(i) << "\t\t\t" << "Octal: " << oct_string << "\t\t\t"  << "Hex: " << hex_string << endl;
    }
    return 0;
}
