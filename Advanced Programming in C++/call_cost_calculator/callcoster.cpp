#include <iostream>
#include <string>

using namespace std;

bool containsDay(string dayPool, string day);
float processStartTime(string time);

int main(){
    string startday, starttime;
    float minutes, floatStarttime, total, rate;
    string weekDays = "MonTueWedThrFri";
    // Ask for the start of the call.
    cout<<"Enter the day the call started at: ";
    cin>>startday;
    // Ask for the time call started at.
    cout<<"Enter the time the call started at (hhmm): ";
    cin>>starttime;
    // Ask for the duration of the call.
    cout<<"Enter the duration of the call (in minutes): ";
    cin>>minutes;

    // Process inputs and calculate rate accordingly.
    if (containsDay(weekDays, startday)){
        floatStarttime = processStartTime(starttime);
        if (floatStarttime>=8.0 && floatStarttime<=18.0)
            rate = 0.40;
        else
            rate = 0.25;
    }
    else 
        rate = 0.15;

    // Get total cost.
    total = rate * minutes;

    // Print the total cost.
    cout<<"This call will cost $";
    printf("%.2f\n", total);

    return 0;
}

bool containsDay(string dayPool, string day){
    // Return if day is in dayPool.
    return (dayPool.find(day)!=-1);
}

float processStartTime(string time){
    /** This function simply converts the string time input(in 24-hour notation) into a float number 
    */ 

    // We are only interested in up to 1 decimal places, it is enough for this lab.
    return (int(time[0])-48)*10 + (int(time[1])-48) + (int(time[2])-48)*0.1;
}