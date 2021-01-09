/*
Copyright 2021. Eduardo Programador
www.eduardoprogramador.com
consultoria@eduardoprogramador.com
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include "routines.h"

#define CELSIUS 1
#define FAHRENHEIT 2

using namespace std;


int main()
{
    char *tem;
    tem = (char *) malloc(512);
    float tt;

    cout << "############## Temperature Converter ###########\n";
    cout << "################################################\n";
    cout << "########## www.eduardoprogramador.com ##########\n\n";

    cout << "Informe a temperatura> ";
    cin >> tem;

    tt = atof(tem);

    TemperateConverter tc(tt);

    cout << "Escolha uma opcao:\n\n";
    cout << "1. Celsius para Fahrenheit.\n";
    cout << "2. Fahrenheit para Celsius\n\n";

    int choosen;
    cin >> choosen;

    switch(choosen)
    {
        case CELSIUS:
        tc.toCelcius();
        cout << "Temperatura em Celsius: " << tc.getNumber() << endl;
        break;

        case FAHRENHEIT:
        tc.toFahrenheit();
        cout << "Temperatura em Fahrenheit: " << tc.getNumber();
        break;

        default:
        cout << "Opcao invalida!\n\n";
    }

    cout << "Ate logo!";
    int bye;
    cin >> bye;

    return 0;
}
