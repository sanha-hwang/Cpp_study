#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2; // 길이를 지정해줄 필요가 없어서 편함
    str1 = "Hello";
    str2 = "World";
    cout << str1 << str2 << endl;

    string name;
    cout << "이름 입럭 : ";
    cin >> name;

    string message = "안녕하세요, " + name + "님.";
    cout << message << endl;
}