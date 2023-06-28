#include "Conversion.h"
#include <assert.h>
#include <stdio.h>

void testConversion(){
    double celsius = Celsius(32.0);
    double fahrenheit = Fahrenheit(0.0);
    assert(celsius == 0.0);
    assert(fahrenheit == 32.0);
}

int main(){
    testConversion();
     printf("paso el test\n");
    return 0;
}