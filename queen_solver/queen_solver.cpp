#include "clang-wasm/nanolibc/libc.h"
#include "clang-wasm/nanolibc/libc_extra.h"

#define WASM_EXPORT __attribute__((visibility("default"))) extern "C"

WASM_EXPORT char *allocateMemoryForString(int size) {
    return new char[size];
}

WASM_EXPORT void freeMemoryForString(char *str) {
    delete[] str;
}

WASM_EXPORT double calculate(const char *expression) {
    return 5;
}
