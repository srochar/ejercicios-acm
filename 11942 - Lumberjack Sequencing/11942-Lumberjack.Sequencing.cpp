#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N,L,orde,i,j;
    int lena[10];
    cin >> N;
    cout << "Lumberjacks:" << endl;
    for( i = 0 ; i < N; i++)
    {
        for( j = 0 ; j < 10 ; j++)
        {
            cin >>L;
            lena[j] = L;
        }
        orde = lena[1] - lena[0];
        for( j = 2 ; j < 10 ; j++)
            if( (lena[j] -lena[j-1])*orde<0 )
                break;
        if(j == 10 )
            cout << "Ordered" << endl;
        else
            cout << "Unordered" << endl;
    }
}
