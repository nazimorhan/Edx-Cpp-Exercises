#include <iostream>
using namespace std;
 int main(){

    int quarters, dimes, nickels, pennies, dollars, cents;
    /*Ask user to enter each number of coins*/
    cout<<"# of quarters: ";
    cin>>quarters;
    cout<<"# of dimes: ";
    cin>>dimes;    
    cout<<"# of nickels: ";
    cin>>nickels;
    cout<<"# of pennies: ";
    cin>>pennies;

    cents = quarters*25 + dimes*10 + nickels*5 + pennies*1;
    dollars = cents/100;
    cents = cents%100;
    cout<<"The total is "<<dollars<<" dollars "<<"and "<<cents<<" cents"<<endl;

    return 0;
 }