
#include <iostream>

int sumar(int num1, int num2)
{
    return num1 + num2;
}

int restar(int num1, int num2)
{
    return num1 - num2;
}

int multiplicar(int num1, int num2)
{
    return num1 * num2;
}

int dividir(int num1, int num2)
{
    if (num2 > 0)
    {
        return num1 / num2;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int numero1, numero2, resSuma, resResta, resMulti, resDividir;
    numero1 = 10;
    numero2 = 20;

    resSuma = sumar(numero1, numero2);
    resResta = restar(numero1, numero2);
    resMulti = multiplicar(numero1, numero2);
    resDividir = dividir(numero1, numero2);

    std::cout << "Suma: " << resSuma << "\n";
    std::cout << "Resta: " << resResta << "\n";
    std::cout << "Multiplicacion: " << resMulti << "\n";
    std::cout << "Division: " << resDividir << "\n";

    return 0;
}






