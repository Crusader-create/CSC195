#include "Database.h"
#include <fstream>
#include <iostream>
using namespace std;


void GameDatabase::Add(Entity::Type type) {
    Entity* entity = Create(type);
    cin >> *entity;
    m_entities.push_back(unique_ptr<Entity>(entity));
}

Entity* GameDatabase::Create(Entity::Type type) {
    switch (type) {
    case Entity::Type::Player: return new Player();
    case Entity::Type::Monster: return new Monster();
    default: return nullptr;
    }
}

void GameDatabase::Load(const string& filename) {
    ifstream input(filename);
    if (input.is_open()) {
        m_entities.clear();
        while (!input.eof()) {
            int type;
            input >> type;
            if (input.eof()) break;

            Entity* entity = Create(static_cast<Entity::Type>(type));
            input >> *entity;
            m_entities.push_back(unique_ptr<Entity>(entity));
        }
    }
}

void GameDatabase::Save(const string& filename) {
    ofstream output(filename);
    if (output.is_open()) {
        for (const auto& entity : m_entities) {
            output << static_cast<int>(entity->GetType()) << '\n';
            output << *entity;
        }
    }
}

void GameDatabase::DisplayAll() const {
    for (const auto& entity : m_entities) {
        cout << *entity << "\n";
    }
}


