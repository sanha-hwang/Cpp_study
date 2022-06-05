// 생성자 : 객체가 생성될 때 자동으로 호출되는 함수
// 소멸자 : 객체가 소ㅕㅁㄹ될 때 자동으로 호출되는 함수

#include <iostream>

using namespace std;

class MyClass {
    public:
    MyClass() { // 생정자
        cout << "생성자가 호출되었다!!" << endl; // 객체가 생성되는 순간 발현
    }
    
    ~MyClass() { // 소멸자
        cout << "소멸자가 호출되었다!!" << endl; // 소멸자가 속해있는 지역이 끝나는 순간 발현

    }
};

// MyClass globalObj;

void testLocalobj()
{
    cout << "testLocalobj 시작!!" << endl;
    MyClass localObj;
    cout << "testLocalobj 끝" << endl;
}

int main()
{
    cout << "메인함수 시작!!" << endl;
    testLocalobj();
    cout << "메인함수 끝" << endl;

}