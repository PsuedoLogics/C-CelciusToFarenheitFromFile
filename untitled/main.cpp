//By Michael Mathews
//11/28/2024

#include <fstream>
#include <iostream>
using namespace std;

int main() {

    ifstream inputFile;
    inputFile.open("FahrenheitTemperature.txt");
    ofstream outFile;
    outFile.open("CelsiusTemperature.txt");
    if(!inputFile.is_open()) {
        cout << "Could not find file";
        return 1;
    }

    while(!inputFile.eof()) {
        string line;
        int f;
        int c;
        inputFile >> line;
        inputFile >> f;
        c = (f - 32) * (5.0/9);

        outFile << line  << " " << c << endl;

    }

    inputFile.close();
    outFile.close();

    return 0;
}