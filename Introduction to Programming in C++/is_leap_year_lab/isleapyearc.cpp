#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]){
    // Convert year string to int variable
    int year = stoi(argv[1]);
    // Look for the the cases when a leap year occurs or not.
    if(year%4==0){
        if(year%100==0 && year%400!=0)
            cout<<year<<" was not a leap year"<<endl;
        else
            cout<<year<<" was a leap year"<<endl;
    }
    else
        cout<<year<<" was not a leap year"<<endl;

    return 0;
}