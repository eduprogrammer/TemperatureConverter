/*
Copyright 2021. Eduardo Programador
www.eduardoprogramador.com
consultoria@eduardoprogramador.com
*/

class TemperateConverter
{

    private:
        float temp;

    public:
        TemperateConverter(float temperature)
        {
            temp = temperature;
        }

        void toCelcius();

        void toFahrenheit();

        float getNumber()
        {
            return temp;
        }
};


