#include <string>

using namespace std;

string firstword(string s){
    string word = "";
    // Iterate over s until whitespace takes place.
    for (int i=0; i<s.length(); i++){
        if (s[i] != ' ')
            word += s[i];
        else
            break;
    }

    return word;

}