#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>
#include <stdlib.h>

using namespace std; 

// Read file and return value in a vector
vector<int> readFile() {
    vector<int> forecast;

    // jan - sept forecast
    // used for local testing
    char filename[50] = "forecast.txt";
    ifstream file;

    // unused: used to manually type in file name
    // cin.getline(filename, 50);

    file.open(filename);

    // check if file is open
    if (!file.is_open()) {
        exit(EXIT_FAILURE);
    }

    string word;

    file.getline(filename, 50); // skip first line which is the header
    file >> word;
    while(file.good()) {
        // parsing the string to get the forecast number only.
        string forecastNum = word.substr(word.find(',') + 1, word.length());
        forecast.push_back(stoi(forecastNum)); // converting string to int. Is there a better way to handle this?
        file >> word;
    }

    return forecast;
}

// Should a reference or a pointer be used here?
// Formula:
// * (A1 + A2 + A3 + ... + An) / n
double calcSimpleMovingAvg(vector<int> vec, int forecastMonth) {
    double simpleAvg = 0;

    for(int i = 0; i < forecastMonth; i++) {
        simpleAvg += vec[i];
    }

    return simpleAvg / forecastMonth;
}

// Formula:
// * ((A1 * w1) + (A2 * w2) + ... + (An * wn)) / (w1 + w2 + ... + wn)
// See: for example
// * https://www.dropbox.com/s/mef2kw7g1c48rck/CISC%203142%20Class%20Exercise%209.docx?dl=0
// Apparetly 
// * "Weighted moving average across 3 months (where weights are in decreasing order;
// *  weight of 3 for the previous month, 2, then 1)" 
// but meh
double calcWeightageMovingAvg(vector<int> vec, int forecastMonth) {
    double weightageAvg = 0;
    int denominator = 0;
    for(int i = 0; i < forecastMonth; i++) {
        weightageAvg += (vec[i] * (i + 1)); // we're adding one because our index starts at 0 instead of 1
        denominator += (i + 1);
    }

    return weightageAvg / denominator;
}

// NOTE We're assuming the months are in correct order!
int main(){
    vector<int> forecast = readFile();

    int forecastMonth = 0;
    double simpleMovingAvg = 0;

    // Simple moviong average for the first 9 month
    forecastMonth = 9;
    simpleMovingAvg = calcSimpleMovingAvg(forecast, forecastMonth);
    cout << "Simple Moving Average for " << forecastMonth << " month is: " << simpleMovingAvg << endl;

    // Moving average across 3 months
    forecastMonth = 3;
    simpleMovingAvg = calcSimpleMovingAvg(forecast, forecastMonth);
    cout << "Simple Moving Average for " << forecastMonth << " month is: " << simpleMovingAvg << endl;


    // Weighted moving average across 3 months
    // note: yes this is redundant, but it easy to read
    forecastMonth = 3;
    double weightageMovingAvg = calcWeightageMovingAvg(forecast, forecastMonth);
    cout << "Weightage Moving Average for " << forecastMonth << " month is: " << weightageMovingAvg << endl;

    return 0;
}

