#include <iostream>
#include <string>
#include <map>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    {
        if(n == -1)
            break;
        string m;
        cin >> m;
        bool vis [255];
        bool in[255];
        for(int i = 0 ; i < 255 ; i++)
            vis[i] =  false;
        int total=0;
        for(int i = 0 ; i < m.size() ; i++)
        {
            if(vis[(int)m[i]-97] == false)
            {
                vis[(int)m[i]-97] = true;
                total += 1;
            } 
        }
        string p;
        cin >> p;
        int error = 7;
        int ac = 0;
        for(int i = 0 ; i < p.size() ; i++ )
        {
            if(error == 0)
                break;
            if(vis[p[i]-97] == true )
            {
                ac +=1;
                vis[p[i]-97] = false;
            }
            else
                error -= 1;
        }
        cout << "Round " << n << endl;
        if(ac == total)
            cout << "You win." << endl;
        else
            if(error <= 0)
                cout << "You lose." << endl;
            else
                cout << "You chickened out." <<endl;
        
    }
}
