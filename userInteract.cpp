#include <iostream>
#include <string>
using namespace std;

void getUserParams(string& substr, int& k)
{
    cout << "->������� ������ ��� ��������� ������ > ";
    cin >> substr;
    cout << "->������� ����� k > ";
    cin >> k;

    cout << "->���� �������� ��������" << endl;
}