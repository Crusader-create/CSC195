#include "Player.h"
using namespace std;

Player::Player(std::string name, int hp) : m_name(name), m_hp(hp) {}

void Player::Read(istream& is) {
    cout << "Enter name: ";
    is >> m_name;
    cout << "Enter HP: ";
    is >> m_hp;
}

void Player::Write(ostream& os) const {
    os << "Player\n" << "Name: " << m_name << "\nHP: " << m_hp << "\n";
}

void Player::Read(ifstream& is) {
    is >> m_name >> m_hp;
}

void Player::Write(ofstream& os) const {
    os << m_name << '\n' << m_hp << '\n';
}
