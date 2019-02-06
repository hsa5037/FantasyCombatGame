/*********************************************************************
 ** Program name: Fantasy Combat Game
 ** Author: Humza Ahmed
 ** Date:   8/1/18
 ** Description: Implementation file for the BlueMen subclass for the Fantasy Combat Game.
 *********************************************************************/

#include "BlueMen.hpp"


BlueMen::BlueMen(){
    Character::strength = 12;
    Character::armor = 3;
    srand(static_cast<unsigned int>(time(NULL))); //seed time for rand
    descr = "They are small, 6 inch tall, but fast and tough. They are hard to hit so they can take some damage. They can also do a LOT of damage when they crawl inside enemies’ armor or clothing.";
    name = "BlueMen";
    spAbilities = "Mob: Blue Men are actually a swarm of small individuals. For every 4 points of damage, they lose one defense die. For example, if they have a strength of 8, they would have 2d6 for defense.";
}

int BlueMen::attack(){
    int randNum = (rand()%10)+1;
    int randNum2 = (rand()%10)+1;
 
    std::cout << "Rolls 2 10 sided dice for a total of " << randNum2 + randNum << " damage." << std::endl;
    return randNum + randNum2;
}
 
void BlueMen::defense(int attack){
    int dmg = 0;
    int randNum = 0, randNum2 = 0, randNum3 = 0;
    int numDice = 0;
 
    //Mob special
    if (getStrength() > 8){
        randNum = (rand()%6)+1;
        randNum2 = (rand()%6)+1;
        randNum3 = (rand()%6)+1;
        numDice = 3;
    }
    else if (getStrength() > 4){
        randNum = (rand()%6)+1;
        randNum2 = (rand()%6)+1;
        numDice = 2;
    }
    else
        randNum = (rand()%6)+1;

    //subtracts damage
    std::cout << "Rolls " << numDice << " 6 sided dice for a total of " << randNum2 + randNum + randNum3 << " defense." << std::endl;
    dmg = attack - (randNum + randNum2 + randNum3) - armor;
    if (dmg < 0)
        dmg = 0;
    std::cout << "Total Damage Inflicted: " << dmg << std::endl;
    this->strength -= dmg;
}

int BlueMen::getStrength(){
    return this->strength;
}

std::string BlueMen::getDescr(){
    return this->descr;
}

std::string BlueMen::getName(){
    return this->name;
}

std::string BlueMen::getSpAbilities(){
    return this->spAbilities;
}
