#define CATCH_CONFIG_RUNNER
#include <vector>
#include <catch2/catch.hpp>
#include <algorithm>

std::vector<int> v_1 {1, 2, 3, 4, 5, 6, 7, 8, 9};
std::vector<int> v_2 {9, 8, 7, 6, 5, 4, 3, 2, 1};
std::vector<int> v_3 (9);

std::vector<int>::iterator itr_1 = v_1.begin();
std::vector<int>::iterator itr_2 = v_2.begin();

int summierer(int i)
{
    i = *itr_1 + *itr_2;
    ++itr_1;
    ++itr_2;
    return i;
}

TEST_CASE("summiere zwei Vektoren auf")
{

std::transform(v_1.begin(), v_2.end(), v_3.begin(), summierer);

itr_1 = v_1.begin();
itr_2 = v_2.begin();
REQUIRE(std::all_of(v_3.begin(), v_3.end(), [] (int i) -> bool {return(i == 10);}));
}

int main(int argc, char * argv [])
{
return Catch::Session().run(argc, argv);
}