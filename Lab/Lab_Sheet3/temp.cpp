#include <iostream>
using namespace std;
class Celcius
{
public:
    float toFarhrenheit(float cel);
};

float Celcius::toFarhrenheit(float cel)
{
    float f;
    f = cel * 1.8 + 32;
    return f;
}
class Farhrenheit
{
public:
    float toCelcius(float far);
};

float Farhrenheit::toCelcius(float far)
{
    float ce;
    ce = (((far - 32) *5)/9);
    return ce;
}

int main()
{
    float temp;
    int c;
    char op;

    do
    {
        cout << "Enter Your choices:" << endl
             << "1. To convert into degree Farenheit:" << endl
             << "2. To convert into degree celcius:" << endl
             << "3. To exit" << endl;
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "Enter the temp in celcius:" << endl;
            cin >> temp;
            Celcius c1;
            cout << "Your Temp in degree farhreinheit :" << c1.toFarhrenheit(temp);

            break;
        case 2:
            cout << "Enter the temp in Farenheit:" << endl;
            cin >> temp;
            Farhrenheit f1;
            cout << "Your Temp in degree Celcius :" << f1.toCelcius(temp);

            break;
        case 3:
            exit(0);

        default:
            cout << "Please Choose one from given Options :" << endl;
        }

        cout << "\nWould You like to continue :";
        cin >> op;
    } while (op == 'y');

    return 0;
}