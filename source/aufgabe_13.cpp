#define CATCH_CONFIG_RUNNER
#include <catch2/catch.hpp>
#include <algorithm>

template<typename T>
T const& filter(std::vector<T> container,bool prdikat) 
{
    auto container2 = container;
    std::transform(container.begin(), container.end(), container2.begin(), prdikat);
    return container2;
};

bool is_even ( int n ) { return n % 2 == 0; }

TEST_CASE("Filter template")
{
std::vector<int> v {1, 2, 3, 4, 5, 6};
std::vector<int> all_even = filter(v, is_even);

REQUIRE(std::all_of(all_even.begin(), all_even.end(), is_even));

}

int main(int argc, char * argv [])
{
return Catch::Session().run(argc, argv);
}