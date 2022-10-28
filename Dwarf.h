#pragma once
#include "Character.h"

struct Dwarf : Character
{
    Dwarf(const std::string _name, int _hitpoints, int _armor);
    const std::string& getName() override;
    std::string getStats() override;
    
private:
    const std::string name;
};
