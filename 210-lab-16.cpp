// Keshav Yanamandra
// COMSC-210-5293, Fall 2026
// Lab 16 -- reusing my lab 14 color class with constructors

#include <iostream>
#include <iomanip>

using namespace std;

const int W15 = 15;


class Color {
    private:
        int red;
        int green;
        int blue;

    public:

        // default constructor
        Color() {
            red = 0;
            green = 0;
            blue = 0;
        }

        // partial constructor. red only
        Color(int r) {
            red = r;
            green = 0;
            blue = 0;
        }

        // partial constructor. red and green
        Color(int r, int g) {
            red = r;
            green = g;
            blue = 0;
        }

        // parameter constructor with all three
        Color(int r, int g, int b) {
            red = r;
            green = g;
            blue = b;
        }
        
        //setters
        void setRed(int r) {
            red = r;
        }

        void setGreen(int g) {
            green = g;
        }

        void setBlue(int b) {
            blue = b;
        }

        //getters
        int getRed() {
            return red;
        }

        int getGreen() {
            return green;
        }

        int getBlue() {
            return blue;
        }

        // other method
        void print() {
            cout << setw(W15) << "Red: " << red << endl;
            cout << setw(W15) << "Green: " << green << endl;
            cout << setw(W15) << "Blue: " << blue << endl;
        }
};


int main() {

    Color color1;

    color1.setRed(165);
    color1.setGreen(0);
    color1.setBlue(68);

    Color color2;
    color2.setRed(255);
    color2.setGreen(100);
    color2.setBlue(235);

    Color color3;
    color3.setRed(34);
    color3.setGreen(139);
    color3.setBlue(34);

    color1.print();
    cout << endl;
    color2.print();
    cout << endl;
    color3.print();


    //using getters
    cout << endl;

    cout << "Using getters and printing" << endl;
    cout << "Color1 Red: " << color1.getRed() << endl;
    cout << "Color2 Red: " << color2.getRed() << endl;
    cout << "Color3 Red: " << color3.getRed() << endl;

    cout << endl;



    return 0;
}
