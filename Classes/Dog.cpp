#pragma once
#include "Classes.cpp"

class Dog : public Animal {
private:
    std::string breed;

public:
    void Read(std::ostream& ostream, std::istream& istream) override {
        Animal::Read(ostream, istream);
        ostream << "Enter breed: ";
        istream >> breed;
    }

    void Write(std::ostream& ostream) override {
        Animal::Write(ostream);
        ostream << "Breed: " << breed << std::endl;
    }

    eType GetType() override { return eType::DOG; }
};