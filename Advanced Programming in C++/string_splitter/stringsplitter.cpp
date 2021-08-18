#include <iostream>
#include <string>

using namespace std;

int main(){
    string left, right, total;
    char middle;

    // Read a string from the user until he/she enters an odd length string.
    do{
        cout<<"Enter an odd length string: ";
        getline(cin, total);
    }
    while (!(total.length()%2));
    // Print middle character.
    cout<<"Middle character: "<<total[total.length()/2]<<endl;
    // Print first half of the string.
    cout<<"First half: "<<total.substr(0, total.length()/2)<<endl;
    // Print second half of the string.
    cout<<"Second half: "<<total.substr(total.length()/2+1)<<endl;   
    return 0;
}