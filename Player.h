#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <vector>
#include "Card.h"
#include "PokemonCard.h"
#include "EnergyCard.h"
#include "TrainerCard.h"

class Player{
    private:
    std::string playerName;
    std::vector<Card*> benchCards;
    std::vector<PokemonCard*> actionsCards;

    public:
    Player(const std::string& name) : 
    playerName(name) {}
    void addCardToBench(Card);
};

#endif