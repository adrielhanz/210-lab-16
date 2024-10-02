// COMSC-210 | Lab 16 | Adriel Chandra
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
    // Default constructor
    Color () : red (0), green (0), blue (0)  {}

    // Full paramater constructor
    Color (int r, int g, int b) : red(r), green (g), blue (b) {}

    // Partial constructor
    Color (int r) : red (r), green(0), blue (0) {}
    Color (int r, int g) : red (r), green(g), blue (0) {}

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
    Color color1;
    Color color2;
    Color color3;



    // Output using print method
    cout << "Color 1 values:\n";
    color1.print();

    cout << "Color 2 values:\n";
    color2.print();

    cout << "Color 3 values:\n";
    color3.print();

    return 0;
}