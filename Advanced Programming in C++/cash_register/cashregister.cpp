#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    double first, second, base, total, rate;
    char card;

    // Ask user the price of the first item.
    cout<<"Enter price of the first item: ";
    cin>>first;

    // Ask for second item
    cout<<"Enter price of the second item: ";
    cin>>second;

    // Calculate base price.
    base = first + second;

    // Ask for having a club card or not. Loop until the user enters a meaningful character.
    do{
        cout<<"Does customer have a club card? (Y/N): ";
        cin>>card;
    }
    while (!(card=='y' || card=='Y' || card=='n' || card=='N'));

    // Ask for the tax rate, in percentage.
    cout<<"Enter tax rate, e.g. 5.5 for 5.5"<<"%"<<" tax: ";
    cin>>rate;

    // Print base price.
    cout<<"Base price = ";
    printf("%.2f\n", base);

    // Process card info and discount.
    total = (first <= second ? (first/2)+second : first+(second/2));
    if (card=='y' || card=='Y')
        total *= 0.9;
    
    // Print price aftet discounts.
    cout<<"Price after discounts = ";
    printf("%.2f\n", round(total*100)/100);

    // Add the tax.
    total *= (100+rate)/100;

    // Print total price.
    cout<<"Total price = ";
    printf("%.2f\n", round(total*100)/100);

    return 0;
}