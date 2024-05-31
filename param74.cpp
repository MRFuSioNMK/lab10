#include <iostream>

using namespace std;

// Припустимий тип TTime
typedef struct {
    int hour;
    int minute;
} TTime;

// Функція для зменшення часу на -1 хвилину
void PrevMin(TTime &time) {
    if (time.minute == 0) {
        // Якщо хвилини рівні 0, зменшуємо години на 1
        if (time.hour == 0) {
            // Якщо години рівні 0, не вносимо змін
            return;
        } else {
            time.hour--; // Зменшуємо години на 1
            time.minute = 59; // Встановлюємо хвилини на 59
        }
    } else {
        time.minute--; // Зменшуємо хвилини на 1
    }
}

// Функція для виводу часу
void printTime(const TTime &time) {
    cout << "Time: " << time.hour << ":" << time.minute << endl;
}

int main() {
    // Приклади п'яти заданих моментів часу
    TTime times[] = {
        {12, 30},
        {9, 0},
        {23, 59},
        {0, 0},
        {8, 45}
    };

    // Застосовуємо процедуру PrevMin до кожного заданого моменту часу
    for (int i = 0; i < 5; ++i) {
        cout << "Original ";
        printTime(times[i]);
        PrevMin(times[i]);
        cout << "After PrevMin ";
        printTime(times[i]);
        cout << endl;
    }

    return 0;
}
