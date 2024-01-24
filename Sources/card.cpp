#include "card.h"


Card::Card(int id, string text){
    this->id=id;
    this->text=text;
}

// virtual Card::~Card(){}

int Card::getId(){
    return id;
}

string Card::getText(){
    return text;
}

// virtual void Card::cardAction(Player* player, Player* opponent){}


PointCard::PointCard(int id, string text, int points):Card(id,text){
    this->points=points;
}

void PointCard::cardAction(Player* player, Player* opponent){
    if(points>0){
        player->addPoints(points);
        opponent->removePoints(points);
    }
    if(points<0){
        points=points*(-1);
        player->removePoints(points);
        opponent->addPoints(points);
    }

}

MoveCard::MoveCard(int id, string text, MoveType type):Card(id,text){
    this->type=type;
}

void MoveCard::cardAction(Player* player, Player* opponent){
    switch(type){
        case DoNothing:
            break;
        case PlayTwice:
            opponent->missNextTurn();
            break;
        case MissTurn:
            player->missNextTurn();
            break;
    }

}






