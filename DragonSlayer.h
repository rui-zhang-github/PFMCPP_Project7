#pragma once
#include "Character.h"
#include "AttackItem.h"

struct DragonSlayer : Character
{
    DragonSlayer(const std::string _name, int _hitpoints, int _armor);
    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
protected:
    std::unique_ptr<AttackItem> attackItem;
private:
    const std::string name;
};
