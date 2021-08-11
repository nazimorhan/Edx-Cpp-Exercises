#include <iostream>
#include <math.h>
#include <iomanip>      // std::setprecision
using namespace std;

#define pounds  0.453592 //kilograms
#define inch    0.0254   // meters

int main(){
    double weight, height, bmi;
    cout<<"Please enter weight in pounds: ";
    cin>>weight;
    weight *= pounds;
    cout<<"Please enter height in inches: ";
    cin>>height;
    height *= inch;
    // Calculate BMI.
    bmi = weight/pow(height, 2);
    // Make BMI precision as 2 decimal places
    cout<<"BMI is: ";
    printf("%.2f", bmi);
    cout<<endl;

    return 0;
}