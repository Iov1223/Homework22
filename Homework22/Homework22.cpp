#include <iostream>
using namespace std;

// Задача 2.
void power(int* pn, int num) {
    int count = 0, num1 = *pn;
    for (int i = 1; i < num; i++)
        num1 *= *pn;
    cout << "Результат возведения числа " << *pn << " в " << num << "-ую степень = " << num1 << endl;
}

int main() {
    setlocale(LC_ALL, "ru");

    // Задача 1.
    cout << "\tЗадача 1.\nИзначальный массив: ";
    int const size = 10;
    int z1[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    cout << "[";
    for (int i = 0; i < size; i++)
        cout << *(z1 + i) << ", ";
    cout << "\b\b]\n";
    int* pz1 = z1;
    for (int i = 1; i < size; i++) {
        if (*(pz1 + i) % 2 == 0)
            swap(*(pz1 + i), *(pz1 + i - 1));
    }
    cout << "Итоговый иассив: [";
    for (int i = 0; i < size; i++)
        cout << *(pz1 + i) << ", ";
    cout << "\b\b]\n\n";

    // Задача 2.
    cout << "\tЗадача 2.\nВведите число возводимое в степень: ";
    int n, m;
    cin >> n;
    cout << "Введите степень: ";
    cin >> m;
    int* pn = &n;
    power(pn, m);


    return 0;
}