#pragma once

#include "Item.h"

/*
no need to 
#include "Character.h" 
or
struct Character;
Because Item.h already does it
*/

struct AttackItem : Item
{
    AttackItem() : Item("attack item", 10) { }
    void use(Character* character) override;
};
