// COMSC-210 | Lab 14 | Adriel Chandra
// IDE used: Visual Studio Code

#include <iostream>
#include <iomanip>
#include <vector>
#include <array>
#include <fstream>
using namespace std;

const int W15 = 15, SIZE = 3;  // Assuming size 3 for example, but can be adjusted

class Color {
private:
    int red;
    int green;
    int blue;

public:
    // Getters and setters
    int getRed()               { return red; }
    void setRed(int r)         { red = r; }
    int getGreen()             { return green; }
    void setGreen(int g)       { green = g; }
    int getBlue()              { return blue; }
    void setBlue(int b)        { blue = b; }

    // Print method
    void print() {
        cout << setw(W15) << "Red: " << red << endl;
        cout << setw(W15) << "Green: " << green << endl;
        cout << setw(W15) << "Blue: " << blue << endl;
    }
};

int main() {
    // Create and populate Color objects
    Color color1, color2, color3;

    // Populate colors using setter methods
    color1.setRed(255);  color1.setGreen(0);    color1.setBlue(0);   // Red
    color2.setRed(0);    color2.setGreen(255);  color2.setBlue(0);   // Green
    color3.setRed(0);    color3.setGreen(0);    color3.setBlue(255); // Blue

    // Output using print method
    cout << "Color 1 values:\n";
    color1.print();

    cout << "Color 2 values:\n";
    color2.print();

    cout << "Color 3 values:\n";
    color3.print();

    return 0;
}