#include <iostream>
using namespace std;

int main(){
    int length;
    int printed = 1;
    // Ask user for the number of even numbers
    cout<<"Please enter a positive integer: ";
    cin>>length;
    // Print first lenght much positive even numbers.
    while(printed<=length){
        cout<<printed*2<<endl;
        printed++;
    }

    
    return 0;
}