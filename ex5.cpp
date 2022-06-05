#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int arr[10] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    for (int n : arr)
    {
        cout << n << " ";
    }

    cout << endl;
    for (int &n : arr) // ???
    {
        cout << n << " ";
        n++;
    }

}