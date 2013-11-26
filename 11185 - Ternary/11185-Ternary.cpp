#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>

using namespace std;

int main()
{
    int N;
    while(cin >> N && N>0)
    {
        if(N == 0)
            cout << "0";
        else
        {
            int t[1000];
            int i=0;
            while(N > 0)
            {
                t[i] = N%3;
                N /=3;
                i++;
            }
            for(int j = i - 1; j >= 0; j--)
                cout << t[j];
        }
        cout << endl;
    }
    return 0;
}
