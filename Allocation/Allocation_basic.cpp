// 정적 할당: int a;
// 동적 할당: 프로그램 실행중에 변수를 메모리에 할당하는 것

// int b;

// int main() {
//     int a;
// }

#include <iostream>

using namespace std;

int main() {
    // int a = int(5);
    int *a = new int(5); // new : int 5를 저장하는 공간 할당, 할당한 공간의 메모리 주소를 포인터 a로 저장

    cout << a << endl;
    cout << *a << endl;

    *a = 10;
    cout << a << endl;
    cout << *a << endl;

    delete a; // 포인터 a가 가리키는 공간을 메모리 해제
}