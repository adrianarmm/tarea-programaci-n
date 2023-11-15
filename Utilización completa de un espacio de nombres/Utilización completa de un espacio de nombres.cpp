#include <iostream>
namespace Matematicas {
    int suma(int a, int b)
    {
        return a + b;
    }
}
int main()
{
    std::cout << Matematicas::suma(2, 3) << std::endl;
    return 0;
}