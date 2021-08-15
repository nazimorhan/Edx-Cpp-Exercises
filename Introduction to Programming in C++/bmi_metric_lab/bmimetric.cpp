#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float weight, height, bmi;
    cout<<"Please enter weight in kilograms: ";
    cin>>weight;
    cout<<"Please enter height in meters: ";
    cin>>height;
    // Calculate BMI.
    bmi = weight/pow(height, 2);
    // Make BMI precision as 2 decimal places
    bmi = int(bmi) + round((bmi-int(bmi))*100)/100;
    cout<<"BMI is: "<<bmi<<endl;

    return 0;
}