// COMSC210 | Lab 14 | Winston Jose
// Github link: https://github.com/winstonjose01/COMSC-210-Lab14

# include <iostream>
# include <random>
# include <iomanip>
using namespace std;

class Color {
    // Declare 3 private variables red, green, blue for RGB color values
    private:
        int red;
        int green;
        int blue;
    
    public:
        // Constructor
        Color(){};
        // Setter for private variable red
        void setRed(int r)      { red = r;}
        // Setter for private variable green
        void setGreen(int g)    { green = g;}
        // Setter for private variable blue
        void setBlue(int b)     { blue = b;}
        // Returns the red private variable
        int getRed()    {return red;}
        // Returns the green private variable
        int getGreen()  {return green;}
        // Returns the blue private variable
        int getBlue()   {return blue;}

        // Prints the Color objects
        void printRGB (int n, int r, int g, int b){
            cout << setw(4) << "-----" << setw(9) << "-----" << setw(10) << "-----" << setw(9) << "-----" << endl;
            cout << setw(3) << n << setw(10) << r << setw(9) << g << setw(9) << b << endl;
        }

};

int main(){
    // Seed the random generator
    random_device seed;
    mt19937 gen{seed()};
    // Generate random integers between 0-255 (RGB color value range)
    uniform_real_distribution<> color_distr{0,255};

    // Instantiate 5 Color objects
    Color color1;
    Color color2;
    Color color3;
    Color color4;
    Color color5;
    
    // Set the red, green and blue colors for each Color object
    color1.setRed(color_distr(gen)); color1.setGreen(color_distr(gen)); color1.setBlue(color_distr(gen));
    color2.setRed(color_distr(gen)); color2.setGreen(color_distr(gen)); color2.setBlue(color_distr(gen));
    color3.setRed(color_distr(gen)); color3.setGreen(color_distr(gen)); color3.setBlue(color_distr(gen));
    color4.setRed(color_distr(gen)); color4.setGreen(color_distr(gen)); color4.setBlue(color_distr(gen));
    color5.setRed(color_distr(gen)); color5.setGreen(color_distr(gen)); color5.setBlue(color_distr(gen));

     // Print the header for the table
    cout << setw(4) << "Color" << setw(8) << "Red" << setw(11) << "Green" << setw(8) << "Blue" << endl;
    
    // Call the printRGB method
    color1.printRGB(1, color1.getRed(), color1.getGreen(), color1.getBlue());
    color2.printRGB(2, color2.getRed(), color2.getGreen(), color2.getBlue());
    color3.printRGB(3, color3.getRed(), color3.getGreen(), color3.getBlue());
    color4.printRGB(4, color4.getRed(), color4.getGreen(), color4.getBlue());
    color5.printRGB(5, color5.getRed(), color5.getGreen(), color5.getBlue());

    return 0;
}
