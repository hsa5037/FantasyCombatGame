/*********************************************************************
 ** Program name: Fantasy Combat Game
 ** Author: Humza Ahmed
 ** Date:   8/1/18
 ** Description: Definition file for the Barbarian subclass for the Fantasy Combat Game.
 *********************************************************************/

#ifndef Barbarian_hpp
#define Barbarian_hpp

#include <iostream>
#include "Character.hpp"
#include <cstdlib>
#include <ctime>
#include <string>

class Barbarian : public Character
{
protected:
    
    
public:
    //Constructor
    Barbarian();
    
    //Member functions
    virtual int getStrength();
    virtual std::string getDescr();
    virtual std::string getName();
    virtual std::string getSpAbilities();
    
    
    
    
};

#endif /* Barbarian_hpp */
