/*

2. 다음과 같은 함수 정의애서 컴파일 오류가 나는 이유를 찾아보세요

*/

#include <iostream>

void drawRectangle(int l, int r, int t, int b)
{

}

void drawRectangle(int x= 0, int y = 0, int w, int h) // default값을 가지는 변수는 오른쪽부터 줘야함
{

}

void drawRectangle(int w, int h, int x= 0, int y = 0) // default값을 가지는 변수는 오른쪽부터 줘야함
{

} // 두 함수의 오버로드가 변수 개수도 형식도 똑같아서 구분을 할 수 없어 오류 발생



using namespace std;

int main()
{
    return 0;
}