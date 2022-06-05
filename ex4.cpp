#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    // 변수 초기화
    int a = 10; //c언어 스타일
    int b(10); // cpp 스타일

    int c(b+5);

    cout << " a=  "<< a << endl;
    cout << " b=  "<< b << endl;

    cout << " c=  "<< c << endl;

}