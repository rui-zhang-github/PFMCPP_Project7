#pragma once

#include "Item.h"

/*
no need to 
#include "Character.h" 
or
struct Character;
Because Item.h already does it
*/

struct HelpfulItem : Item
{
    HelpfulItem() : Item("helpful item", 2) { }
    void use(Character* character) override;
};

