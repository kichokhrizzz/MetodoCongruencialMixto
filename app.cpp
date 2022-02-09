#include <iostream>
#include "string"

int main (){

    int a = 13;
    int m = 64;
    int Xn = 21;
    int c = 21;
    int primerValor;
    float random;
    int modulo;

    printf (" No. -- aXn + c -- (aXn+c)/m -- Xn + r -- RND \n");
    for (int i = 0; i <= m/2 ; i++)
    {
        primerValor = a*Xn + c;
        modulo = primerValor/m;
        Xn=(Xn*a + c)%m;
        random = (float)Xn/(float)m;
        printf("%i -- %i -- %i -- %i -- %.3f \n", i, primerValor, modulo, Xn, random);

    }
    

    return 0;
}