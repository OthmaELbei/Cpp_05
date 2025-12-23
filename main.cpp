#include <iostream>
#include <stdexcept>

// int divide(int a, int b)
// {
//     if (b == 0)
//         throw  std::exception();
//     return a / b;
// }

int main()
{
   int y = 20;
   int *const p = &y;
    *p=30;

    std :: cout << y << std::endl;
    std :: cout << &y << std::endl;
    std :: cout << p << std::endl;
    std :: cout << &p << std::endl;
    std :: cout << *p << std::endl;
}
