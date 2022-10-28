#pragma once

#include "Item.h"

/*
no need to 
#include "Character.h" 
or
struct Character;
Because Item.h already does it
*/

struct DefensiveItem : Item
{
    DefensiveItem() : Item("defensive item", 3) { }
    void use(Character* character) override;
};
