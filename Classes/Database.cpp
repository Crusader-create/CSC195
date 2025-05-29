#pragma once
#include <vector>
#include "Classes.cpp"
#include "Cat.cpp"
#include "Dog.cpp"

class Database {
private:
    std::vector<Animal*> objects;

public:
    ~Database() {
        for (Animal* obj : objects) {
            delete obj;
        }
    }

    void Create(Animal::eType type) {
        Animal* obj = nullptr;
        switch (type) {
        case Animal::eType::CAT:
            obj = new Cat;
            break;
        case Animal::eType::DOG:
            obj = new Dog;
            break;
        }
        if (obj) {
            obj->Read(std::cout, std::cin);
            objects.push_back(obj);
        }
    }

    void DisplayAll() {
        for (Animal* obj : objects) {
            obj->Write(std::cout);
            std::cout << std::endl;
        }
    }

    void Display(const std::string& name) {
        for (Animal* obj : objects) {
            if (obj->GetName() == name) {
                obj->Write(std::cout);
                std::cout << std::endl;
            }
        }
    }

    void Display(Animal::eType type) {
        for (Animal* obj : objects) {
            if (obj->GetType() == type) {
                obj->Write(std::cout);
                std::cout << std::endl;
            }
        }
    }
};