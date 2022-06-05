#include <iostream>

using namespace std;

int n; // 전역 변수 선언
void set()
{
    n = 10; // 전역변수라고 
}

namespace doodle {
    int n;
    void set();
}


namespace google {
    int n;
    void set();
    
}

int main(void)
{
    ::set();
    doodle::set();
    google::set();

    cout << ::n << endl;
    cout << doodle::n << endl;
    cout << google::n << endl;
}

void google::set()
{
    n = 30;
}

void doodle::set()
{
    n= 20;
}