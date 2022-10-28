#include "Dwarf.h"
#include "Utility.h"

//Dwarf::Dwarf
Dwarf::Dwarf(const std::string _name, int _hitpoints, int _armor) : 
Character(_hitpoints, _armor, 4), 
name(_name)
{
    defensiveItems = makeDefensiveItems(6);
    this->Character::helpfulItems = makeHelpfulItems(6);
}

//Dwarf::getName
const std::string& Dwarf::getName() { return name; }

//Dwarf::getStats
std::string Dwarf::getStats() { return getCharacterStats(this); }
