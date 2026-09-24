#include <iostream>
#include <vector>
#include "sorting_lib.h"

void printArray(const std::vector<int>& arr) {
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << "\n";
}

int main() {
    // Èñõîäíûé ìàññèâ
    std::vector<int> original = {64, 34, 25, 12, 22, 11, 90, 5};

    std::cout << "======================================\n";
    std::cout << "ÈÑÕÎÄÍÛÉ ÌÀÑÑÈÂ ÄËß ÂÑÅÕ ÒÅÑÒÎÂ:\n";
    printArray(original);
    std::cout << "======================================\n\n";

    // 1. Bubble Sort (Ïóçûðüêîâàÿ)
    std::vector<int> arr1 = original;
    SortLib::bubbleSort(arr1);
    std::cout << "1. Bubble Sort:    ";
    printArray(arr1);

    // 2. Selection Sort (Âûáîðîì)
    std::vector<int> arr2 = original;
    SortLib::selectionSort(arr2);
    std::cout << "2. Selection Sort: ";
    printArray(arr2);

    // 3. Insertion Sort (Âñòàâêàìè)
    std::vector<int> arr3 = original;
    SortLib::insertionSort(arr3);
    std::cout << "3. Insertion Sort: ";
    printArray(arr3);

    // 4. Shell Sort (Øåëëà)
    std::vector<int> arr4 = original;
    SortLib::shellSort(arr4);
    std::cout << "4. Shell Sort:     ";
    printArray(arr4);

    // 5. Merge Sort (Ñëèÿíèåì)
    std::vector<int> arr5 = original;
    SortLib::mergeSort(arr5);
    std::cout << "5. Merge Sort:     ";
    printArray(arr5);

    // 6. Quick Sort (Áûñòðàÿ)
    std::vector<int> arr6 = original;
    SortLib::quickSort(arr6);
    std::cout << "6. Quick Sort:     ";
    printArray(arr6);

    std::cout << "\n======================================\n";

    return 0;
}
