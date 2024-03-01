#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    //Pair

    vector<pair<string, pair<string, int>>> vp;

    // p.push_back(make_pair("omar", 12));

    // vp.push_back({"omar", {"1234", 2134}}); // wrong
    vp.push_back(make_pair("omar", make_pair("2342e4", 10000)));
    vp.push_back({"mohammed", {"2342e5", 20000}});

    for(auto it = vp.begin(); it != vp.end(); it++)
    {
        std::cout << it->first << " [ " << it->second.first << " : " << it->second.second << " ]" << std::endl;
    }

    // cout << p.first << " " << p.second.first << " " << p.second.second << std::endl;

    return 0;
}