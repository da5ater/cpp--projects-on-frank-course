// Section 20
// Challenge 2
//  Lists

#include <cctype>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <string>

using namespace std;

class Song {
  friend std::ostream &operator<<(std::ostream &os, const Song &s);
  std::string name;
  std::string artist;
  int rating;

public:
  Song() = default;
  Song(std::string name, std::string artist, int rating)
      : name{name}, artist{artist}, rating{rating} {}
  std::string get_name() const { return name; }
  std::string get_artist() const { return artist; }
  int get_rating() const { return rating; }

  bool operator<(const Song &rhs) const { return this->name < rhs.name; }

  bool operator==(const Song &rhs) const { return this->name == rhs.name; }
};

std::ostream &operator<<(std::ostream &os, const Song &s) {
  os << std::setw(20) << std::left << s.name << std::setw(30) << std::left
     << s.artist << std::setw(2) << std::left << s.rating;
  return os;
}

void display_menu() {
  std::cout << "\nF - Play First Song" << std::endl;
  std::cout << "N - Play Next song" << std::endl;
  std::cout << "P - Play Previous song" << std::endl;
  std::cout << "A - Add and play a new Song at current location" << std::endl;
  std::cout << "L - List the current playlist" << std::endl;
  std::cout << "===============================================" << std::endl;
  std::cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song) {
  cout << "Playing :\n"
       << setw(10) << left << song.get_name() << setw(10) << right
       << song.get_artist() << endl;
}

void display_playlist(const std::list<Song> &playlist) {
  cout << "PLAYLIST : " << endl;
    for (auto it = playlist.begin(); it != playlist.end(); ++it) {
    
         cout << setw(30) << left << it->get_name() << setw(10) << left
         << it->get_artist() << setw(30) << right << it->get_rating() << endl;
  }
}

int main() {

  std::list<Song> playlist{{"God's Plan", "Drake", 5},
                           {"Never Be The Same", "Camila Cabello", 5},
                           {"Pray For Me", "The Weekend and K. Lamar", 4},
                           {"The Middle", "Zedd, Maren Morris & Grey", 5},
                           {"Wait", "Maroone 5", 4},
                           {"Whatever It Takes", "Imagine Dragons", 3}};

  std::list<Song>::iterator current_song = playlist.begin();
  bool terminate = false;
  char option;
  display_menu();
  do {
    cin >> option;
    option = tolower(option);

    switch (option) {
    case 'l':
      display_playlist(playlist);
      break;
    case 'q':
      terminate = true;
      break;
    }
  } while (!terminate);

  std::cout << "Thanks for listening!" << std::endl;
  return 0;
}