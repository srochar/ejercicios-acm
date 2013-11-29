#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    long arreg[4],num;
    cin >> N;
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0; j < 4 ; j++)
        {
            cin>> num;
            arreg[j] = num;
        }
        sort(arreg,arreg+4);
        if(arreg[0] == arreg[1] && arreg[1] == arreg[2] && arreg[2] == arreg[3])
            cout << "square" << endl;
        else
        {
            if(arreg[0] == arreg[1] && arreg[2] == arreg[3])
                cout << "rectangle" << endl;
            else
            {
                if(arreg[0] + arreg[1] + arreg[2] > arreg[3])
                    cout << "quadrangle" << endl;
                else
                    cout << "banana" << endl;
            }
        }
    }

}
