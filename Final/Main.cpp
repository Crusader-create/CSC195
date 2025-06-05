#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#include <iostream>
#include "Database.h"

int main() {
    GameDatabase* db = new GameDatabase;
    int choice = 0;

    while (choice != 7) {
        std::cout << "1) Add\n2) Display All\n3) Load\n4) Save\n5) Quit\n";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            int type;
            std::cout << "0 = Player, 1 = Monster: ";
            std::cin >> type;
            db->Add(static_cast<Entity::Type>(type));
            break;
        }
        case 2: db->DisplayAll(); break;
        case 3: {
            std::string file;
            std::cout << "Enter filename: ";
            std::cin >> file;
            db->Load(file);
            break;
        }
        case 4: {
            std::string file;
            std::cout << "Enter filename: ";
            std::cin >> file;
            db->Save(file);
            break;
        }
        }
    }

    delete db;
    _CrtDumpMemoryLeaks();
    return 0;
}
