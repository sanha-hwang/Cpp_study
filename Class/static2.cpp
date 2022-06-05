#include <iostream>

using namespace std;

// 0~1 float R G B 


class Color {
    public:
        Color() : r(0), g(0), b(0), id(idCounter++) { }
        Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) { }

        float GetR() {return r;}
        float GetG() {return b;}
        float GetB() {return g;}

        int GetId() {return id;}

        static Color MixColors(Color a, Color b) 
        {

            return Color((a.r + b.r) / 2, (a.g + b.g) / 2,  (a.b + b.b) / 2);

        }
        static int idCounter;


    private:
    float r;
    float g;
    float b;

    int id;
};

int Color::idCounter = 1; // 선언과 정의를 분리, class 안에서 idCounter 선언 후  정의는 바깥에서 해줌



int main() {
    Color red(1, 0,0);

    Color blue(0,0, 1);

    Color purple = Color::MixColors(blue, red);

    cout << "r = " << purple.GetR() << " , g = " << purple.GetG() << " , b = " << purple.GetB() << endl;
    cout << "red.GetId() = " << red.GetId() << endl;
    cout << "blue.GetId() = " << blue.GetId() << endl;
    cout << "purple.GetId() = " << purple.GetId() << endl;
}