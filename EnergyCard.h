#ifndef ENERGYCARD_H
#define ENERGYCARD_H
#include "Card.h"
#include <string>

class EnergyCard : public Card {
    private:
    const std::string energyType;
    public:
    EnergyCard(const std::string energyT):
    Card("Energy"),
    energyType(energyT){}

    
};

#endif