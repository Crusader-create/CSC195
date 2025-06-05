#pragma once
#include "Entity.h"
using namespace std;

class Player : public Entity {
public:
    Player() = default;
    Player(string name, int hp);

    void Read(istream& is) override;
    void Write(ostream& os) const override;

    void Read(ifstream& is) override;
    void Write(ofstream& os) const override;

    int GetHP() const override { return m_hp; }
    Type GetType() const override { return Type::Player; }

private:
    string m_name;
    int m_hp = 100;
};

