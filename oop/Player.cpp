#include "Player.h"

using namespace std;


int Player::num_player = 0;


int Player::get_num_player (){
    return num_player;
}


Player::Player ( string name , int health , int xp) :
    name{name} , health{health} , xp {xp} {
        ++num_player;
    }
    
Player::~Player() {
        --num_player;
    }
    
