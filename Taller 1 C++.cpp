/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char oper;

    cout << "Ingrese dos números: ";
    cin >> num1 >> num2;

    cout << "Ingrese la operación (+, -, *, /): ";
    cin >> oper;

    switch (oper) {
        case '+':
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Resultado: " << num1 / num2 << endl;
            else
                cout << "Error: División por cero" << endl;
            break;
        default:
            cout << "Operación no válida" << endl;
    }

    double precioOriginal, descuento, precioFinal;

    cout << "Ingrese el precio original: ";
    cin >> precioOriginal;

    descuento = precioOriginal * 0.15;  // Calcula el 15% de descuento
    precioFinal = precioOriginal - descuento;  // Resta el descuento al precio original

    cout << "El descuento es: " << descuento << endl;
    cout << "El precio final con descuento es: " << precioFinal << endl;

    double valor = 10;

    // Aumentar en 5
    valor += 5;
    
    // Reducir en 3
    valor -= 3;
    
    // Multiplicar por 2
    valor *= 2;
    
    // Dividir entre 4
    valor /= 4;

    // Mostrar el resultado final
    cout << "El valor final es: " << valor << endl;

    return 0;
}
