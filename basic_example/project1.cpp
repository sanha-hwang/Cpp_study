/*

1. 이름과 점수를 입력받고,  다음과 같이 출력되는 프로그램을 작성해보세요.

이름입력: 두들 낙서
점수입력: 80
두들낙서님의 점수는 80점입니다.

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int score;

    cout << "이름 입력: ";
    cin >> name;
    cout << "점수 입력 :";
    cin >> score;

    cout << name << "님의 점수는" << score << "점 입니다. "<< endl;
}