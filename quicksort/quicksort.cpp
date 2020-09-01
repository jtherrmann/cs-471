#include "quicksort.h"
#include <vector>

// https://en.wikipedia.org/wiki/Quicksort#Lomuto_partition_scheme


void quicksort_rec(std::vector<long> &A, long lo, long hi);

long partition(std::vector<long> &A, long lo, long hi);


void quicksort(std::vector<long> &A) {
    quicksort_rec(A, 0, (long)A.size() - 1);
}

void quicksort_rec(std::vector<long> &A, long lo, long hi) {
    if (lo < hi) {
        auto p = partition(A, lo, hi);
        quicksort_rec(A, lo, p - 1);
        quicksort_rec(A, p + 1, hi);
    }
}

long partition(std::vector<long> &A, long lo, long hi) {
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