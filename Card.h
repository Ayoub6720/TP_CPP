#ifndef CARD_H
#define CARD_H

#include <string>

class Card{
    protected:
    const std::string cardName;

    public:
    virtual void displayInfo() = 0;
    Card(const std::string name) : 
    cardName(name) {}
    virtual ~Card() = default;
};

#endif