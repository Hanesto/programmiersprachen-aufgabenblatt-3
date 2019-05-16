#include <list>
#include <set>
#include <map>
#include <vector>
#include <iterator>
#include <iostream>
#include <cstdlib>

std::list<unsigned int> liste;
std::set<int> randNumbers; 
std::set<int>::iterator itr; 

void insertRandoms()
{
     for(int i = 1; i <= 100; i++)
    {
        liste.push_back((rand() % 100) + 1);
    }

    for (int i = 1; i <= 100; i++)
    {
        auto it = std::next(liste.begin(), i);
        randNumbers.insert(*it);
    }
}

int main()
{
    insertRandoms();

    int zahlen = randNumbers.size();
    std::cout << "Es sind ";
    std::cout << zahlen;
    std::cout << " unterschiedliche Zahlen in der Liste" << std::endl;

    bool vorhanden;
    std::cout << "Nicht vorhanden sind: ";
    for (int i = 0; i <= 100; i++)
    {
        for (itr = randNumbers.begin(); itr != randNumbers.end(); ++itr) 
        { 
            if (i == *itr)
            {
                vorhanden = false;
                break;
            }
            else
            {
                vorhanden = true;   
            }               
        }

        if (vorhanden == true)
        {
            std::cout << i;
            std::cout << " ";
        } 
    }
    std::cout << " " << std::endl;
    
    std::map<int, int> haufigkeit;
    int nmbr;
    int temp;
    for (int i = 1; i <= 100; i++)
    {
       // nmbr = liste.count(i);
        haufigkeit.insert(std::pair<int, int>(temp, nmbr)); 
    }

    std::map<int, int>::iterator itr; 
    std::cout << "\nDas ist die Häufigkeitsverteilung: \n"; 
    std::cout << "\tZahl\tHäufigkeit\n"; 
    for (itr = haufigkeit.begin(); itr != haufigkeit.end(); ++itr) { 
        std::cout << '\t' << itr->first << '\t' << itr->second << '\n'; 
    } 
    std::cout << std::endl; 

    //Aufgabe 3.10
    std::vector<int> v_0(100); 
    std::copy(liste.begin(), liste.end(), v_0.begin());

    return 0;
}
