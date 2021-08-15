#include <iostream>
using namespace std;

int main(){
    // Declare required variables
    int dollars, cents, quarters, dimes, nickels, pennies;
    // Asl user for the amount of money
    cout<<"Please enter the amount of money to convert: "<<endl<<"# of dollars: ";
    cin>>dollars;
    cout<<"# of cents: ";
    cin>>cents;
    // Convert all the money to cents
    cents = cents + dollars*100;
    // Calculate values of each coin starting from the highest one(quarters)
    quarters = cents/25;
    cents = cents%25;
    dimes = cents/10;
    cents = cents%10;
    nickels = cents/5;
    cents = cents%5;
    pennies = cents;

    cout<<"The coins are "<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickels<<" nickels and "<<pennies<<" pennies"<<endl;


    return 0;
}