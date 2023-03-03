#include <iostream>
using namespace std;
double dtr(double);
double rtd(double);
double ptr(double);
double rtp(double);
double etr(double);
double rte(double);
double dte(double);
double etd(double);
double dtp(double);
double ptd(double);
double etp(double);
double pte(double);
int main()
{
    int c;
    cout << "\n\n\t\t\t\t\t\t\t\t\tCURRENCY CONVERTOR\n\n";
    cout << "\t\tHere's a currency convertor for you which helps you convert currency of your choice to the other favorable choice.\n\t\tAny fluctuation in the currency rate might be seen in the calculations as at times it won't be updated here.\n";
    cout << "Opt your choice from the followings:\n";
    cout << "1. DOLLAR(USD) TO RUPEE(INR)\n";
    cout << "2. RUPEE(INR) TO DOLLAR(USD)\n";
    cout << "3. POUND(GBP) TO RUPEE(INR)\n";
    cout << "4. RUPEE(INR) TO POUND(GBP)\n";
    cout << "5. EURO(EUR) TO RUPEE(INR)\n";
    cout << "6. RUPEE(INR) TO EURO(EUR)\n";
    cout << "7. DOLLAR(USD) TO EURO(EUR)\n";
    cout << "8. EURO(EUR) TO DOLLAR(USD)\n";
    cout << "9. DOLLAR(USD) TO POUND(GBP)\n";
    cout << "10. POUND(GBP) TO DOLLAR(USD)\n";
    cout << "11. EURO(EUR) TO POUND(GBP)\n";
    cout << "12. POUND(GBP) TO EURO(EUR)\n";
    cin >> c;
    switch (c)
    {
        double dollar,rs,pound,euro;
        case 1:
            cout << "Enter value of dollar:";
            cin >> dollar;
            rs = dtr(dollar);
            cout << "DOLLAR(USD) TO RUPEE(INR):" << rs << endl;
            break;
        case 2:
            cout << "Enter value of rupee:";
            cin >> rs;
            dollar = rtd(rs);
            cout << "RUPEE(INR) TO DOLLAR(USD):" << dollar << endl;
            break;
        case 3:
            cout << "Enter value of pound:";
            cin >> pound;
            rs = ptr(pound);
            cout << "POUND(GBP) TO RUPEE(INR):" << rs << endl;
            break;
        case 4:
            cout << "Enter value of rupee:";
            cin >> rs;
            pound = rtp(rs);
            cout << "RUPEE(INR) TO POUND(GBP)" << pound << endl;
            break;
        case 5:
            cout << "Enter value of euro:";
            cin >> euro;
            rs = etr(euro);
            cout << "EURO(EUR) TO RUPEE(INR):" << rs << endl;
            break;
        case 6:
            cout << "Enter value of rupee:";
            cin >> rs;
            euro = rte(rs);
            cout << "RUPEE(INR) TO EURO(EUR):" << euro << endl;
            break;
        case 7:
            cout << "Enter value of dollar:";
            cin >> dollar;
            euro = dte(dollar);
            cout << "DOLLAR(USD) TO EURO(EUR):" << euro << endl;
            break;
        case 8:
            cout << "Enter value of euro:";
            cin >> euro;
            dollar = etd(euro);
            cout << "EURO(EUR) TO DOLLAR(USD):" << dollar << endl;
            break;
        case 9:
            cout << "Enter value of dollar:";
            cin >> dollar;
            pound = dtp(dollar);
            cout << "DOLLAR(USD) TO POUND(GBR):" << pound << endl;
            break;
        case 10:
            cout << "Enter value of pound:";
            cin >> pound;
            dollar = ptd(pound);
            cout << "POUND(GBR) TO DOLLAR(USD):" << dollar << endl;
            break;
        case 11:
            cout << "Enter value of euro:";
            cin >> euro;
            pound = etp(euro);
            cout << "EURO(EUR) TO POUND(GBR):" << pound << endl;
            break;
        case 12:
            cout << "Enter value of pound:";
            cin >> pound;
            euro = pte(pound);
            cout << "POUND(GBR) TO EURO(EUR):" << euro << endl;
            break;
        default:
            cout << "Wrong input!\n";
            break;
    }
    return 0;
}

double dtr(double x)
{
    return x*81.66; 
}
double rtd(double x)
{
    return x/81.66;
}
double ptr(double x)
{
    return x*98.39;
}
double rtp(double x)
{
    return x/98.39;
}
double etr(double x)
{
    return x*86.87;
}
double rte(double x)
{
    return x/86.87;
}
double dte(double x)
{
    return x*0.94;
}
double etd(double x)
{
    return x/0.94;
}
double dtp(double x)
{
    return x*0.83;
}
double ptd(double x)
{
    return x/0.83;
}
double etp(double x)
{
    return x*0.88;
}
double pte(double x)
{
    return x/0.88;
}