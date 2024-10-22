#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cctype>
#include <string>

using namespace std;

//vector<string> parseTextFile(const string& filename)
//{
//    vector<string> words;
//    ifstream file(filename);
//
//    // Проверяем, открывается ли файл
//    if (!file.is_open())
//    {
//        cerr << "Ошибка открытия файла: " << filename << endl;
//        return words;
//    }
//
//    string line;
//    while (getline(file, line))
//    {
//        stringstream ss(line);
//        string word;
//        while (ss >> word)
//        {
//            // Удаляем знаки препинания
//            word.erase(remove_if(line.begin(), line.end(), [](char c) {return ispunct(c) || isdigit(c) || c == '«' || c == '»';}), line.end());
//
//            // Приводим слово к нижнему регистру
//            for (char& c : line)
//            {
//                c = tolower(c);
//            }
//            // Если слово не пустое, добавляем его в вектор
//            if (!line.empty())
//            {
//                words.push_back(line);
//            }
//        }
//    }
//
//    file.close(); // Закрываем файл
//    return words;
//}

vector<string> parseTextFile(const string& filename)
{
    vector<string> words;
    ifstream file(filename);

    // Проверяем, открывается ли файл
    if (!file.is_open()) {
        cerr << "Ошибка открытия файла: " << filename << endl;
        return words;
    }

    string line;

    while (getline(file, line))
    {
        stringstream ss(line);
        string word;

        while (ss >> word) {

            // Удаляем знаки препинания
            word.erase(remove_if(word.begin(), word.end(), [](char c) {return ispunct(c) || isdigit(c) || c == '«' || c == '»';}), word.end());

            // Приводим слово к нижнему регистру
            for (char& c : word) {
                c = tolower(c);
            }

            // Если слово не пустое, добавляем его в вектор
            if (!word.empty()) {
                words.push_back(word);
            }
        }
    }

    file.close(); // Закрываем файл
    return words;
}