#include<iostream>
#include<string>
#include<fstream>
using namespace std;

bool IsKPeriodic(string& row, int& k)
{    
    for (size_t i = 0; i < row.length() - k; i++)
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
    fstream file;
    string row;
    file.open("row.txt");
    if (!file.is_open())
    {
        cout << "������ �������� �����" << endl;
        return 0;
    }
    getline(file, row);
    int k;
    cout << "������� �: ";
    cin >> k;
    if (k == 0 || k > row.length())
    {
        cout << "������������ �������� �" << endl;
        return 0;
    }
    IsKPeriodic(row, k);
    return 0;
}
