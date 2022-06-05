#include <iostream>

using namespace std; // std 소속은 전ㅂ다 가져다 사용하겠다

int main()
{
    // name space : 함수의 소속을 알 수 있게 지정,
    // printf("%d",a::n);
    // printf("%d", b::n);


    //cpp 스타일 입력
    int a, b;
    cin >> a >> b;

    cout << a << "+" << b << "=" << a+b << endl; 

}