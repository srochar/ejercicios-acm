#include <iostream>
#include <cmath>

using namespace std;

long long int count_base(long long int value, long long int base)
{
    long long int sum = 0;
    long long int num = value;
    num= (value+1)/base;
    sum = num*base/2;
    if( (value+1)%base > base/2)
    {
        sum += (value+1)%base-base/2;
    }
    return sum;
}

long long int count_one(long long int num)
{
    int i = log10(num)/log10(2);
    long long int sum = 0;
    for(int j = 0 ; j <= i ; j++)
    {
        sum += count_base(num, pow(2,j+1));
    }
    return sum;
}

void m()
{
    long long int A,B;
    while(cin >> A >> B)
    {
        cout << count_one(B)- count_one(A-1)<< endl;
    }
}

int main()
{
    m();
}
