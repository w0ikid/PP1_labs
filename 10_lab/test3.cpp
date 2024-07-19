#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool check(int a) {
    int b = sqrt(a);
    return (b * b == a);
}

string squack(string s) {
    string result = s;  // Создаем новую строку для сохранения изменений

    for (int i = 0; i < result.length(); i++) {
        for (int j = 0; j < result.length(); j++) {
            if (i + 1 == j) {
                string num = result.substr(i, 2);  // Используем substr для получения подстроки

                int live_number;
                try {
                    live_number = stoi(num);  // Добавляем try-catch для обработки ошибок
                } catch (const invalid_argument& e) {
                    continue;  // Пропускаем некорректные числа
                }

                if (check(live_number)) {
                    result.erase(i, 2);
                    return squack(result);  // Рекурсивный вызов
                }
            }
        }
    }

    return result;  // Возвращаем результат, если не найдено подходящее число
}

int main() {
    string s;
    cin >> s;

    cout << squack(s);

    return 0;
}
