#include <iostream>
#include <vector>
#include <string>

using namespace std;

int pizza[] = {1,3,2,1,1,1};
char letras[] = {'M','A','R','G','I','T'};

int cantidad_letra(string date, char p)
{
    int sum = 0;
    while(date.find(p) != -1)
    {
        sum += 1;
        date = date.substr(date.find(p) +1 ,date.length());
    }
    return sum;
}

int pizzas_totales(int cantidad_letras[])
{
    int sum = 0;
    while(true)
    {
        for(int i = 0 ; i < 6 ; i++)
        {
            cantidad_letras[i] -= pizza[i];
            if(cantidad_letras[i] < 0)
                return sum;
        }
        sum+=1;
    }
}

int main()
{
    int cantidad_letras[6];
    int casos;
    string date;
    cin >> casos;
    for(int i = 0; i < casos; i++)
    {
        cin >> date;
        for(int i = 0 ; i < 6; i++)
            cantidad_letras[i] = cantidad_letra(date,letras[i]);
        cout << pizzas_totales(cantidad_letras) << endl;
    }

    return 0;
}
