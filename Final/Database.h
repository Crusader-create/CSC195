#pragma once
#include <vector>
#include <memory>
#include <string>
#include "Entity.h"
#include "Player.h"
#include "Monster.h"
using namespace std;

class GameDatabase {
public:
    void Add(Entity::Type type);
    void Load(const string& filename);
    void Save(const string& filename);
    void DisplayAll() const;

private:
    Entity* Create(Entity::Type type);
    vector<unique_ptr<Entity>> m_entities;
};

