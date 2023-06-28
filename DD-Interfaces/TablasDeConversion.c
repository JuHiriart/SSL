#include "Conversion.h"
#include <stdio.h>

void PrintFila(double value1, double value2)
{
    printf("%8.2f  %8.2f\n", value1, value2);
}

void PrintFilas(double (*convert)(double), double lower, double upper, double step)
{
    for (double value = lower; value <= upper; value += step)
    {
        double convertedValue = convert(value);
        PrintFila(value, convertedValue);
    }
}

void PrintTablaCelsius(double lower, double upper, double step)
{
    printf("Celsius  Fahrenheit\n");
    printf("-------------------\n");
    PrintFilas(Fahrenheit, lower, upper, step);
}

void PrintTablaFahrenheit(double lower, double upper, double step)
{
    printf("Fahrenheit  Celsius\n");
    printf("-------------------\n");
    PrintFilas(Celsius, lower, upper, step);
}

void PrintTablas()
{
    double lower = 0.0;
    double upper = 100.0;
    double step = 10.0;

    printf("Tabla de Celsius a Fahrenheit:\n");
    PrintTablaCelsius(lower, upper, step);

    printf("\n");

    printf("Tabla de Fahrenheit a Celsius:\n");
    PrintTablaFahrenheit(lower, upper, step);
}

int main()
{
    PrintTablas();
    return 0;
}