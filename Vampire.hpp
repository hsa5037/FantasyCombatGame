/*********************************************************************
 ** Program name: Fantasy Combat Game
 ** Author: Humza Ahmed
 ** Date:   8/1/18
 ** Description: Definition file for the Vampire subclass for the Fantasy Combat Game.
 *********************************************************************/

#ifndef Vampire_hpp
#define Vampire_hpp

#include <iostream>
#include "Character.hpp"
#include <cstdlib>
#include <ctime>
#include <string>

class Vampire : public Character
{
protected:
    
    
public:
    //Constructor
    Vampire();
    
    //Member functions
    virtual int attack();
    virtual void defense(int attack);
    virtual int getStrength();
    virtual std::string getDescr();
    virtual std::string getName();
    virtual std::string getSpAbilities();
    bool charm();
    
    
    
};

#endif /* Vampire_hpp */
