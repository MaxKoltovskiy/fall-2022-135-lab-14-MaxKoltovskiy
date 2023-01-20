#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "MyVector.h"

TEST_CASE("Size and Capacity"){
    MyVector<std::string> s;
    CHECK(s.size() == 0);
    CHECK(s.capacity() == 10);
    CHECK(s.empty() == true);
}
TEST_CASE("Mutators"){
    MyVector<int> i;
    for(int n = 0; n <= 10; n++) {
        i.push_back(n);
    } 
    CHECK(i.capacity() == 20);
    CHECK(i.size() == 11);

    i.pop_back(2);
    CHECK(i.size() == 9);

    i.pop_back();
    CHECK(i.size() == 8);

    CHECK(i[8] == 0);
    CHECK(i[1] == 1);
    i.clear();
    CHECK(i.size() == 0);
}
TEST_CASE("Brackets operator"){
    MyVector<double> d;
    d[1] = 1.4;
    CHECK(d[1] == 1.4);
}