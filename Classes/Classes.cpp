#include <iostream>
#include <string>
#pragma once


class Animal {
public:
    enum class eType { CAT, DOG };

protected:
    std::string name;
    int age;

public:
    virtual ~Animal() {}

    virtual void Read(std::ostream& ostream, std::istream& istream) {
        ostream << "Enter name: ";
        istream >> name;
        ostream << "Enter age: ";
        istream >> age;
    }

    virtual void Write(std::ostream& ostream) {
        ostream << "Name: " << name << "\nAge: " << age << std::endl;
    }

    std::string GetName() const { return name; }
    virtual eType GetType() = 0;
};


