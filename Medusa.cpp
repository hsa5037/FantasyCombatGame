/*********************************************************************
 ** Program name: Fantasy Combat Game
 ** Author: Humza Ahmed
 ** Date:   8/1/18
 ** Description: Implementation file for the Medusa subclass for the Fantasy Combat Game.
 *********************************************************************/

#include "Medusa.hpp"


Medusa::Medusa(){
    Character::strength = 12;
    Character::armor = 3;
    srand(static_cast<unsigned int>(time(NULL))); //seed time for rand
    descr = "Scrawny lady with snakes for hair which helps her during combat. Just don’t look at her!";
    name = "Medusa";
    spAbilities = "Glare: If a Medusa rolls a 12 when attacking then the target instantly gets turned into stone and Medusa wins! If Medusa uses Glare on Harry Potter on his first life, then Harry Potter comes back to life.";
}

int Medusa::attack(){
    int randNum = (rand()%6)+1;
    int randNum2 = (rand()%6)+1;
    
    //Glare special
    if (randNum + randNum2 == 12){
        std:: cout << "Medusa used Glare! The defender has turned to stone!" << std::endl;
        int dmg = 100;
        return dmg;
    }
 
    std::cout << "Rolls 2 6 sided dice for a total of " << randNum2 + randNum << " damage." << std::endl;
    return randNum + randNum2;
    }
 
void Medusa::defense(int attack){
    int dmg = 0;
 
    //Calculate damage inflicted and subtract from strength
    int randNum = (rand()%6)+1;
 
    std::cout << "Rolls 1 6 sided dice for a total of " << randNum << " defense." << std::endl;
    dmg = attack - (randNum ) - armor;
    if (dmg < 0)
        dmg = 0;
    std::cout << "Total Damage Inflicted: " << dmg << std::endl;
    this->strength -= dmg;
    }

int Medusa::getStrength(){
    return this->strength;
}

std::string Medusa::getDescr(){
    return this->descr;
}

std::string Medusa::getName(){
    return this->name;
}

std::string Medusa::getSpAbilities(){
    return this->spAbilities;
}




