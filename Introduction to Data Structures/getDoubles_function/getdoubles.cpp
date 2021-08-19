#include <iostream>
#include <string>

using namespace std;
/* This function simply creates a dynamic array with specified length and returns the pointer to that array.
*/
double* getDoubles(int numDoubles){
    double* doubleArray = new double [numDoubles];
    for (int i = 0.0; i < numDoubles; i++){
        doubleArray[i] = (float)(i+1)/3;
    }

    return doubleArray;
}
