#define CATCH_CONFIG_RUNNER
#include <catch2/catch.hpp>
#include <vector>
#include <algorithm>
#include "circle.hpp"

TEST_CASE("Kreise kopieren")
{
    std::vector<Circle> circles {{5}, {3}, {8}, {1}, {5}};
    std::vector<Circle> bigCircles;

    std::copy_if(circles.begin(), circles.end(), bigCircles.begin(), 
    [] (Circle c) ->bool{ return(c.getRadius() > 4);});

    REQUIRE(std::all_of(bigCircles.begin(), bigCircles.end(), 
    [] (Circle c) ->bool{ return(c.getRadius() > 4);}));

}

int main(int argc, char * argv [])
{
return Catch::Session().run(argc, argv);
}