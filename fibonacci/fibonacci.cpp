#include <iostream>
using namespace std;

int main(){
    int length;
    int num = 1;
    int prev = 1;
    int temp;
    // Ask user the legth of fibonacci series.
    cout<<"Please enter a positive integer greater than 1: ";
    cin>>length;
    for(int i=1; i<=length; i++){
        if(i<3)
            cout<<1<<endl;
        else{
            // Update num and prev, then print the num.
            temp = num;
            num += prev;
            prev = temp;
            cout<<num<<endl;
            }
    }
    return 0;
}