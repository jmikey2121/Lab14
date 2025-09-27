// COMSC-210 | Lab 14 | Justin Mikesell
// IDE used: Visual Studio Code 

#include <iostream>
#include <iomanip>
using namespace std;

class Color {
private:
    int red;
    int green;
    int blue;

public:
    // setters
    void setRed(int r)   { red = r; }
    void setGreen(int g) { green = g; }
    void setBlue(int b)  { blue = b; }

    // getters
    int getRed()   { return red; }
    int getGreen() { return green; }
    int getBlue()  { return blue; }

    // member print
    void print() {
        cout << "Color values:" << endl;
        cout << setw(5) << "Red: "   << red   << endl;
        cout << setw(5) << "Green: " << green << endl;
        cout << setw(5) << "Blue: "  << blue  << endl;
        cout << endl;
    }
};
int main() {
    cout << "Color Values" << endl << endl;

    // Yellow
    Color yellow;
    yellow.setRed(255);
    yellow.setGreen(255);
    yellow.setBlue(0);
    cout << "Yellow:" << endl;
    yellow.print();

    // Peach
    Color peach;
    peach.setRed(255);
    peach.setGreen(218);
    peach.setBlue(185);
    cout << "Peach:" << endl;
    peach.print();

    // Gold
    Color gold;
    gold.setRed(255);
    gold.setGreen(215);
    gold.setBlue(0);
    cout << "Gold:" << endl;
    gold.print();

    return 0;
}

