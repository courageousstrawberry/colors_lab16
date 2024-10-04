#include <iostream>
#include <array>

using namespace std;

// Create color class.
class Color {
    private:
        // Three private integer colors to represent the color.
        int red;
        int green;
        int blue;
    public:
        // Constructors for the class.
        // Default constructor.
        Color() {
            red = 0;
            green = 0;
            blue = 0;
        }
        // Partial constructor for red.
        Color(int r) {
            red = r;
            green = 0;
            blue = 0;
        }
        // Partial constructor for red and green.
        Color(int r, int g) {
            red = r;
            green = g;
            blue = 0;
        }
        // Parameter constructor.
        Color(int r, int g, int b) {
            red = r;
            green = g;
            blue = b;
        }
        // Setter functions to set each integer to it's corresponding private variables.
        void setRed(int r){
            red = r;
        }
        void setGreen(int g){
            green = g;
        }
        void setBlue(int b){
            blue = b;
        }
        // Getter functions that returns an array with each integer.
        int getRed() const{
            return red;
        }
        int getGreen() const{
            return green;
        }
        int getBlue() const{
            return blue;
        }
        // Print function that displays the integer values of the color.
        void print(){
            cout << "The color is: " << endl;
            cout << red << ", " << green << ", " << blue << endl;
        }
};

int main() {
    // Create four color objects.
    Color red(255); // partial constructor
    Color green(0,255,0); // parameter constructor
    Color blue(0,0,255); // parameter constructor
    Color orange(255,165); // partial constructor
    Color black; // default constructor

    // Display all four colors.
    cout << "Red" << endl;
    cout << "-----------" << endl;
    red.print();
    cout << endl;

    cout << "Green" << endl;
    cout << "-----------" << endl;
    green.print();
    cout << endl;

    cout << "Blue" << endl;
    cout << "-----------" << endl;
    blue.print();
    cout << endl;

    cout << "Orange" << endl;
    cout << "-----------" << endl;
    orange.print();
    cout << endl;
    
    cout << "Black" << endl;
    cout << "-----------" << endl;
    black.print();
}