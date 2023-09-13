#include <iostream>
using namespace std;


int getHash(string str) {
    int sum = 0;
    int num = 0;
    char numbers1[] = { '0','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
    char numbers2[] = { '0','a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

    for (int k = 0; k < str.size(); k++) {
        for (int m = 0; m < sizeof(numbers1); m++) {
            if (str[k] == numbers1[m]) {
                sum += m;
                num++;
            }
        }
        for (int t = 0; t < sizeof(numbers2); t++) {
            if (str[k] == numbers2[t]) {
                sum += t;
                num++;
            }
        }

    }

    return sum;
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

