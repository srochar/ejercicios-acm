#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    string input;
    while(getline(cin,input))
    {
        istringstream is(input);
        is >> input;
        reverse(input.begin(),input.end());
        cout << input;
        while(is >> input)
        {
            reverse(input.begin(),input.end());
            cout << " "<<input;
        }
        cout << endl;
    }
}

