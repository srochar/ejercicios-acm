#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N,G;
    int equi1,equi2;
    while(cin >> N >> G)
    {
        int puntos = 0;
        vector<int> dif_partidos;
        for(int i = 0; i < N ; i++)
        {
            cin >> equi1 >> equi2 ;
            if(equi1 > equi2)
                puntos += 3;
            else
            {
                if(equi2-equi1 == 0)
                    puntos+=1;
                dif_partidos.push_back(equi2-equi1);
            }
        }
        sort(dif_partidos.begin(),dif_partidos.end());
        for(int i = 0 ; i < dif_partidos.size() ; i++)
        {
            if(dif_partidos[i] == 0 && G > 0 )
            {
                G -=1;
                puntos +=2;
            }
            if(dif_partidos[i] + 1 <= G  && G > 0 && dif_partidos[i] > 0)
            {
                puntos += 3;
                G -= dif_partidos[i] + 1;
            }
            else
            {
                if(dif_partidos[i] == G && G >0)
                {
                    puntos += 1;
                    break;
                }
            }
        }
        cout << puntos << endl;
    }
}
