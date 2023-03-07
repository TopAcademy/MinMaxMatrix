/*
 * Задача "Максимум и минимум в матрице"
 * -------------------------------------
 * Поиск элементов с максимальным и минимальным значениями
 * в двумерном массиве размером 5х5 (квадратная матрица).
 */

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    const short N = 5;
    int mas[N][N];
    int i, j;
    // заполнение массива случайными значениями [0...1000]
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            mas[i][j] = std::rand() % 1000;
        }
    }
    // вывод массива на экран
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cout << mas[i][j] << '\t';
        }
        cout << endl;
    }
    // поиск минимума и максимума
    int min_val = mas[0][0];            // хранилище минимального значения
    int max_val = mas[0][0];            // хранилище максимального значения
    int min_idx_r=0, min_idx_c=0;       // хранилища индекса минимального эл-та
    int max_idx_r=0, max_idx_c=0;       // хранилища индекса максимального эл-та
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            // если нашелся меньший
            if (mas[i][j] < min_val) {
                min_val = mas[i][j];
                min_idx_r = i;
                min_idx_c = j;
            }
            // если нашелся больший
            if (mas[i][j] > max_val) {
                max_val = mas[i][j];
                max_idx_r = i;
                max_idx_c = j;
            }
        }
    }
    // вывод результатов
    cout << "\nMinumum value is " << min_val << " at index [" << min_idx_r << "][" << min_idx_c << "]\n";
    cout << "Maximum value is " << max_val << " at index [" << max_idx_r << "][" << max_idx_c << "]\n";
}
