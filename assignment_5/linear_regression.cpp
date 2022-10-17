#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// TODO: Sloppy, can definetly be cleaned up
double delta(vector<double> coorList) {
    double res;
    double numCoor = coorList.size();

    for (int i = 0; i < coorList.size(); ++i) {
        res += coorList[i];
    }

    // Make sure this is double division
    return res / numCoor;
}

// Too many args!!!
double findSlope(vector<double> xCoor, vector<double> yCoor, double deltaX, double deltaY, double* numerator, double* denominator) {
    // TODO: Find delta here maybe? inefficient af but meh
    int res;
    

    // xCoor and yCoor should be the same size. Assuming inputs are correct
    // TODO: Pretty sure loops can be simplified and combined
    for (int i = 0; i < xCoor.size(); ++i) {
        xCoor[i] -= deltaX;
        yCoor[i] -= deltaY;
    }


    for (int i = 0; i < xCoor.size(); ++i) {
        *numerator = xCoor[i] * yCoor[i];
        *denominator += xCoor[i];
    }

    // TODO: Use math pow()
    res = *numerator / (*denominator * *denominator);

    return res;

}


int main () {
    int numCoor;
    double numerator, denominator;
    vector<double> xCoor;
    vector<double> yCoor;

    cout << "How many cooridinate you want to enter? "  << endl;
    cin >> numCoor;

    if (numCoor == 0) {
        cout << 'end' << endl;
        return 0;
    }

    // Saves coordinates to vector
    for (int i = 0; i < numCoor; i++) {
        int x, y;
        cout << "Enter a pair of number representing x and y cooridinates: ";
        cin >> x >> y;
        xCoor.push_back(x);
        yCoor.push_back(y);
    }

    // TODO: How can references be used here?
    double deltaX = delta(xCoor);
    double deltaY = delta(yCoor);

    double slope = findSlope(xCoor, yCoor, deltaX, deltaY, &numerator, &denominator);
    double intercept = deltaY - (slope * deltaX);

    // Looks like calculation is wrong somewhere? TODO: round to 2 decimal for readability
    cout << "Linear model: y=" << std::ceil(intercept * 100.0) / 100.0 << "+" <<  slope << "x" << endl;

    return 0;
}