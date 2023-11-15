#include <iostream>

namespace Geometria {
    namespace Circulo {
        const double PI = 3.14159265358979323846;
        double calcularArea(double radio)
        {
            return PI * radio * radio;
        }
        double calcularPerimetro(double radio)
        {
            return 2 * PI * radio;
        }
    }

}