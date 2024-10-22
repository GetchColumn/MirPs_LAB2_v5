#include <iostream>
#include <string>
using namespace std;

void getUserParams(string& substr, int& k)
{
    cout << "->¬ведите строку дл€ нечЄткого поиска > ";
    cin >> substr;
    cout << "->¬ведите число k > ";
    cin >> k;

    cout << "->¬вод значений завершЄн" << endl;
}