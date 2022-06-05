#include <iostream>


int n ;
void set() {
    n = 10;
}

namespace doodle {
    int n; 
    void set();

    namespace google 
    {
        int n;
        void set()
        {
            n = 30;
        }
    } 
}

int main()
{
    using namespace std;
    using namespace doodle;

    ::set();
    doodle::set();
    google::set();
    cout << ::n << endl;
    cout << doodle::n << endl;
    cout << google::n << endl;
}



void doodle::set()
{
    n = 20;
}
void doodle::google::set()
{
    n = 30;
}