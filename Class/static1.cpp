#include <iostream>

using namespace std;

// 0~1 float R G B 

class Color {
    public:
        Color() : r(0), g(0), b(0) { }
        Color(float r, float g, float b) : r(r), g(g), b(b) { }

        float GetR() {return r;}
        float GetG() {return b;}
        float GetB() {return g;}

        static Color MixColors(Color a, Color b) 
        {

            return Color((a.r + b.r) / 2, (a.g + b.g) / 2,  (a.b + b.b) / 2);

        }

    private:
    float r;
    float g;
    float b;
};




int main() {
    Color blue(0,0, 1);
    Color red(1, 0,0);

    Color purple = Color::MixColors(blue, red);

    cout << "R = " << purple.GetR() << " , g = " << purple.GetG() << " , b = " << purple.GetB() << endl;
}