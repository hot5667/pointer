#include <iostream>
#include "doubleSelectionSort.h"
using namespace std;

int main()
{
    const int size = 100;
    int arr[size];

    // ������ ������ �迭�� �ʱ�ȭ�մϴ�.
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 1000; // 0���� 999������ ������ ���� ����
    }

    // ���� �� �迭 ���
    std::cout << "���� �� �迭: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Double Selection Sort ����
    doubleSelectionSort(arr, size);

    // ���� �� �迭 ���
    std::cout << "���� �� �迭: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}