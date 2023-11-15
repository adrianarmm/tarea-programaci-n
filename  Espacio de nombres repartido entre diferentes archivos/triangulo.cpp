#include <iostream>

namespace Geometria {
    namespace Triangulo {
        float area(float base, float altura)
        {
            return base * altura / 2;
        }
        double calcularPerimetro(double lado1, double lado2, double lado3)
        {
            return lado1 + lado2 + lado3;
        }
    }
}