 #include <iostream>
 #include "Calculadora.h"
 using namespace std; 

//texto pregunta//
int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Calculadora Gabriel#67" << endl << endl;
    cout << "Porfavor escribe la operacion a ejecutar. Ejemplo:  a+b | a-b | a*b | a/b "
        << endl;
    return 0;

//imprimir resultado//

   Calculadora c;
    while (true)
    {
        cin >> x >> oper >> y;
        result = c.Calcular(x, oper, y);
        cout << "El resultado " << "de la operacion" << x << oper << y << " es: " << result << endl;
    }

    return 0;
}

