#include <iostream>

using namespace std;

int main()
{
    int hora, minuto;
    while (cin >> hora){
        cin >> minuto;
        hora = hora / 30;
        minuto = minuto / 6;
        if (hora < 10){
            cout << "0" << hora << ":";
        }else{
        cout << hora << ":";
        }
        if (minuto < 10){
            cout << "0" << minuto <<endl;
        }else{
        cout << minuto <<endl;
        }
    }
    return 0;
}
