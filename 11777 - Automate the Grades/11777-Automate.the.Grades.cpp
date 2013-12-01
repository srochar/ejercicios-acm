#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int i = 0 ; i < T ; i++)
    {
        int ter1,ter2,fin,asi,prom,cla1,cla2,cla3,nota;
        cin >> ter1 >> ter2 >> fin >> asi >> cla1 >> cla2 >> cla3;
        if(cla1 <= cla2 && cla1 <= cla3)
            prom = (cla2+cla3)/2;
        else
            if(cla2 <= cla1 && cla2 <= cla3)
                prom = (cla1+cla3)/2;
            else
                if(cla3 <= cla1 && cla3 <= cla2)
                    prom = (cla2+cla1)/2;
        nota = ter1+ter2+fin+asi+prom;
        if(nota >= 90)
            cout << "Case " << i+1<<": A" << endl;
        else
            if(nota >= 80)
                cout << "Case " << i+1<<": B" << endl;
            else
                if(nota >= 70)
                    cout << "Case " << i+1<<": C" << endl;
                else
                    if(nota >=60)
                        cout << "Case " << i+1<<": D" << endl;
                    else
                        cout << "Case " << i+1<<": F" << endl;
    }
}
