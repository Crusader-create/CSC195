#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Entity {
public:
    enum class Type { Player = 0, Monster = 1 };

    virtual ~Entity() = default;

    virtual void Read(istream& is) = 0;
    virtual void Write(ostream& os) const = 0;
    virtual void Read(ifstream& is) = 0;
    virtual void Write(ofstream& os) const = 0;

    virtual int GetHP() const = 0;
    virtual Type GetType() const = 0;

    friend istream& operator>>(istream& is, Entity& e);
    friend ostream& operator<<(ostream& os, const Entity& e);
    friend ifstream& operator>>(ifstream& is, Entity& e);
    friend ofstream& operator<<(ofstream& os, const Entity& e);
};
