#include "Monster.h"
#include <limits>
using namespace std;


Monster::Monster(string type, int hp) : m_species(type), m_hp(hp) {}

void Monster::Read(istream& is) {
    cout << "Enter species: ";
    is >> m_species;
    cout << "Enter HP: ";
    is >> m_hp;
    is.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "Enter Notes: ";
    getline(is, m_notes);
}

void Monster::Write(ostream& os) const {
    os << "Monster\n" << "Species: " << m_species << "\nHP: " << m_hp << "\n" << "Notes: " << m_notes << "\n";
}

void Monster::Read(ifstream& is) {
    getline(is, m_species);
    is >> m_hp;
    is.ignore(numeric_limits<streamsize>::max(), '\n'); 
    getline(is, m_notes);
}

void Monster::Write(ofstream& os) const {
    os << m_species << '\n' << m_hp << '\n';
}
