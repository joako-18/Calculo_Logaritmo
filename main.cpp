#include <iostream>
#include <cmath>
using namespace std;
double ln(double x) {
    return log(x);
}

double derivada_ln(double x) {
    return 1.0 / x;
}

double derivada_producto(double u(double), double v(double), double x) {
    return u(x) * derivada_ln(x) + ln(x) * v(x);
}

int main() {
    int opcion;
    double x;

    do {
        cout << "Seleccione una opcion:" << endl;
        cout << "1. Calcular el logaritmo natural de x" << endl;
        cout << "2. Calcular la derivada del producto de dos funciones" << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el valor de x: ";
                cin >> x;
                cout << "ln(" << x << ") = " << ln(x) << endl;
                break;
            case 2:
                double (*u)(double), (*v)(double);
                cout << "Ingrese el valor de x: ";
                cin >> x;
                cout << "Ingrese el valor de u(x): ";
                cin >> x;
                u = ln;
                cout << "Ingrese el valor de v(x): ";
                cin >> x;
                v = ln;
                cout << "Derivada del producto de u(x) y v(x) en x = " << derivada_producto(u, v, x) << endl;
                break;
            case 3:
                cout << "Saliendo del programa..." <<endl;
                break;
            default:
                std::cout << "Opcion no valida. Intentelo de nuevo." << endl;
        }

    } while (opcion != 3);

    return 0;
}
