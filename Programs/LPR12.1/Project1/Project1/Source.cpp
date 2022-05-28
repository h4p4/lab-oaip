#include <iostream>
#include <string>

using namespace std;

string spaceDelete(string line)
{
    bool HasSpace = false;
    string res;
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == ' ' && HasSpace == true)
        {
            continue;
        }
        if (line[i] == ' ' && HasSpace == false)
        {
            res += line[i];
            HasSpace = true;
        }
        else
        {
            res += line[i];
            HasSpace = false;
        }
    }
    return res;
}
int main()
{
    string line;
    cout << "Enter line:" << endl;
    getline(cin, line);
    cout << "New line:\n" << spaceDelete(line);
    //cout << "count of symbols" << spaceDelete(line).length();
    return 0;
}