// COMSC-210 | Lab 14 | Shuhaib Walahi

#include <iostream>
#include <vector>

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
            cout << "RGB(" << red << ", " << green << ", " << blue << ")" << endl;
        }
};

int main ()
{
    Color firstColor, secondColor, thirdColor;
    
    return 0; 
}