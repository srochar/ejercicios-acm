#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int base26(string a)
{
    int sum = 0;
    for(int i = 0 ; i <= 2 ; i++ )
        sum += (int)(a[i]-65)*pow(26,2-i);
    return sum;
}

int main()
{
    int N;
    cin >> N;
    string data;
    int seg_parte;
    int prim_parte;
    for(int i = 0 ; i < N ; i++)
    {
        cin>> data;
        prim_parte = base26(data.substr(0,data.find('-')));
        seg_parte = atoi(data.substr(data.find('-')+1,data.length()).c_str());
        int dif = prim_parte - seg_parte;
        if(dif < 0)
            dif *= -1;
        if(dif > 100)
            cout << "not " ;
        cout << "nice" << endl;
    }
}
