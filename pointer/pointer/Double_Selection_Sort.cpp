#include <iostream>
#include "doubleSelectionSort.h"
using namespace std;

int main()
{
    const int size = 100;
    int arr[size];

    // 임의의 정수로 배열을 초기화합니다.
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 1000; // 0부터 999까지의 임의의 정수 생성
    }

    // 정렬 전 배열 출력
    std::cout << "정렬 전 배열: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Double Selection Sort 수행
    doubleSelectionSort(arr, size);

    // 정렬 후 배열 출력
    std::cout << "정렬 후 배열: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}