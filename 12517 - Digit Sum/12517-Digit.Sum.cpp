#include <iostream>
#include <cmath>

using namespace std;

long recursivo(long dig,long num)
{
    if(dig == 1)
        return 45*dig*(num/(dig*10))+dig*(num/dig%10 - 1)*(num/dig%10)/2+(num/dig%10)*(num%dig);
    else
        return 45*dig*(num/(dig*10))+dig*(num/dig%10 - 1)*(num/dig%10)/2+(num/dig%10)*(num%dig) + recursivo(dig/10,num);
}

long frecu(long long num)
{
    int lar = log10(num);
    long cantD = pow(10,lar);
    return recursivo(cantD,num);
}

int main()
{
    long long m ,n;
    while(cin >> m >> n)
    {
        if(m == 0 && n == 0) break;
        cout << frecu(n+1)-frecu(m)<< endl;
    }
}
