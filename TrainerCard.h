#ifndef ENERGYCARD_H
#define ENERGYCARD_H
#include "Card.h"
#include <string>

class TrainerCard : public Card {
    private:
    const std::string trainerEffect;
    public:
    TrainerCard(std::string TrainerName):
    Card(TrainerName),
    trainerEffect("Heal all you action pokemon"){}

    
};

#endif