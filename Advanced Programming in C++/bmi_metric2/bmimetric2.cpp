#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float weight, height, bmi;
    string status;
    cout<<"Please enter weight in kilograms: ";
    cin>>weight;
    cout<<"Please enter height in meters: ";
    cin>>height;
    // Calculate BMI.
    bmi = weight/pow(height, 2);
    // Make BMI precision as 2 decimal places
    bmi = int(bmi) + round((bmi-int(bmi))*100)/100;
    if (bmi<18.5)
        status = "Underweight";
    else if (bmi<=24.9)
        status = "Normal";
    else if (bmi<=29.9)
        status = "Overweight";
    else 
        status = "Obese";
    cout<<"BMI is: "<<bmi<<", Status is "<<status<<endl;

    return 0;
}