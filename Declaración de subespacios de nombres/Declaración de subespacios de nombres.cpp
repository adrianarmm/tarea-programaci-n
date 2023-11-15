#include <iostream>

namespace Ciencia {
    namespace Fisica {
        const double c = 299792458;

        double energia(double masa) {
            return masa * c * c;
        }

double calcularMomentoLineal(double masa, double velocidad) {
            return masa * velocidad;
        }

    }



}