#include <cmath>
#include <string>
using namespace std;

string convert_int_to_str(int num);
int convert_str_to_int(string s);

/* This function returns if the given integer is a palindrome or not.
*/
bool is_palindrome(int test){
    // Convert int to reversed string.
    string s = convert_int_to_str(test);
    // Check the base cases which are 1-digit and 2-digits numbers.
    if (s.length()==1)
        return true;
    else if (s.length()==2){
        if (s[0]==s[1])
            return true;
        else
            return false;
    }
    else{
        // Check any unmatched digits.
        if (s[0] != s[s.length()-1])
            return false;
        // Filter out matched digits and go on with the remaining ones.
        s = s.substr(1, s.length()-2);
        // Consider the case when there exists leading zeros.
        // Check leading zero case until there exists no leading zeros.
        while (s.length()!=1 && s[0]=='0'){ // If leading zero matches with the last zero, slice the string again.
            if (s[s.length()-1]=='0')
              s = s.substr(1,s.length()-2);
            else
              return false;
        }
        // Convert string to the corresponding integer value and call the function recursively.
        return is_palindrome(convert_str_to_int(s));
    }
}

/* This function converts an integer to a string of its digits in reverse order.
*/
string convert_int_to_str(int num){
    string s = "";
    int digit = 0;
    // Divide the number by the powers of 10 to get all of its digits.
    if (num){
      while (num/(int)pow(10, digit)){
        char c = num/(int)pow(10, digit)%10 + 48;
        s += c; // Add the digit to the resulting string.
        digit++;
      }
    }
    else
      s = '0';
    return s;  
}

/* This function converts a reversed string to integer .
*/
int convert_str_to_int(string s){
    int num = 0;
    for (int i=0; i<s.length(); i++){
        // Since s is in reverse order, related powers of the digits are also reversed.
        num += pow(10, s.length()-1-i)*((int)(s[i])-48);
    }  
    return num;
}