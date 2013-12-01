#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n,seq[110],b,sum;
    int casos = 1;
    while(cin >> n)
    {
        bool isB2 = true;
        map<int,bool> visi;
        seq[0] =0;
        for(int i = 1 ; i <= n ; i++)
        {
            cin >> b;
            seq[i] = b;
            if(b <1 || seq[i-1] >= seq[i] )
            {
                isB2 = false;
            }
        }
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = i ; j <= n ; j++)
            {
                sum = seq[i] + seq[j];
                if(visi[sum] == false)
                {
                    visi[sum] = true;
                }
                else
                {
                    isB2 = false;
                }
            }
        }
        if(isB2)
            cout << "Case #"<<casos<<": It is a B2-Sequence." << endl << endl;
        else
            cout << "Case #"<<casos<<": It is not a B2-Sequence." << endl << endl;
        casos +=1;
    }
}
