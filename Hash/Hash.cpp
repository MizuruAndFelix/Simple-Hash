#include <iostream>
using namespace std;


int getHash(string str) {
    int hash = 0;

    for (int i = 0; i < str.size(); i++)
    {
        hash += str[i];
    }

    return hash;
}

void simple_string_hash() {
    string str = "";

    while (str != "exit") {
        cout << "Введите строку: ";
        cin >> str;
        cout << "Наивный хэш строки " << str << " = " << getHash(str) << endl;
        
    } 

}
int main()
{
    setlocale(LC_ALL, ".UTF8");
    setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
    system("chcp 1251");

    simple_string_hash();
}

