/*********************************************************************
 ** Program name: Fantasy Combat Game
 ** Author: Humza Ahmed
 ** Date:   8/1/18
 ** Description: Definition file for the character class for the Fantasy Combat Game.
 *********************************************************************/

#ifndef Character_hpp
#define Character_hpp

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Character
{
protected:
    int strength, armor;
    std::string descr, name, spAbilities;
    
    
    
    
public:
    //Constructor
    Character();
    
    //Member functions
    virtual int attack();
    virtual void defense(int attack);
    virtual int getStrength();
    int getArmor();
    virtual std::string getDescr();
    virtual std::string getName();
    virtual std::string getSpAbilities();
    
    
    
    
    
};

#endif /* Character_hpp */
