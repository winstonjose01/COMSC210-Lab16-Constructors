// COMSC210 | Lab 16 | Winston Jose
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

        // Prints the Color objects
        void printRGB (string n, int r, int g, int b){
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
    Color color1; Color color2; Color color3;

    Color color4 (255,255); Color color5(160,160); Color color6(150,150);

    Color color7(10,10,10); Color color8(255,80,255); Color color9(100,100,100);
    
    // Call the printRGB method and display output for object using Default Constructore
    color1.printRGB("Default Constructor: ",color1.getRed(), color1.getGreen(), color1.getBlue());
    color2.printRGB("Default Constructor: ", color2.getRed(), color2.getGreen(), color2.getBlue());
    color3.printRGB("Default Constructor: ", color3.getRed(), color3.getGreen(), color3.getBlue());

    color4.printRGB("Partial Constructor: ",color4.getRed(), color4.getGreen(), color4.getBlue());
    color5.printRGB("Partial Constructor: ",color5.getRed(), color5.getGreen(), color5.getBlue());
    color6.printRGB("Partial Constructor: ",color6.getRed(), color6.getGreen(), color5.getBlue());

     // Print the header for the table
    cout << setw(4) << "Color" << setw(8) << "Red" << setw(11) << "Green" << setw(8) << "Blue" << endl;
    
 

    return 0;
}
