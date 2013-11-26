#include <iostream>

using namespace std;

int digitos(long long int num)
{
    int sum = 0;
    while(num!= 0)
    {
        sum += num%10;
        num/=10;
    }
    //cout << sum << endl;
    return sum;
}

int sum_dig(long long int num)
{
    if(num <10)
        return num;
    else
        return sum_dig(digitos(num));
}

int main()
{
    int N;
    while(cin >> N)
    {
        if(N == 0)
            break;
        else
        {
            cout << sum_dig(N) << endl;
        }
    }
}
