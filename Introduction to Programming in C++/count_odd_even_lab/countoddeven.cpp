#include <iostream>
using namespace std;

int main(){
    int odd=0,even=0,number;
    cout<<"Please enter 4 positive integers, separated by a space: ";
    // Read for numbers seperated by space.
    for(int i=0; i<4; i++){
        cin>>number;
        if(number%2)
            odd++;
        else    
            even++;
    }
    // Compare and print the winner or draw.
    if(odd>even)
        cout<<"more odds"<<endl;
    else if(odd<even)
        cout<<"more evens"<<endl;
    else
        cout<<"same number of evens and odds"<<endl;
    
    return 0;
}