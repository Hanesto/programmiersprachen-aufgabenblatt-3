#include <cstdlib> // std::rand()
#include <vector> // std::vector<>
#include <list> // std::list<>
#include <iostream> // std::cout
#include <iterator> // std::ostream_iterator<>
#include <algorithm> // std::reverse, std::generate

int main ()
{
    //integer vector mit 10 Elementen
    std::vector<int> v_0(10);

    //Weise dem Vector Zufallszahlen zu
    for(auto& v : v_0){
        //v = zufälliger Integer
        v = std::rand();
    }

    //Der Vector wird ausgegeben
    std::copy(std::cbegin(v_0), std::cend(v_0),
    std::ostream_iterator<int>(std::cout, "\n"));

    //Der Inhalt von v_0 wird in zwei <integer> Listen übertragen
    std::list<int> l_0(std::cbegin(v_0), std::cend(v_0));
    std::list<int> l_1(std::cbegin(l_0), std::cend(l_0));

    //Die Elemente der zweiten Liste werden umgedreht 
    std::reverse(std::begin(l_1), std::end(l_1));

    //Die zweite Liste wird ausgegeben
    std::copy(std::cbegin(l_1), std::cend (l_1) ,
    std::ostream_iterator<int>(std::cout, "\n"));

    //Die zweite Liste wird sortiert 
    l_1.sort();

    //Die zweite Liste wird erneut ausgegeben
    std::copy(l_1.cbegin(), l_1.cend(),
    std::ostream_iterator<int>(std::cout, "\n"));

    //Der ersten Liste werden zufällige Zahlen zugewiesen
    std::generate(std::begin(v_0), std::end(v_0), std::rand);

    //Die erste Liste wird ausgegeben
    std::copy(v_0.crbegin(), v_0.crend(),
    std::ostream_iterator<int>(std::cout, "\n"));
    return 0;
}