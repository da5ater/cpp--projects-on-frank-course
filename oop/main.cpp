#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

void display_active_player () {
    cout << "Active players: " << Player::get_num_player () << endl;
}

int main() {
    
    display_active_player();
    
    Player obj1("mohamed" , 100,100);

    display_active_player();
    
    Player obj2("mohamed" , 100,100);
  
    display_active_player();
    return 0;
}

