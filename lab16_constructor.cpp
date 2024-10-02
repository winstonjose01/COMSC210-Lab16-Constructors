// COMSC210 | Lab 16 | Winston Jose
// Github link: https://github.com/winstonjose01/COMSC210-Lab16-Constructors 
// IDE used: Visual Studio code

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
        // Default Constructor
        Color(){
            red = 0; green = 0; blue = 0;
        }
        // Partial Constructor
        Color (int r, int b){
            red = r, green = 0; blue = b;
        }
        // Full Parameter Constructor
        Color (int r, int g, int b){
            red = r, green = g; blue = b;
        }
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

        // printRGB() prints the RBG value of a color object
        // arguments: string t(constructor type), int r(red value), int g (green value),
        // int b (blue value)
        // returns: void
        void printRGB (string n, int r, int g, int b){
            cout << setw(4) << "----------------" << setw(21) << "-----" << setw(10) << "-----" << setw(9) << "-----" << endl;
            cout << setw(20) << n << setw(15) << r << setw(9) << g << setw(9) << b << endl;
        }
};

int main(){
    // Seed the random generator
    const int RBG_MAX = 255;
    random_device seed;
    mt19937 gen{seed()};
    // Generate random integers between 0-255 (RGB color value range)
    uniform_real_distribution<> color_distr{0,RBG_MAX};

    // Instantiate 3 Color objects with the default constructor
    Color color1; Color color2; Color color3;
    // Instantiate 3 Color objects with a partial constructor
    Color color4 (255,255); Color color5(160,160); Color color6(150,150);
    // Instantiate 3 Color objects with a full parameter constructor
    Color color7(10,10,10); Color color8(255,80,255); Color color9(100,100,100);
    
    // Print the header for the table
    cout << setw(4) << "Constructor type" << setw(20) << "Red" << setw(11) << "Green" << setw(8) << "Blue" << endl;

    // Call the printRGB method and display output for 3 objects using the default constructor
    color1.printRGB("Default Constructor: ",color1.getRed(), color1.getGreen(), color1.getBlue());
    color2.printRGB("Default Constructor: ", color2.getRed(), color2.getGreen(), color2.getBlue());
    color3.printRGB("Default Constructor: ", color3.getRed(), color3.getGreen(), color3.getBlue());
    // Call the printRGB method and display output for 3 objects using a partial constructor
    color4.printRGB("Partial Constructor: ",color4.getRed(), color4.getGreen(), color4.getBlue());
    color5.printRGB("Partial Constructor: ",color5.getRed(), color5.getGreen(), color5.getBlue());
    color6.printRGB("Partial Constructor: ",color6.getRed(), color6.getGreen(), color5.getBlue());
    // Call the printRGB method and display output for 3 objects using a full parameter constructor
    color7.printRGB("Full Parameter Cons: ",color7.getRed(), color7.getGreen(), color7.getBlue());
    color8.printRGB("Full Parameter Cons: ",color8.getRed(), color8.getGreen(), color8.getBlue());
    color9.printRGB("Full Parameter Cons: ",color9.getRed(), color9.getGreen(), color9.getBlue());

    return 0;
}
