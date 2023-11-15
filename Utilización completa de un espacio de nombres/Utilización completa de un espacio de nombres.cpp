#include <iostream>
namespace Matematicas {
    int suma(int a, int b)
    {
        return a + b;
    }
    int resta(int a, int b)
    {
        return a - b;
    }
    int multiplicacion(int a, int b) {
        return a * b;
    }
    float division(float a, float b) {
        if (b != 0) {
            return a / b;

}
int main()
{
    std::cout << Matematicas::suma(5, 3) << std::endl;
    std::cout << Matematicas::resta(5, 3) << std::endl;
    return 0;
}
