/*********************************************************************
** Program name: Fantasy Combat Game
** Author: Humza Ahmed
** Date:   8/1/18
** Description: Implementation file for the Vampire subclass for the Fantasy Combat Game.
*********************************************************************/

#include "Vampire.hpp"


Vampire::Vampire(){
    Character::strength = 18;
    Character::armor = 1;
    srand(static_cast<unsigned int>(time(NULL))); //seed time for rand
    descr = "Suave, debonair, but vicious and surprisingly resilient.";
    name = "Vampire";
    spAbilities = "Charm: Vampires can charm an opponent into not attacking. For a given attack there is a 50% chance that their opponent does not actually attack them.";
}

int Vampire::attack(){
    int randNum = (rand()%12)+1;
    
    std::cout << "Rolls 1 12 sided die for a total of " << randNum << " damage." << std::endl;
    return randNum;
}

void Vampire::defense(int attack){
    int dmg = 0;
    
    //Checks if charm is true
    if (charm()){
        std::cout << "Vampire used Charm! The opponent could not attack" << std::endl;
        std::cout << "No strength was lost!" << std::endl;
        return;
    }
    
    //Calculate damage inflicted and subtract from strength
    int randNum = (rand()%6)+1;
    
    std::cout << "Rolls 1 6 sided die for a total of " << randNum << " defense." << std::endl;
    dmg = attack - (randNum) - armor;
    if (dmg < 0)
        dmg = 0;
    std::cout << "Total Damage Inflicted: " << dmg << std::endl;
    this->strength -= dmg;
}

int Vampire::getStrength(){
    return this->strength;
}

std::string Vampire::getDescr(){
    return this->descr;
}

std::string Vampire::getName(){
    return this->name;
}

std::string Vampire::getSpAbilities(){
    return this->spAbilities;
}

bool Vampire::charm(){
    int randNum = (rand()%2)+1;
    
    if (randNum == 1)
        return true;
    else
        return false;
}
