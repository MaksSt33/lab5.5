#include <iostream>
#include <algorithm> // ��� ������������ std::max �� std::min

using namespace std;

// �������� ���� ��� ���������� ������� ������
int maxDepth = 0;

// ������� ��� ���������� ���� ���� �����
int sum(int n, int level = 1) {
    maxDepth = max(maxDepth, level); // ��������� ����������� �������
    cout << "level (sum) = " << level << endl; // �������� ����� ������

    if (n == 0)
        return 0;
    else
        return n % 10 + sum(n / 10, level + 1); // �������� �����
}

// ������� ��� ���������� ������� ���� �����
int countDigits(int n, int level = 1) {
    maxDepth = max(maxDepth, level); // ��������� ����������� �������
    cout << "level (countDigits) = " << level << endl; // �������� ����� ������

    if (n == 0)
        return 0;
    else
        return 1 + countDigits(n / 10, level + 1); // �������� �����
}

// ������� ��� ����������� ����������� ����� �����
int maxDigit(int n, int level = 1) {
    maxDepth = max(maxDepth, level); // ��������� ����������� �������
    cout << "level (maxDigit) = " << level << endl; // �������� ����� ������

    if (n == 0)
        return 0;
    else
        return max(n % 10, maxDigit(n / 10, level + 1)); // �������� �����
}

// ������� ��� ����������� �������� ����� �����
int minDigit(int n, int level = 1) {
    maxDepth = max(maxDepth, level); // ��������� ����������� �������
    cout << "level (minDigit) = " << level << endl; // �������� ����� ������

    if (n / 10 == 0)  // ������� �����
        return n;
    else
        return min(n % 10, minDigit(n / 10, level + 1)); // �������� �����
}

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    // ���� ����� ���������, �������� � ���� ���������� ���������
    n = abs(n);

    // ��������� ����������
    cout << "Sum: " << sum(n) << endl;
    cout << "Number of digits: " << countDigits(n) << endl;
    cout << "Max digit: " << maxDigit(n) << endl;
    cout << "Min digit: " << minDigit(n) << endl;
    cout << "Depth of recursion: " << maxDepth << endl; // �������� ����������� �������

    return 0;
}