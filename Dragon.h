#pragma once
#include "Character.h"

struct Dragon : Character
{
    Dragon(const std::string _name, int _hitpoints, int _armor);
    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
private:
    const std::string name;
};

