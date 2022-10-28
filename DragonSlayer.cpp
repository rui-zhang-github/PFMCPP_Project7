#include "DragonSlayer.h"
#include "Dragon.h"
#include "Utility.h"

//DragonSlayer::DragonSlayer
DragonSlayer::DragonSlayer(const std::string _name, int _hitpoints, int _armor) : 
Character(_hitpoints, _armor, 4), 
name(_name) 
{
    defensiveItems = makeDefensiveItems(4);
    this->Character::helpfulItems = makeHelpfulItems(4);
    attackItem = std::make_unique<AttackItem>();
}

//DragonSlayer::getName
const std::string& DragonSlayer::getName() { return name; }

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
        //DragonSlayers get a 10x boost when attacking dragons, from their attack item.
        //so they should USE their attack item before attacking the dragon... 
        //note: they should only use the item if the dragon's hitpoints are > 0...
        //note: items are single-use only, so you need to reset it after use.  
        //look in the Character class for how the other item types are reset after use.
        if( dragon->getHP() > 0 && attackItem != nullptr )
        {
            attackItem->use(this);
            attackItem.reset(); //can only be used once!
        }
        while( dragon->getHP() > 0 )
        {
            dragon->takeDamage(attackDamage);
        }
    }
        
    Character::attack(other);
        
}

//DragonSlayer::getStats
std::string DragonSlayer::getStats() { return getCharacterStats(this); }
