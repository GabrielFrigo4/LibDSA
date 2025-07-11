#ifndef LIBDSA_H
#define LIBDSA_H
#endif

#ifndef DLL_EXPORT
#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif
#endif

DLL_EXPORT void merge(int *ptr, size_t lcount, size_t rcount);
DLL_EXPORT void merge_sort(int *ptr, size_t count);

DLL_EXPORT size_t partition(int *ptr, size_t count);
DLL_EXPORT void quick_sort1(int *ptr, size_t count);
DLL_EXPORT void quick_sort2(int *ptr, size_t count);
