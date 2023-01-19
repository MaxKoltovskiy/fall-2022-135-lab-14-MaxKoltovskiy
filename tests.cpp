#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "MyVector.h"

TEST_CASE("Size and Capacity"){
    MyVector<int> i;
    CHECK(i.size() == 0);
    CHECK(i.capacity() == 10);
    CHECK(i.empty() == true);
}