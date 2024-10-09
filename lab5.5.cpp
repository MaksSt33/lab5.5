#include <iostream>
#include <algorithm> // для використання std::max та std::min

using namespace std;

// Глобальні змінні для відстеження глибини рекурсії
int maxDepth = 0;

// Функція для обчислення суми цифр числа
int sum(int n, int level = 1) {
    maxDepth = max(maxDepth, level); // Оновлюємо максимальну глибину
    cout << "level (sum) = " << level << endl; // Виводимо рівень рекурсії

    if (n == 0)
        return 0;
    else
        return n % 10 + sum(n / 10, level + 1); // Передаємо рівень
}

// Функція для обчислення кількості цифр числа
int countDigits(int n, int level = 1) {
    maxDepth = max(maxDepth, level); // Оновлюємо максимальну глибину
    cout << "level (countDigits) = " << level << endl; // Виводимо рівень рекурсії

    if (n == 0)
        return 0;
    else
        return 1 + countDigits(n / 10, level + 1); // Передаємо рівень
}

// Функція для знаходження максимальної цифри числа
int maxDigit(int n, int level = 1) {
    maxDepth = max(maxDepth, level); // Оновлюємо максимальну глибину
    cout << "level (maxDigit) = " << level << endl; // Виводимо рівень рекурсії

    if (n == 0)
        return 0;
    else
        return max(n % 10, maxDigit(n / 10, level + 1)); // Передаємо рівень
}

// Функція для знаходження мінімальної цифри числа
int minDigit(int n, int level = 1) {
    maxDepth = max(maxDepth, level); // Оновлюємо максимальну глибину
    cout << "level (minDigit) = " << level << endl; // Виводимо рівень рекурсії

    if (n / 10 == 0)  // остання цифра
        return n;
    else
        return min(n % 10, minDigit(n / 10, level + 1)); // Передаємо рівень
}

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    // Якщо число негативне, працюємо з його абсолютним значенням
    n = abs(n);

    // Виведення результатів
    cout << "Sum: " << sum(n) << endl;
    cout << "Number of digits: " << countDigits(n) << endl;
    cout << "Max digit: " << maxDigit(n) << endl;
    cout << "Min digit: " << minDigit(n) << endl;
    cout << "Depth of recursion: " << maxDepth << endl; // Виводимо максимальну глибину

    return 0;
}