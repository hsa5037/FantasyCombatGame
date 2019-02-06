/*********************************************************************
 ** Program name: Fantasy Combat Game
 ** Author: Humza Ahmed
 ** Date:   8/1/18
 ** Description: Implementation file for the character class for the Fantasy Combat Game.
 *********************************************************************/

#include "Character.hpp"


Character::Character(){
    strength = 0;
    armor = 0;
    descr = "";
    name = "";
    spAbilities = "";
    srand(static_cast<unsigned int>(time(NULL))); //seed time for rand
}


int Character::attack(){
    int randNum = (rand()%6)+1;
    int randNum2 = (rand()%6)+1;
    
    std::cout << "Rolls 2 6 sided dice for a total of " << randNum2 + randNum << " damage." << std::endl;
    return randNum + randNum2;
}

void Character::defense(int attack){
    int dmg = 0;
    
    //Calculate damage inflicted and subtract from strength
    int randNum = (rand()%6)+1;
    int randNum2 = (rand()%6)+1;
    
    std::cout << "Rolls 2 6 sided dice for a total of " << randNum2 + randNum << " defense." << std::endl;
    dmg = attack - (randNum + randNum2) - armor;
    if (dmg < 0)
        dmg = 0;
    std::cout << "Total Damage Inflicted: " << dmg << std::endl;
    this->strength -= dmg;
}

int Character::getArmor(){
    return armor;
}

int Character::getStrength(){
    return strength;
}

std::string Character::getDescr(){
    return descr;
}

std::string Character::getName(){
    return name;
}

std::string Character::getSpAbilities(){
    return spAbilities;
}
