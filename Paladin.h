#pragma once
#include "Character.h"

struct Paladin : Character
{
    Paladin(const std::string _name, int _hitPoints, int _armor);
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
};
