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
    Color red(255,0,0);
    Color green(0,255,0);
    Color blue(0,0,255);
    Color orange(255,165,0);

    // Display all four colors.
    cout << "Red" << endl;
    cout << "-----------" << endl;
    red.print();
    cout << "Green" << endl;
    cout << "-----------" << endl;
    green.print();
    cout << "Blue" << endl;
    cout << "-----------" << endl;
    blue.print();
    cout << "Orange" << endl;
    cout << "-----------" << endl;
    orange.print();
}