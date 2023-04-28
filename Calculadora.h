#pragma once 
#include "Calculadora.h"

class Calculadora
{
public:
    double Calcular(double x, char oper, double y);
    
double Calculadora::Calcular(double x, char oper, double y)
{
    switch(oper)
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        default:
            return 0.0;
    }
}
};