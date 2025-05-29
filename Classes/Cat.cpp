#pragma once
#include "Animal.cpp"

class Cat : public Animal {
private:
    int lives;

public:
    void Read(std::ostream& ostream, std::istream& istream) override {
        Animal::Read(ostream, istream);
        ostream << "Enter number of lives: ";
        istream >> lives;
    }

    void Write(std::ostream& ostream) override {
        Animal::Write(ostream);
        ostream << "Lives: " << lives << std::endl;
    }

    eType GetType() override { return eType::CAT; }
};