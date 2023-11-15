#include <iostream>
#include <vector>
#include <map>
#include <set>

int main ()
{
    std::vector<int> numeros; {1, 2, 3, 4, 5;};
    numeros.push_back(6);

    std::cout << "vector" ;
    for (int num : numeros) {
        std::cout << " " << num;
    }
    std::cout << std::endl;

    std::map<std::string, int> edad;
    edad["Juan"] = 25;
    edad["Maria"] = 30;
    edad.erase("Juan");

    std::cout << "map" << std::endl;
    for (const auto& persona : edad) {
        std::cout << persona.first << " " << persona.second << std::endl;
    }
    std::cout << std::endl;

    std::set<int> conjunto;; {1, 2, 3, 4, 5;};
    conjunto.insert(6);
    conjunto.erase(1);

    std::cout << "set" << std::endl;
    for (int num : conjunto) {
        std::cout << num << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
