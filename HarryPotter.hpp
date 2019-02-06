/*********************************************************************
 ** Program name: Fantasy Combat Game
 ** Author: Humza Ahmed
 ** Date:   8/1/18
 ** Description: Definition file for the HarryPotter subclass for the Fantasy Combat Game.
 *********************************************************************/

#ifndef HarryPotter_hpp
#define HarryPotter_hpp

#include <iostream>
#include "Character.hpp"
#include <cstdlib>
#include <ctime>
#include <string>

class HarryPotter : public Character
{
protected:
    int lives;
    
    
public:
    //Constructor
    HarryPotter();
    
    //Member functions
    //virtual int attack();
    virtual void defense(int attack);
    virtual int getStrength();
    virtual std::string getDescr();
    virtual std::string getName();
    virtual std::string getSpAbilities();
    
    
    
    
};

#endif /* HarryPotter_hpp */
