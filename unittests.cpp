#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "generator.h"

TEST_CASE("Unit Tests") {
    CHECK(run(1565, 50) == 3);
    CHECK(run(2981, 50) == 2);
    CHECK(run(3712, 50) == 2);
    CHECK(run(4561, 50) == 3);
    CHECK(run(10000, 5550) == 136);
    CHECK(run(10000, 7100) == 173);
    CHECK(run(10000, 9200) == 228);
    CHECK(run(10000, 3300) == 84);
    CHECK(run(10000, 4400) == 115);
    CHECK(run(10000, 5500) == 152);

  };
