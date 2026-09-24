#ifndef SORTING_LIB_H
#define SORTING_LIB_H

#include <vector>

// Макрос для правильного экспорта/импорта функций DLL под Windows
#ifdef _WIN32
    #define SORT_API __declspec(dllexport)
#else
    #define SORT_API
#endif

namespace SortLib {
    SORT_API void bubbleSort(std::vector<int>& arr);
    SORT_API void selectionSort(std::vector<int>& arr);
    SORT_API void insertionSort(std::vector<int>& arr);
    SORT_API void shellSort(std::vector<int>& arr);

    // Для рекурсивных сортировок делаем удобные функции-обертки
    SORT_API void mergeSort(std::vector<int>& arr);
    SORT_API void quickSort(std::vector<int>& arr);
}

#endif // SORTING_LIB_H
