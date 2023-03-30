#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "operaciones.hpp"

// Test para la función suma
TEST_CASE("suma") {
    REQUIRE(suma(2, 3) == 5);
    REQUIRE(suma(-2, 3) == 1);
    REQUIRE(suma(0, 0) == 0);
    REQUIRE(suma(100, -100) == 0);
}
/*TEST_CASE("Resta") {
    int a = 5;
    int b = 3;
    int resultado = a - b;

    CHECK(resultado == 2);*/

