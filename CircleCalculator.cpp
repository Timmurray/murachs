#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main (){

    char start;

    //display
    cout << "Circle Calculator\n\n";
    char value = 'y';
    while(value == 'y'){
        
        double radius;
        
        cout << "Enter radius: ";
        cin >> radius;

        if(radius > 0){
            double diameter = 2 * radius;
            double circumference = 2 * M_PI * radius;
            double area = M_PI * pow(radius, 2.0);        
    
            cout << "Diameter: " << diameter << endl;
            cout << "Circumference: " << circumference << endl;
            cout << "Area: " << area << endl << endl;
            cout << "Enter another radius? (y/n): ";
            cin >> value;
        }
        else
            cout << "Enter a valid radius.";
    }        
    
    cout << "Good afternoon!";
} 
 
