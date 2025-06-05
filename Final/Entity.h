#pragma once
#include <iostream>
#include <fstream>
#include <string>

class Entity {
public:
    enum class Type { Player = 0, Monster = 1 };

    virtual ~Entity() = default;

    virtual void Read(std::istream& is) = 0;
    virtual void Write(std::ostream& os) const = 0;
    virtual void Read(std::ifstream& is) = 0;
    virtual void Write(std::ofstream& os) const = 0;

    virtual int GetHP() const = 0;
    virtual Type GetType() const = 0;

    friend std::istream& operator>>(std::istream& is, Entity& e);
    friend std::ostream& operator<<(std::ostream& os, const Entity& e);
    friend std::ifstream& operator>>(std::ifstream& is, Entity& e);
    friend std::ofstream& operator<<(std::ofstream& os, const Entity& e);
};
