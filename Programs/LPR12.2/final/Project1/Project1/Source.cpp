#include <iostream>
#include <string>

using namespace std;

string isNumber(string line)
{
    string buff;
    for (int i = 0; i < line.length(); i++)
    {
        if (buff.size() != 0 && line[i] == '.' && isdigit(line[i+1]) && isdigit(buff.back()))
        {
            buff += line[i];
        }
        if (!isdigit(line[i]))
        {
            if (buff.size() != 0 && buff.back() != '\n' && buff.back() != '.')
            {
                buff += "\n";
            }
            continue;
        }
        buff += line[i];
    }
    return buff + "\n";
}

string isInt(string buff)
{
    string res, buff2;
    bool hasDot = false;
    int i = 0, j;
    while (buff[i] != '\0')
    {
        if (buff[i] != '\n') // ���� i-� �������� �� ����� �������� ������
        {
            buff2 += buff[i]; // � ����2 ���������� ���
        }
        else // � ��������� ������ 
        {
            for (int j = 0; j < buff2.length(); j++) // ���������� �������� ���������
            {
                hasDot = false;
                if (buff2[j] == '.') // ��������� ���� �� � ��������� ����2 �����, �.�. �� ���� ������� ��� � ��� ������ ���� ��� ������ 
                {                    // �� ������� �������� ���������
                    hasDot = true; // ���� �������
                    break; // �� ������� �� ����
                }
            }
            if (hasDot == false) // ����� ��������� ���� ��� �����
            {
                res += buff2 + "\n";
            } 
                buff2 = "";
        }
        i++;
    }
    return res;
}

int main()
{
    string line;
    cout << "Enter line:" << endl;
    getline(cin, line);
    string res;
    cout << "New line:\n" << isInt(isNumber(line));
    //cout << "New line:\n" << isNumber(line);
    system("pause");
    return 0;
}