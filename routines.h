/*
Copyright 2021. Eduardo Programador
www.eduardoprogramador.com
consultoria@eduardoprogramador.com
*/

#include "temp_conv.h"

void TemperateConverter::toCelcius()
{
    temp = (temp * 1.8) + 32;
}

void TemperateConverter::toFahrenheit()
{
    double div = (double) 5/9;
    temp = (temp - 32) * div;
}
