#include <iostream>

using namespace std;

class MyClass {
    public:
    void PrintThis(){
        cout << "나의 주소는 " << this << endl; // 보이지 않는 매개변수를 this pointer로 기록
    }
};

int main(){
    MyClass a, b;

    cout << "a의 주소는 " << &a << endl;
    cout << "b의 주소는 " << &b << endl;

    a.PrintThis();
    b.PrintThis();

}