#include "Monster.h"
using namespace std;

Monster::Monster(string type, int hp) : m_species(type), m_hp(hp) {}

void Monster::Read(istream& is) {
    cout << "Enter species: ";
    is >> m_species;
    cout << "Enter HP: ";
    is >> m_hp;
}

void Monster::Write(ostream& os) const {
    os << "Monster\n" << "Species: " << m_species << "\nHP: " << m_hp << "\n";
}

void Monster::Read(ifstream& is) {
    is >> m_species >> m_hp;
}

void Monster::Write(ofstream& os) const {
    os << m_species << '\n' << m_hp << '\n';
}
