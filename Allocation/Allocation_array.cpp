#include <iostream>

using namespace std;

int main() {
    int *arr;
    int len; // 상황별로 다른 길이로 할당

    cout << "동적할당할 배열 길이 입력 :" ;
    cin >> len;

    arr = new int[len];

    for (int i = 0; i < len; i++) {
        arr[i] = len -i;
    }

    for (int i = 0; i < len; i++) {
        cout << arr[i] << endl;
    }

    delete[] arr; // delete arr는 arr[0]만 할당해제하는 것이므로 delete[]로 해제해줘야함
    
}