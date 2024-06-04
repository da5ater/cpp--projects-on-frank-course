#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

using namespace std;

class Player {
    private :
        static int num_player;
        string name;
        int health;
        int xp;
        
    public :
        static int get_num_player();
        
        Player ( string name , int health , int xp);
        ~Player();
};

#endif