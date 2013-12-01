#include<iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <sstream>

using namespace std;

bool primos[10000010];
void llenarPrimos()
{
    primos[1]=false;
    int n=sqrt(10000000);
    for(int i=2;i<=n;i++)
    {
        if(primos[i]!=false)
        {
            for(int j=2*i;j<=10000000;j=j+i)
            {
                primos[j]=false;
            }
        }
    }
}

void m()
{
    string s;
    int num;
    while(cin >> s)
    {
        if(s == "0")
            break;
        int max_ = -1;
        for(int i = 0 ; i < s.size(); i++)
        {
            for(int j = i ; j < s.size(); j++)
            {
                istringstream is(s.substr(i,j));
                is >> num;
                //cout << num << endl;
                if(num <= 100000 && primos[num])
                {
                    max_ = max(max_,num);
                }
            }
        }
        cout << max_ << endl;
    }
}

int main()
{
    memset(primos,true,sizeof(primos));
    llenarPrimos();
    m();
    return 0;
}

