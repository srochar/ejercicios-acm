#include <iostream>

using namespace std;

bool verif(int x, int y, int z)
{
    //cout << x << " " << max(y,z) << " " << min(z,y) << endl;
    if(x < (y+z) && x > (max(y,z)-min(y,z))  )
        return true;
    return false;
}

int main()
{
    int N,x,y,z;
    cin >> N;
    for(int i = 0 ; i < N ; i++)
    {
        cin >> x >> y >> z ;
        if(verif(x,y,z) && verif(y,x,z) && verif(z,y,x) )
            cout << "OK" <<endl;
        else
            cout << "Wrong!!"<<endl;
    }
}
