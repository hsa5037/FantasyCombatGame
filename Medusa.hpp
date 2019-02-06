/*********************************************************************
 ** Program name: Fantasy Combat Game
 ** Author: Humza Ahmed
 ** Date:   8/1/18
 ** Description: Definition file for the Medusa subclass for the Fantasy Combat Game.
 *********************************************************************/

#ifndef Medusa_hpp
#define Medusa_hpp

#include <iostream>
#include "Character.hpp"
#include <cstdlib>
#include <ctime>
#include <string>

class Medusa : public Character
{
protected:
    
    
public:
    //Constructor
    Medusa();
    
    //Member functions
    virtual int attack();
    virtual void defense(int attack);
    virtual int getStrength();
    virtual std::string getDescr();
    virtual std::string getName();
    virtual std::string getSpAbilities();
    
    
    
    
};

#endif /* Medusa_hpp */
