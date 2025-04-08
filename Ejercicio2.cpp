#include <iostream>

void mostrarMenu() {
    std::cout << "Seleccione una operación:\n";
    std::cout << "1. Sumar\n";
    std::cout << "2. Restar\n";
    std::cout << "3. Multiplicar\n";
    std::cout << "4. Dividir\n";
    std::cout << "5. Salir\n";
}

int main() {
    int opcion;
    double num1, num2;

    do {
        mostrarMenu();
        std::cout << "Ingrese su opción: ";
        std::cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            std::cout << "Ingrese el primer número: ";
            std::cin >> num1;
            std::cout << "Ingrese el segundo número: ";
            std::cin >> num2;
        }

        switch (opcion) {
            case 1:
                std::cout << "Resultado: " << num1 + num2 << std::endl;
                break;
            case 2:
                std::cout << "Resultado: " << num1 - num2 << std::endl;
                break;
            case 3:
                std::cout << "Resultado: " << num1 * num2 << std::endl;
                break;
            case 4:
                if (num2 != 0) {
                    std::cout << "Resultado: " << num1 / num2 << std::endl;
                } else {
                    std::cout << "Error: División por cero no permitida." << std::endl;
                }
                break;
            case 5:
                std::cout << "Saliendo del programa..." << std::endl;
                break;
            default:
                std::cout << "Opción no válida. Intente de nuevo." << std::endl;
        }
    } while (opcion != 5);

    return 0;
}