#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for(int i = 0 ; i < N ; i++)
    {
        string in;
        int in_p;
        string url[10];
        int visit[10];
        int max_ = -1;
        for(int j = 0 ; j< 10; j++)
        {
            cin >> in >> in_p;
            url[j] = in;
            visit[j] = in_p;
            if(max_ < in_p)
                max_ = in_p;
        }
        cout << "Case #" << i+1 << ":"<<endl;
        for(int j = 0 ; j<10;j++)
        {
            if(visit[j] == max_)
                cout << url[j] << endl;
        }
    }
}
