// COMSC-210 | Lab 14 | Shuhaib Walahi

#include <iostream>
#include <iomanip>

using namespace std; 

class Color
{
    private:
        int red;
        int blue; 
        int green;

    public:
        // the 3 getters
        int getRed() const {return red;}
        int getBlue() const {return blue;}
        int getGreen() const {return green;}

        // the 3 setters
        void setRed(int r) {red = r;}
        void setBlue(int b) {blue = b;}
        void setGreen(int g) {green = g;}

        // method for printing 
        void print() const
        {
            cout << "Red: " << setw(3) << red << ", "
            << "Green: " << setw(3) << green << ", "
            << "Blue: " << setw(3) << blue << endl;
        }
};

int main ()
{
    Color firstColor, secondColor, thirdColor;
    
      // create color one with the setters
    firstColor.setRed(255);
    firstColor.setBlue(255);
    firstColor.setGreen(255);

    // create color two with the setters
    secondColor.setRed(255);
    secondColor.setBlue(255);
    secondColor.setGreen(0);

    // create color three with the setters
    thirdColor.setRed(0);
    thirdColor.setBlue(255);
    thirdColor.setGreen(255);

    // output color 1
    cout << "Color 1: ";
    firstColor.print();

    // output color 2
    cout << "Color 2: ";
    secondColor.print();

    // output color 3
    cout << "Color 3: ";
    thirdColor.print();

    cout << endl;
    
    return 0; 
}