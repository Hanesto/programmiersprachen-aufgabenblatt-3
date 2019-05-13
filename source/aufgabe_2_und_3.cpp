#include <list>
#include <set>
#include <iterator>
#include <iostream>
#include <cstdlib>
using namespace std;

std::list<unsigned int> liste;
std::set<int, greater <int>> randNumbers; 
set <int, greater <int> >::iterator itr; 

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
    
    return 0;
}