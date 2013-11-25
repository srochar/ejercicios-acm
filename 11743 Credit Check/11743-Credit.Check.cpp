#include <iostream>

using namespace std;

int suma_digitos(int num)
{
    int sum =0 ;
    while(num!= 0 )
    {
        sum+=num%10;
        num /= 10;
    }
    return sum;
}

int sumDig_impar(int num)
{
    int a = num/1000*2;
    int b = num%100/10*2;
    a = suma_digitos(a);
    b = suma_digitos(b);
    return a+b;
}

int sumDig_par(int num)
{
    int a = num%1000/100;
    int b = num%10;
    return a+b;
}

int main()
{
    int N;
    int dig;
    cin >> N;
    for(int i = 0 ; i < N ; i++)
    {
        int sum = 0;
        for(int j = 0; j < 4; j++)
        {
            cin >> dig;
            sum += sumDig_impar(dig) + sumDig_par(dig);
        }
        if(sum%10 == 0)
            cout <<"Valid" << endl;
        else
            cout << "Invalid" << endl;
    }
}
