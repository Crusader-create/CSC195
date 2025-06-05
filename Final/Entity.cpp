#include "Entity.h"
using namespace std;

istream& operator>>(istream& is, Entity& e) {
    e.Read(is);
    return is;
}

ostream& operator<<(ostream& os, const Entity& e) {
    e.Write(os);
    return os;
}

ifstream& operator>>(ifstream& is, Entity& e) {
    e.Read(is);
    return is;
}

ofstream& operator<<(ofstream& os, const Entity& e) {
    e.Write(os);
    return os;
}
