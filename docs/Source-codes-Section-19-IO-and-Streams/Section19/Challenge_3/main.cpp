// Section 19
// Challenge 3
// Word counter
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

int main() {

  ifstream in_file{"romeoandjuliet.txt"};
  string line;
  string buf;
  string cmprthis;
  int doccount;
  int wrdcount;

  cout << "write a word\n";
  cin >> cmprthis;

  if (!in_file) {
    cerr << "error\n";
    return 1;
  }

  while (!in_file.eof()) {
    getline(in_file, line);
    stringstream obj{line};

    while (obj >> buf) {
      doccount++;
      if (buf.find(cmprthis) != string::npos) {
        wrdcount++;
      }
    }
  }
  cout << "search " << doccount << "times \n";
  cout << cmprthis << " was found " << wrdcount << "times\n";

  cout << endl;
  return 0;
}
