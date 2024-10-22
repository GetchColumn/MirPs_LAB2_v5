#include <iostream>
#include <string>

using namespace std;

bool kDiffer(const string& str, const string& substr, int k)
{
    // Проверка строку на одинаковую длину
    if (str.length() != substr.length())
    {
        return false;
    }

    int diffCount = 0;
    for (size_t i = 0; i < str.length(); ++i)
    {
        if (str[i] != substr[i])
        {
            diffCount++;
            if (diffCount > k)
            {
                return false; // Превышено расстояние Левенштейна
            }
        }
    }
    return diffCount <= k;
}