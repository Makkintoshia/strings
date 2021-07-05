#include <iostream>
#include <fstream>
#include <string>
#include <stack>

using namespace std;
int main()
{
   ifstream ifs("D:\\textin.txt");
    if (ifs.is_open())
    {
        string str;
        string sdel(".!?");
        stack<string> stak;
        for (char c; ifs.get(c); )
        {
            str=str + c;
            if (sdel.find(c) != string::npos)
            {
                stak.push(str);
                str.clear();
            }
        }
        for (; !stak.empty(); stak.pop())
        {
            cout << stak.top() << '\n';
        }
    }
    else
        cout << "Unable to open input file\n";
    return 0;
}