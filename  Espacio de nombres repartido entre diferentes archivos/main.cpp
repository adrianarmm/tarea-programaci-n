#include <iostream>
#include "triangulo.cpp"
#include "circulo.cpp"

int main() {
    double area_triangulo = Geometria::Triangulo::area(5, 3);
    std::cout << "El área del triángulo es: " << area_triangulo << std::endl;
    double perimetro_triangulo = Geometria::Triangulo::calcularPerimetro(5, 3, 4);
    std::cout << "El perímetro del triángulo es: " << perimetro_triangulo << std::endl;
    double area_circulo = Geometria::Circulo::calcularArea(5);
    std::cout << "El área del círculo es: " << area_circulo << std::endl;
    double perimetro_circulo = Geometria::Circulo::calcularPerimetro(5);
    std::cout << "El perímetro del círculo es: " << perimetro_circulo << std::endl;
    return 0;

}