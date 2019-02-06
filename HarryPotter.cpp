/*********************************************************************
 ** Program name: Fantasy Combat Game
 ** Author: Humza Ahmed
 ** Date:   8/1/18
 ** Description: Implementation file for the HarryPotter subclass for the Fantasy Combat Game.
 *********************************************************************/

#include "HarryPotter.hpp"


HarryPotter::HarryPotter(){
    Character::strength = 10;
    Character::armor = 0;
    lives = 2;
    srand(static_cast<unsigned int>(time(NULL))); //seed time for rand
    descr = "Harry Potter is a wizard.";
    name = "HarryPotter";
    spAbilities = "Hogwarts: If Harry Potter's strength reaches 0 or below, he immediately recovers and his total strength becomes 20. If he were to die again, then he’s dead.";
}


void HarryPotter::defense(int attack){
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
    
    //Hogwarts special
    if (this->strength <= 0 && lives == 2){
        std::cout << "Harry Potter has died but come back to life. Now with 20 strength!" << std::endl;
        this->strength = 20;
        lives--;
    }
}

int HarryPotter::getStrength(){
    return this->strength;
}

std::string HarryPotter::getDescr(){
    return this->descr;
}

std::string HarryPotter::getName(){
    return this->name;
}

std::string HarryPotter::getSpAbilities(){
    return this->spAbilities;
}
