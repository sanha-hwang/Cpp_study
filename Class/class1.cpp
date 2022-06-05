// 클래스 = 자료 저장 + 자료 처리 = 변수 + 함수
// 클래스 (타입) : 특정한 용도를 수행하기 위한 변수와 함수를 모아 둔 틀(자료형)
// 객체(오브젝트) : 그 틀을 이용하여 찍어낸 객체 (변수, 메머리 상의 공간)

#include <iostream>

using namespace std;

// 지사자 종류 : 
// private, protected, public

class TV { // struct는 기본이 public, class는 기본이 private
private:
    bool powerOn;
    int channel;
    int volume;

public:
    void on() {
        powerOn = true;
        cout << "TV를 켰습니다." << endl;
    }

    void off() {
        powerOn = false;
        cout << "TV를 껐습니다." << endl;
    }

    void setChannel(int cnl)
    {
        if (cnl >= 1 && cnl <= 999)
        {
            channel = cnl;
            cout << "채널을" << cnl << "(으)로 바꿨습니다." << endl;
        }
    }


    void setVolume(int vol)
    {
        if (vol >= 0 && vol <= 100)
        {
            volume = vol;
            cout << "볼륨을" << vol << "(으)로 바꿨습니다." << endl;
        }
        
    }
};

int main()
{
    TV lg;
    lg.on();
    lg.setChannel(10);
    lg.setVolume(50);
    lg.setChannel(-70);

}