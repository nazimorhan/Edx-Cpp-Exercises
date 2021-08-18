#include <string>

using namespace std;

string remainingwords(string s){
    int i;
    string remaining;
    // Iterate over the string until whitespace takes place and use the i-value to detect start index of the remaining words in s.
    for(i=0; i<s.length(); i++){
        if (s[i] == ' ')
            break;
    }
    // Use the i+1'th index as starting idex of sub string of s. 
    return s.substr(i+1);
}
