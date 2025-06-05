#pragma once
#pragma once
#include "Entity.h"
using namespace std;

class Monster : public Entity {
public:
    Monster() = default;
    Monster(string type, int hp);

    void Read(istream& is) override;
    void Write(ostream& os) const override;

    void Read(ifstream& is) override;
    void Write(ofstream& os) const override;

    int GetHP() const override { return m_hp; }
    Type GetType() const override { return Type::Monster; }

private:
    std::string m_species;
    int m_hp = 50;
};

