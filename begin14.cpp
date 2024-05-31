#include <iostream>

using namespace std;

int main() {
    // Задана довжина кола
    double L;
    cout << "Введіть довжину кола: ";
    cin >> L;

    // Значення π
    const double pi = 3.14;

    // Знаходимо радіус круга
    double R = L / (2 * pi);

    // Знаходимо площу круга
    double S = pi * R * R;

    // Виводимо результат
    cout << "Радіус кола: " << R << endl;
    cout << "Площа круга: " << S << endl;

    return 0;
}
