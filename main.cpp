#include <iostream>
#include <Windows.h>

#include "userInteract.h"
#include "fileParser.h"
#include "Algo.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    string substring;
    int k;

    getUserParams(substring, k);
    vector<string> strings = parseTextFile("Text.txt");

    for (auto& str : strings)
    {
        if (kDiffer(str, substring, k))
        {
            cout << "Найдено совпадение: " << str << endl;
        }
    }

}
