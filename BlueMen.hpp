/*********************************************************************
 ** Program name: Fantasy Combat Game
 ** Author: Humza Ahmed
 ** Date:   8/1/18
 ** Description: Definition file for the BlueMen subclass for the Fantasy Combat Game.
 *********************************************************************/

#ifndef BlueMen_hpp
#define BlueMen_hpp

#include <iostream>
#include "Character.hpp"
#include <cstdlib>
#include <ctime>
#include <string>

class BlueMen : public Character
{
protected:
    
    
public:
    //Constructor
    BlueMen();
    
    //Member functions
    virtual int attack();
    virtual void defense(int attack);
    virtual int getStrength();
    virtual std::string getDescr();
    virtual std::string getName();
    virtual std::string getSpAbilities();
    
    
    
    
};

#endif /* BlueMen_hpp */
