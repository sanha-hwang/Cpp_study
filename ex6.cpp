// over load function

#include <iostream>
#include <string>

void swap(int &a, int &b)
{
    int tmp = a;
    a = b ;
    b = tmp;
}

void swap(double &a, double &b)
{
    double tmp = a;
    a = b ;
    b = tmp;
}

void swap(int *(&a), int *(&b))
{
    int *tmp = a;
    a = b ;
    b = tmp;
}


int main(void)
{
    int a = 20, b = 30;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    swap(a, b);
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    std::cout << std::endl;



    double da = 2.222, db = 3.333;
    std::cout << da << std::endl;
    std::cout << db << std::endl;

    swap(da, db);
    std::cout << da << std::endl;
    std::cout << db << std::endl;
    
    int *pa = &a, *pb = &b;    

    swap(pa, pb);
    std::cout << *pa << std::endl;
    std::cout << *pb << std::endl;



}