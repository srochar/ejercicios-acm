#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    while(cin >> N)
    {
        int max_ = -1,min_ = 1000000;
        string name,name_min,name_max;
        int a,m,d;
        int di;
        for(int i = 0 ; i < N ; i++)
        {
            cin >> name >> d >> m >> a;
            di = d+m*31+a*12*31;
            if(di < min_)
            {
                min_ = di;
                name_min = name;
            }
            if(di > max_)
            {
                max_ = di;
                name_max = name;
            }
        }
        cout << name_max << endl;
        cout << name_min << endl;
    }
}
