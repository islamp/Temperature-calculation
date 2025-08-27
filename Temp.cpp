

#include <iostream>
#include <cmath>

using namespace std;

double CilsiusToFehrenheit()
{
    double F, C, Temp;

    cout << "enter temprature to get fehenheit: \n";
    cin >> C;

    

    return Temp = F = (C * 9 / 5) + 32;

    
}

double CilsiusToKalvin()
{
    double K, C, Temp;

    cout << "enter temprature to get kalvin: \n";
    cin >> C;

    

    return Temp = K = C + 273.15;

   


}

double CilsiusToRankine()
{
    double R, C, Temp;

    cout << "enter temprature to get Rankine: \n";
    cin >> C;

    

     Temp = R = (C + 273.15) * 9 / 5;

    return Temp;
}

void Calcutation()
{
    short Choice = 0;

    do {

        cout << "Choose the number of temprature you want to convert celsius to: \n";
        cin >> Choice;

    } while (Choice < 1 || Choice > 3);

    switch (Choice)
    {

    case 1:
        cout << CilsiusToFehrenheit();
        break;

    case 2:
        cout << CilsiusToKalvin();
        break;

    case 3:
        cout << CilsiusToRankine();
        break;

    default:
        cout << "invalid";
        break;



    }
};


void PerformCalculation()
{
    cout << "1 >> Fehrenheit" << endl;
    cout << "2 >> Kalvin" << endl;
    cout << "3 >> Rankine" << endl;

    cout << "---------------------------------------" << endl;

     Calcutation();
}



int main()
{
     PerformCalculation();

    return 0;
}

