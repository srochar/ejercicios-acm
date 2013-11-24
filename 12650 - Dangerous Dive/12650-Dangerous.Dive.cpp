#include <iostream>
#include <list>
#include <algorithm>

using namespace std;


int main()
{
    int N, R;
    int num;
    while(cin >> N >> R)
    {
        list<int> buceadores;
        for(int i = 1; i <= N ; i++)
        {
            buceadores.push_back(i);
        }
        for(int i = 0 ; i < R ; i++)
        {
            cin >> num;
            buceadores.remove(num);
        }
        if(buceadores.empty())
        {
            cout << "*" << endl;
        }
        else
        {
            for (list<int>::iterator it=buceadores.begin(); it!=buceadores.end(); ++it)
                cout << *it<<' ';
            cout << endl;
        }
    }
    return 0;
}
