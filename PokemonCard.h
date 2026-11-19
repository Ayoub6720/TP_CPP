#ifndef POKEMONCARD_H
#define POKEMONCARD_H

#include "Card.h"
#include <vector>
#include <tuple>

class PokemonCard : public Card {
    private:
    const std::string pokemonType;
    const std::string familyName;
    const unsigned int evolutionLevel;
    const unsigned int maxHP;
    int hp;

    /*
    const int energyCost;
    const int energyActual;
    const std::string attackDescription;
    const int damageAttack;
    */

    std::vector<std::tuple<int,int,std::string,int>> attacks;
    
    public: 
    PokemonCard(const std::string& name,
                const std::string& type,
                const std::string& family,
                unsigned int evoLevel,
                unsigned int maxHp, 
                std::vector<std::tuple<int, int, std::string, int>> attack): 
            Card(name),
            pokemonType(type),
            familyName(family),
            evolutionLevel(evoLevel),
            maxHP(maxHp),
            hp(maxHp),
            attacks(attack) {}
};

#endif