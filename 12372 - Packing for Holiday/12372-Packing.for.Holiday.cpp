#include <iostream>

using namespace std;

int main()
{
    int T;
    int L,W,H;
    cin >> T;
    for(int i = 0 ; i < T ; i++)
    {
        cin >> L >> W >> H;
        cout << "Case " << i+1 << ": ";
        if(L<= 20 && W <= 20 && H <= 20)
            cout <<"good" <<endl;
        else
            cout <<"bad" <<endl;
    }
}
