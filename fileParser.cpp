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
//    // ���������, ����������� �� ����
//    if (!file.is_open())
//    {
//        cerr << "������ �������� �����: " << filename << endl;
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
//            // ������� ����� ����������
//            word.erase(remove_if(line.begin(), line.end(), [](char c) {return ispunct(c) || isdigit(c) || c == '�' || c == '�';}), line.end());
//
//            // �������� ����� � ������� ��������
//            for (char& c : line)
//            {
//                c = tolower(c);
//            }
//            // ���� ����� �� ������, ��������� ��� � ������
//            if (!line.empty())
//            {
//                words.push_back(line);
//            }
//        }
//    }
//
//    file.close(); // ��������� ����
//    return words;
//}

vector<string> parseTextFile(const string& filename)
{
    vector<string> words;
    ifstream file(filename);

    // ���������, ����������� �� ����
    if (!file.is_open()) {
        cerr << "������ �������� �����: " << filename << endl;
        return words;
    }

    string line;

    while (getline(file, line))
    {
        stringstream ss(line);
        string word;

        while (ss >> word) {

            // ������� ����� ����������
            word.erase(remove_if(word.begin(), word.end(), [](char c) {return ispunct(c) || isdigit(c) || c == '�' || c == '�';}), word.end());

            // �������� ����� � ������� ��������
            for (char& c : word) {
                c = tolower(c);
            }

            // ���� ����� �� ������, ��������� ��� � ������
            if (!word.empty()) {
                words.push_back(word);
            }
        }
    }

    file.close(); // ��������� ����
    return words;
}