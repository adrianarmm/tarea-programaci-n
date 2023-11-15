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
        double calcularFuerza(double masa, double aceleracion) {
            return masa * aceleracion;
        }
    }
}
int main() {
    std::cout << "La energía de un objeto de 1kg es: " << Ciencia::Fisica::energia(1) << std::endl;

    double masa = 1;
    double velocidad = 0.5;
    double momento_lineal = Ciencia::Fisica::calcularMomentoLineal(masa, velocidad);
    std::cout << "El momento lineal de un objeto de " << masa << "kg y " << velocidad << "m/s es: " << momento_lineal << std::endl;

    }
}