#include <iostream>
#include <cstring>

using namespace std;

class String {
    public:
        String() {
            cout << "String() 생정자 호출" << endl;
            strData = NULL;
            len = 0;
        }

        String(const char *str) {
            cout << "String(const char*) 생정자 호출" << endl;
            len = strlen(str); //str의 길이를 계산하여 반환
            strData = new char[len+1]; // 끝에 널문자가 들어가므로 +1을 해줌
            cout << "strData 할당: " << (void*)strData << endl; // void 포인터 :
            strcpy(strData, str); // str을 strData로 깊은 복사
        }

        String(const String &rhs) {
            cout << "String(String &rhs) 생정자 호출" << endl;
            strData = new char[rhs.len+1]; // 끝에 널문자가 들어가므로 +1을 해줌
            cout << "strData 할당: " << (void*)strData << endl; // void 포인터 :
            strcpy(strData, rhs.strData); // str을 strData로 깊은 복사
            len = rhs.len;
        }

        ~String() {
            cout << "~String() 소멸자 호출" << endl;
            delete[] strData;
            cout << "strData 해제됨 : " << (void*)strData << endl;
            strData = NULL;

        }

        char *GetStrData() const { 
            return strData;
        }

        int GetLen() const { 
            return len;
        }

    private:
        char *strData; // 문자열, 배열 형태
        int len; // 문자열 길이
};

int main() {
    String s1("안녕"); 
    String s2(s1); // 복사 생성자, s1.strData를 복사할 때 얕은 복사가 일어남, 메모리 해제에서 에러남
    
    cout << s1.GetStrData() << endl;
    cout << s2.GetStrData() << endl;
}
