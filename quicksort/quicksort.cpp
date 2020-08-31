#include "quicksort.h"
#include <vector>

// https://en.wikipedia.org/wiki/Quicksort#Lomuto_partition_scheme


void quicksort_rec(std::vector<long> &A, unsigned long lo, unsigned long hi);

unsigned long partition(std::vector<long> &A, unsigned long lo, unsigned long hi);


void quicksort(std::vector<long> &A) {
    quicksort_rec(A, 0, A.size() - 1);
}

void quicksort_rec(std::vector<long> &A, unsigned long lo, unsigned long hi) {
    if (lo < hi) {
        auto p = partition(A, lo, hi);
        quicksort_rec(A, lo, p - 1);
        quicksort_rec(A, p + 1, hi);
    }
}

unsigned long partition(std::vector<long> &A, unsigned long lo, unsigned long hi) {
    auto pivot = A[hi];
    auto i = lo;
    for(auto j = lo; j < hi; ++j) {
        if (A[j] < pivot) {
            auto temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            ++i;
        }
    }
    auto temp = A[i];
    A[i] = A[hi];
    A[hi] = temp;
    return i;
}