// 1. 매개변수의 상수화 ( 모든 함수)
// 2. 메서드의 상수화 (멤버 메서드)
#include <iostream>

using namespace std;

class Account {
    public:
        Account() : money(0) {}
        Account(int money) : money(money) {}

        void Deposit(const int d) 
        {
            money += d;
            cout << d << "원을 예금했다!!" << endl;
        }

        void Draw(const int d)
        {
            if (money > d)
            {
                money -= d;
                cout << d << "원을 인출했다!!!"<< endl;
            }
        }
    
    int ViewMoney() const // 변화를 방지하여 변화없도록!! 함수는 뒤쪽에 const 부착
    {
        return money;
    }

    private:
        int money;
};




int main(){
    Account doodle(200);

    doodle.Deposit(100);
    doodle.Draw(20);

    cout << doodle.ViewMoney() << endl;


}