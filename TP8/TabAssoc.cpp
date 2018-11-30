#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <iostream>
#include <fstream>
#include <iterator>
#include <string>

using namespace std;

const string &first(const pair<string, string> &p)
{
    return p.first;
}

int main(int, char **)
{

    typedef std::map<string, string> mss;
    // OU en C++ 2011
    // using mss = std::map<string, string> ;
    mss m;

    m.insert(pair<string, string>("loic", "405042"));
    m.insert(make_pair("pierre", "405033"));
    m.insert(make_pair("SOS C++ 24/7", "407662"));
    m["secours"] = "42"; // equivalent

    mss::reverse_iterator ite;
    ite = m.rbegin();
    cout << ite->second;

    /* "Petit programme" */

    map<string, string> liste;
    ifstream fichier;
    string prenom;
    string tel;
    fichier.open("annuaire.txt");

    if (!fichier.fail())
    {
        cout << "ERREUR" << endl;
        while (!fichier.eof())
        {
            fichier >> prenom;
            fichier >> tel;
            liste[prenom] = tel;
        }

        fichier.close();

        map<string, string>::const_iterator it = liste.begin();
        while (it != liste.end())
        {
            cout << it->first << " "
                 << it->second << endl;
            ++it;
        }

        transform(liste.begin(), liste.end(),
                  ostream_iterator<string>(cout, " "), first);
    }
}