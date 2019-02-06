/*********************************************************************
 ** Program name: Fantasy Combat Game
 ** Author: Humza Ahmed
 ** Date:   8/1/18
 ** Description: Main function for the Fantasy Combat Game.
 *********************************************************************/

#include <iostream>
#include "Barbarian.hpp"
#include "Vampire.hpp"
#include "BlueMen.hpp"
#include "Medusa.hpp"
#include "HarryPotter.hpp"
#include <string>
#include <sstream>

int main() {
    int menuSelection = 0;
    std::string str;
    std::cout << "Welcome to the Fantasy Combat Game!" << std::endl;
    std::cout << "In this game you will choose 2 fantasy characters to fight each other" << std::endl << std::endl;
    
    Character *player1, *player2;
    
    while (menuSelection == 0){
        //Get Player 1 selection
        while (menuSelection == 0){
            std::cout << "Player 1 choose your character!" << std::endl;
            std::cout << "1. Barbarian " << std::endl;
            std::cout << "2. Vampire " << std::endl;
            std::cout << "3. Blue Men " << std::endl;
            std::cout << "4. Medusa " << std::endl;
            std::cout << "5. Harry Potter " << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> menuSelection && !convert.eof()) || (menuSelection != 1 && menuSelection != 2 && menuSelection != 3 && menuSelection != 4 && menuSelection != 5)){
                std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                menuSelection = 0;
            }
        }
        std::cout << std::endl;
        
        //Create player 1 object
        if (menuSelection == 1){
            player1 = new Barbarian;
            std::cout << "You have chosen a " << player1->getName() << std::endl;
            std::cout << "Characteristics: " << player1->getDescr() << std::endl;
            std::cout << "Special Abilities: " << player1->getSpAbilities() << std::endl;
        }
        else if (menuSelection == 2){
            player1 = new Vampire;
            std::cout << "You have chosen a " << player1->getName() << std::endl;
            std::cout << "Characteristics: " << player1->getDescr() << std::endl;
            std::cout << "Special Abilities: " << player1->getSpAbilities() << std::endl;
        }
        else if (menuSelection == 3){
            player1 = new BlueMen;
            std::cout << "You have chosen a " << player1->getName() << std::endl;
            std::cout << "Characteristics: " << player1->getDescr() << std::endl;
            std::cout << "Special Abilities: " << player1->getSpAbilities() << std::endl;
        }
        else if (menuSelection == 4){
            player1 = new Medusa;
            std::cout << "You have chosen a " << player1->getName() << std::endl;
            std::cout << "Characteristics: " << player1->getDescr() << std::endl;
            std::cout << "Special Abilities: " << player1->getSpAbilities() << std::endl;
        }
        else if (menuSelection == 5){
            player1 = new HarryPotter;
            std::cout << "You have chosen a " << player1->getName() << std::endl;
            std::cout << "Characteristics: " << player1->getDescr() << std::endl;
            std::cout << "Special Abilities: " << player1->getSpAbilities() << std::endl;
        }
        menuSelection = 0;
        std::cout << std::endl;
        
        //Get player 2 selection
        while (menuSelection == 0){
            std::cout << "Player 2 choose your character!" << std::endl;
            std::cout << "1. Barbarian " << std::endl;
            std::cout << "2. Vampire " << std::endl;
            std::cout << "3. Blue Men " << std::endl;
            std::cout << "4. Medusa " << std::endl;
            std::cout << "5. Harry Potter " << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> menuSelection && !convert.eof()) || (menuSelection != 1 && menuSelection != 2 && menuSelection != 3 && menuSelection != 4 && menuSelection != 5)){
                std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                menuSelection = 0;
            }
        }
        std::cout << std::endl;
        
        //Create player 2 object
        if (menuSelection == 1){
            player2 = new Barbarian;
            std::cout << "You have chosen a " << player2->getName() << std::endl;
            std::cout << "Characteristics: " << player2->getDescr() << std::endl;
            std::cout << "Special Abilities: " << player2->getSpAbilities() << std::endl;
        }
        else if (menuSelection == 2){
        player2 = new Vampire;
        std::cout << "You have chosen a " << player2->getName() << std::endl;
        std::cout << "Characteristics: " << player2->getDescr() << std::endl;
        std::cout << "Special Abilities: " << player2->getSpAbilities() << std::endl;
        }
        else if (menuSelection == 3){
        player2 = new BlueMen;
        std::cout << "You have chosen a " << player2->getName() << std::endl;
        std::cout << "Characteristics: " << player2->getDescr() << std::endl;
        std::cout << "Special Abilities: " << player2->getSpAbilities() << std::endl;
        }
        else if (menuSelection == 4){
        player2 = new Medusa;
        std::cout << "You have chosen a " << player2->getName() << std::endl;
        std::cout << "Characteristics: " << player2->getDescr() << std::endl;
        std::cout << "Special Abilities: " << player2->getSpAbilities() << std::endl;
        }
        else if (menuSelection == 5){
        player2 = new HarryPotter;
        std::cout << "You have chosen a " << player2->getName() << std::endl;
        std::cout << "Characteristics: " << player2->getDescr() << std::endl;
        std::cout << "Special Abilities: " << player2->getSpAbilities() << std::endl;
        }
        
        //Rounds of combat
        int roundCount = 1;
        std::cout << std::endl;
        while (player1->getStrength() > 0 && player2->getStrength() > 0){
            std::cout << std::endl;
            std::cout << "Round " << roundCount << std::endl;
            std::cout << "Player 1 Attacks" << std::endl;
            std::cout << "Attacker Type: " << player1->getName() << std::endl;
            std::cout << "Defender Type: " << player2->getName() << std::endl;
            std::cout << "Defender Armor: " << player2->getArmor() << std::endl;
            std::cout << "Defender Strength: " << player2->getStrength() << std::endl;
            player2->defense(player1->attack());
            std::cout << "Defender's Updated Strength : " << player2->getStrength() << std::endl;
            std::cout << std::endl;
            if (player2->getStrength() <= 0)
                break;
            std::cout << "Player 2 Attacks" << std::endl;
            std::cout << "Attacker Type: " << player2->getName() << std::endl;
            std::cout << "Defender Type: " << player1->getName() << std::endl;
            std::cout << "Defender Armor: " << player1->getArmor() << std::endl;
            std::cout << "Defender Strength: " << player1->getStrength() << std::endl;
            player1->defense(player2->attack());
            std::cout << "Defender's Updated Strength : " << player1->getStrength() << std::endl;
            roundCount++;
        }
        
        
        if (player1->getStrength() <= 0)
            std::cout << "Player 2 Wins!" << std::endl;
        else if (player2->getStrength() <= 0)
            std::cout << "Player 1 Wins!" << std::endl;
        
        //End of combat menu
        std::cout << std::endl;
        menuSelection = 0;
        while (menuSelection == 0){
            std::cout << "1. Play Again? " << std::endl;
            std::cout << "2. Exit Game " << std::endl;
            std::getline(std::cin, str);
            std::stringstream convert(str);
            if ((convert >> menuSelection && !convert.eof()) || (menuSelection != 1 && menuSelection != 2)){
                std::cout << "Error: Invalid Entry! Please enter a 1 or 2" << std::endl;
                menuSelection = 0;
            }
        }
        if (menuSelection == 1)
            menuSelection = 0;
        delete player1;
        delete player2;
    }
    
    
    
    return 0;
}
