#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat b1("Alice", 1);
        std::cout << b1 << std::endl;
        b1.incrementGrade(); // Esto debería lanzar excepción
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try {
        Bureaucrat b2("Bob", 151); // Esto también lanza excepción
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try {
        Bureaucrat b3("Charlie", 149);
        b3.decrementGrade(); // Debe quedar en 150
        std::cout << b3 << std::endl;
        b3.decrementGrade(); // Ahora lanza excepción
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
