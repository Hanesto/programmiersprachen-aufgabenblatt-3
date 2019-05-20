#define CATCH_CONFIG_RUNNER
#include <catch2/catch.hpp>
#include <cmath>
#include <algorithm>

const bool is_mult(int i)
{
    if((i % 3) == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

TEST_CASE("filter alle vielfache von drei", "[erase]")
{
std::vector<int> v_0;

for(int i = 1; i <= 100; i++)
{
    v_0.push_back((rand() % 100) + 1);
}

v_0.erase( std::remove(v_0.begin(), v_0.end(), is_mult)); 

REQUIRE(std::all_of(v_0.begin(), v_0.end(), is_mult));
}

int main(int argc, char * argv [])
{
return Catch::Session().run(argc, argv);
}