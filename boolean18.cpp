#include <iostream>

using namespace std;

bool haveMatchingPair(int a, int b, int c) {
    return (a == b || a == c || b == c);
}

int main() {
    // Введення трьох цілих чисел
    int a, b, c;
    cout << "Введіть три цілих числа: ";
    cin >> a >> b >> c;

    // Перевірка на співпадіння
    bool hasMatching = haveMatchingPair(a, b, c);

    if (hasMatching) {
        cout << "Є хоча б одна пара співпадаючих чисел." << endl;
    } else {
        cout << "Немає жодної пари співпадаючих чисел." << endl;
    }

    return 0;
}
