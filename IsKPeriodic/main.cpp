#include<iostream>
#include<string>
using namespace std;

bool IsKPeriodic(string row)
{
    int k;
    cout << "������� �: ";
    cin >> k;
    for (int i = 0; i < row.length() - k; i++)
    {
        if (row[i] != row[i + k])
        {
            cout << "������ �� ������ ��������� �����" << endl;
            return false;
        }        
    }
    cout << "������ ������ �" << endl;
    return true;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    string row = "abcdeabcdeabcdeabcde";
    IsKPeriodic(row);
    return 0;
}