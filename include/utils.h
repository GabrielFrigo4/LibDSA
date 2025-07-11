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

DLL_EXPORT void swap(int *a, int *b);
