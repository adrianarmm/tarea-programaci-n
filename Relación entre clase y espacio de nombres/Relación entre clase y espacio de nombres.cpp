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
    };