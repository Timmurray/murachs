#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    cout << "The Future Value Calculator\n\n";

    

    char choice = 'y';
    while(choice == 'y' || choice == 'Y') {
        double monthly_investment;
        cout << "enter Monthly investment:  ";
        cin >> monthly_investment;

        double yearly_rate;
        cout << "Enter yearly interest rate:    ";
        cin >> yearly_rate;

        int years;
        cout << "Enter number of years:     ";
        cin >> years;

        // convert yearly values to monthly values
        double monthly_rate = (yearly_rate / 12) / 100;
        int months = years * 12;

        //calculate future value
        double future_value = 0;
        for(int i = 1; i <= years; i++) {
            future_value = (future_value + (monthly_investment * 12)) * (1 + (yearly_rate / 100));
            
            // round to 2 decimal places and display
            future_value = round(future_value * 100) / 100;
            cout << "Year = " << i << "\t Future Value =  " << future_value << "\n";
        }

        //see if user wishes to ccontinue
        cout << "Continue? (y/n): ";
        cin >> choice;
        cout << endl;
    }
    cout << "Have a good afternoon ";
}