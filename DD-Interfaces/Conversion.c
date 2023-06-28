#include "Conversion.h"

double Fahrenheit(double celsius){
    return (celsius * 9.0 / 5.0) + 32.0;
}

double Celsius(double fahrenheit){
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}
