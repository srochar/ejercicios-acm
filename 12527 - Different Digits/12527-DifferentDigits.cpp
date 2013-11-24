#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int verificar(int num)
{
    int sum = 0;
    vector<int> digitos;
    while(num != 0)
    {
        digitos.push_back(num%10);
        num /= 10;
    }
    sort(digitos.begin(),digitos.end());
    for(int i = 0; i < digitos.size() -1 ; i++)
    {
        if(digitos[i] == digitos[i+1])
            return 0;
    }
    return 1;
}

int main()
{
    int N,M;
    int sum;
    while(cin >> N >> M)
    {
        sum = 0;
        for(int i = N; i <= M ; i++)
        {
            sum += verificar(i);
        }
        cout << sum << endl;
    }
}
