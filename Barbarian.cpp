/*********************************************************************
 ** Program name: Fantasy Combat Game
 ** Author: Humza Ahmed
 ** Date:   8/1/18
 ** Description: Implementation file for the Barbarian subclass for the Fantasy Combat Game.
 *********************************************************************/

#include "Barbarian.hpp"


Barbarian::Barbarian(){
    Character::strength = 12;
    Character::armor = 0;
    srand(static_cast<unsigned int>(time(NULL))); //seed time for rand
    descr = "Think Conan or Hercules from the movies. Big sword, big muscles, bare torso.";
    name = "Barbarian";
    spAbilities = "None";
}

int Barbarian::getStrength(){
    return this->strength;
}

std::string Barbarian::getDescr(){
    return this->descr;
}

std::string Barbarian::getName(){
    return this->name;
}

std::string Barbarian::getSpAbilities(){
    return this->spAbilities;
}




