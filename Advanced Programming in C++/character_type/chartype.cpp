#include <iostream>
#include <string>

using namespace std;

int main(){
    char c;
    // Ask user to enter a character.
    cout<<"Enter a character: ";
    cin>>c;

    // Classify it with respect to its ASCII value.
    if (c>='0' && c<='9')
        cout<<c<<" is a digit."<<endl;
    else if (c>='A' && c<='Z')
        cout<<c<<" is an upper case letter."<<endl;
    else if (c>='a' && c<='z')
        cout<<c<<" is a lower case letter."<<endl;
    else
        cout<<c<<" is a non-alphanumeric character."<<endl;

    return 0;
}