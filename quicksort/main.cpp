#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "quicksort.h"
#include <vector>

TEST_CASE("quicksort") {
    std::vector<long> input = {7, 2, -3, 5, 3, -2, 8, 9, 1, -1, 4, 10, 6, 0};
    std::vector<long> output = {-3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    quicksort(input);
    CHECK(input == output);
}