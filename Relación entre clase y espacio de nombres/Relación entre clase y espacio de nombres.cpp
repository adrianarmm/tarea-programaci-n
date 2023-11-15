#include <iostream>

namespace Geometria {
    const double PI = 3.14159265358979323846;

    class Circulo {
    private:
        double radio;
    public:
        Circulo(double radio) : radio(radio) {}
void setRadio(double radio) {
            this->radio = radio;
        }
        double getRadio() {
            return radio;
        }
        double calcularArea() const{
            return PI * radio * radio;
        }
        double calcularPerimetro() const{
            return 2 * PI * radio;
        }
        bool compararAreas(const Circulo& otroCirculo) const{
            return calcularArea() > otroCirculo.calcularArea();
        }
    };
}