#include "Paladin.h"
#include "Utility.h"

// Paladin::Paladin
Paladin::Paladin(const std::string _name, int _hitpoints, int _armor) : 
Character(_hitpoints, _armor, 10), 
name(_name) 
{
    defensiveItems = makeDefensiveItems(8);
    this->Character::helpfulItems = makeHelpfulItems(8);
}

// Paladin::getName
const std::string& Paladin::getName() { return name; }

// Paladin::getStats
std::string Paladin::getStats() { return getCharacterStats(this); }
