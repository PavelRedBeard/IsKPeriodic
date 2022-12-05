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
        if (row[i] != row[i + k] || row[0] != row[row.length()-k])
        {
            cout << "������ �� ������ K" << endl;
            return false;
        }        
    }
    cout << "������ ������ �" << endl;
    return true;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    string row = "rideriderideriderideriderideride";
    IsKPeriodic(row);
    return 0;
}