#include <iostream>

using namespace std;

int main()
{
    int N,M;
    cin >> N;
    for(int i = 0 ; i < N ; i++)
    {
        cin >> M;
        int dig[] = {0,0,0,0,0,0,0,0,0,0};
        for(int j = 1 ; j <= M ; j++)
        {
            int num = j;
            while(num != 0)
            {
                dig[num%10] +=1;
                num /= 10;
            }
        }
        for(int k = 0 ; k<9 ; k++)
            cout << dig[k] <<" ";
        cout << dig[9] <<endl;
    }
}
