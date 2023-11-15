#include <iostream>
#include <vector>
#include <map>
#include <set>

int main ()
{
    std::vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);

    std::cout << "vector" ;
    for (int num : numeros) {
        std::cout << " " << num;
    }
    std::cout << std::endl;
}